/*
 * XREFs of VrpAllocateDiffHiveEntry @ 0x14070CFF4
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14070D4FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeInitializeWaitChain @ 0x140249918 (KeInitializeWaitChain.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 */

_QWORD *__fastcall VrpAllocateDiffHiveEntry(unsigned __int16 *a1, const void **a2)
{
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  WCHAR *v8; // rdi
  WCHAR *v9; // r14
  WCHAR v10; // ax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v3 = *a1 + 68 + *(unsigned __int16 *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x67655256u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v7 = 314159LL;
    v8 = (WCHAR *)*((_QWORD *)a1 + 1);
    v9 = &v8[(unsigned __int64)*a1 >> 1];
    while ( v8 < v9 )
    {
      v10 = RtlUpcaseUnicodeChar(*v8++);
      v7 = 37 * ((unsigned __int8)v10 + 37 * v7) + HIBYTE(v10);
    }
    v6[3] = 0LL;
    v6[1] = v7;
    v6[2] = 1LL;
    KeInitializeWaitChain(v6 + 6);
    v11 = *a1;
    *((_WORD *)v6 + 32) = v11;
    memmove((char *)v6 + 68, *((const void **)a1 + 1), v11);
    v12 = *(unsigned __int16 *)a2;
    *((_WORD *)v6 + 33) = v12;
    memmove((char *)v6 + 2 * ((unsigned __int64)*((unsigned __int16 *)v6 + 32) >> 1) + 68, a2[1], v12);
  }
  return v6;
}
