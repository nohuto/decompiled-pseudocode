/*
 * XREFs of RtlDeleteCriticalSection @ 0x180008D10
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     RtlDeleteResource @ 0x180008CC0 (RtlDeleteResource.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x1800F9A60 (RtlTraceDatabaseDestroy.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 * Callees:
 *     sub_180008E00 @ 0x180008E00 (sub_180008E00.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 **v9; // rcx
  __int64 v10; // rax

  v2 = a1[3];
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = ZwClose(v2);
  else
    v3 = 0;
  v4 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive(&qword_18015C1F8);
    v7 = (__int64 *)(v4 + 16);
    if ( *(_QWORD *)(v4 + 16) )
    {
      v8 = (__int64 *)*v7;
      v9 = *(__int64 ***)(v4 + 24);
      if ( *(__int64 **)(*v7 + 8) != v7 || *v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
    }
    RtlReleaseSRWLockExclusive(&qword_18015C1F8);
    v10 = sub_180008E00(*(unsigned __int16 *)(v4 + 2), *(unsigned __int16 *)(v4 + 44));
    if ( v10 && qword_180159A08 )
      sub_1800F8F80(qword_180159A08, v10);
    memset((void *)v4, 0, 0x30uLL);
    if ( !v6 )
      sub_180008E24((PSLIST_ENTRY)v4);
  }
  memset(a1, 0, 0x28uLL);
  return v3;
}
