/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1400FCFF0
 * Callers:
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x140213F48 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  _KPROCESS *Process; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 80) & 7;
  v3 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = *v3;
  v13 = result;
  if ( (result & 1) == 0 )
  {
    if ( !result )
      return result;
    if ( (result & 0x400) != 0 )
      return result;
    if ( (result & 0x800) == 0 )
      return result;
    result = MiLockTransitionLeafPage((ULONG_PTR)v3, 0LL);
    v9 = result;
    if ( !result )
      return result;
    goto LABEL_16;
  }
  v5 = MI_READ_PTE_LOCK_FREE(&v13);
  result = MiIsPfnInline((v5 >> 12) & 0xFFFFFFFFFLL);
  if ( !(_DWORD)result )
    return result;
  v9 = 48 * v6 - 0x58000000000LL;
  result = *(_BYTE *)(v9 + 35) & 7;
  if ( (_DWORD)result == v2 )
    return result;
  if ( v7 )
  {
    v11 = *(_DWORD *)(v7 + 48);
    goto LABEL_10;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ActiveProcessors.Bitmap[3] || *(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 152LL) )
  {
    result = MiLocateAddress(v8);
    if ( !result )
      return result;
    v11 = *(_DWORD *)(result + 48);
LABEL_10:
    result = (v11 & 7u) - 1;
    if ( (result & 0xFFFFFFFD) == 0 )
      return result;
  }
  MiLockPageAtDpcInline(v9);
LABEL_16:
  if ( (unsigned int)MiGetPfnPriority(v9) != v2 )
    MiUpdatePfnPriority(v12, v2, 0LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
