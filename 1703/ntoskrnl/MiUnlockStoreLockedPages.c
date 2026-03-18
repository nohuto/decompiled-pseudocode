/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14002E4F4
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x140039E90 (SmKmUnlockMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  unsigned __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // r15
  __int64 v8; // rcx

  v1 = (__int64 *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    result = *v1;
    if ( *v1 == -1 )
      break;
    v6 = 48 * result - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
      v3 |= 2u;
    else
      v3 &= ~2u;
    result = MiWriteCompletePfn(v6, v3);
    v8 = result ? *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)) : 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    if ( result )
      result = MiReleasePageFileInfo(v8, result, 0LL);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
