/*
 * XREFs of MiUpdatePrefetchPriority @ 0x140113880
 * Callers:
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x14021BF50 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG_PTR *v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  _KPROCESS *Process; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 80) & 7;
  v5 = (ULONG_PTR *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = *v5;
  v14 = result;
  if ( (result & 1) == 0 )
  {
    if ( !result )
      return result;
    if ( (result & 0x400) != 0 )
      return result;
    if ( (result & 0x800) == 0 )
      return result;
    result = MiLockTransitionLeafPage(v5, 0LL, a3, a4);
    v11 = result;
    if ( !result )
      return result;
    goto LABEL_9;
  }
  v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v14);
  result = MiIsPfnInline(v7);
  if ( !(_DWORD)result )
    return result;
  v11 = 48 * v8 - 0x58000000000LL;
  result = *(_BYTE *)(v11 + 35) & 7;
  if ( (_DWORD)result == v4 )
    return result;
  if ( v10 )
  {
    result = (*(_DWORD *)(v10 + 48) & 7u) - 1;
    if ( (result & 0xFFFFFFFD) == 0 )
      return result;
    goto LABEL_8;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ActiveProcessors.Bitmap[3] && !*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 152LL)
    || (result = MiLocateAddress(v9)) != 0 && (result = (*(_DWORD *)(result + 48) & 7u) - 1, (result & 0xFFFFFFFD) != 0) )
  {
LABEL_8:
    MiLockPageAtDpcInline(v11);
LABEL_9:
    if ( (unsigned int)MiGetPfnPriority(v11) != v4 )
      MiUpdatePfnPriority(v13);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
