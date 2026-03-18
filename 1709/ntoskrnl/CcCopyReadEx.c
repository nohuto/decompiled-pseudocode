/*
 * XREFs of CcCopyReadEx @ 0x14007AB90
 * Callers:
 *     CcCopyRead @ 0x14059BCC0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140687560 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x1406AF6E0 (FsRtlCopyRead.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x140020D8C (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140116AA8 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _SLIST_ENTRY *Object,
        __int64 *a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r11d
  _SLIST_ENTRY *Next; // r13
  char v12; // di
  __int64 v13; // rsi
  void *v14; // r15
  struct _KTHREAD *v15; // r12
  __int64 v16; // r10
  _SLIST_ENTRY *v17; // rax
  _DWORD *v18; // rax
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v21; // [rsp+48h] [rbp-40h]
  unsigned __int8 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h]

  v24 = a3;
  LODWORD(v23) = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v10 = 0;
  if ( v10 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
    v10 = 2;
  v20 = 0LL;
  Next = Object[3].Next;
  v12 = 1;
  if ( v10 )
    v12 = a4;
  v13 = a3;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x1FBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v14 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v15 = a7;
  if ( ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, a7);
  if ( v12 )
    __incgsdword(0x2ED4u);
  else
    __incgsdword(0x2ED0u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( v15 && v15 != KeGetCurrentThread() )
    IoReferenceIoAttributionFromThread((__int64)v15, (__int64)&v20);
  v22 = CcMapAndCopyFromCache((int)Object, v14, (__int64)&v23, (LODWORD(Next->Next) >> 18) & 7, v20);
  if ( v22 )
  {
    v21 = KeGetCurrentThread();
    __addgsdword(0x5E44u, HIDWORD(v21[1].Timer.Header.WaitListHead.Blink));
    if ( (_DWORD)v23 && ((__int64)Next->Next & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object, a2, v24, v15);
    v16 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
    v17 = Object[3].Next;
    _InterlockedExchange64((volatile __int64 *)&v17[1], (__int64)v17[2].Next);
    _InterlockedExchange64((volatile __int64 *)&v17[1].Next + 1, *((_QWORD *)&v17[2].Next + 1));
    _InterlockedExchange64((volatile __int64 *)&v17[2], *a2);
    _InterlockedExchange64((volatile __int64 *)&v17[2].Next + 1, v13 + *a2);
    if ( (*(_DWORD *)(v16 + 152) & 0x200000) != 0
      && (unsigned int)((LODWORD(v17[2].Next) >> 12) - (*((_DWORD *)&v17[1].Next + 2) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v16, 0x200000LL, 0LL);
    }
    v18 = a6;
    *a6 = 0;
    *((_QWORD *)v18 + 1) = v13;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  if ( v20 )
    IoDiskIoAttributionDereference(v20);
  return v22;
}
