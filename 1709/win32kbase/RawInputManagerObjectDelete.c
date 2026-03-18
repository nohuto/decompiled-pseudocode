/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C008CB2C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C008CA68 (RIMObjectManagerCallout.c)
 * Callees:
 *     rimFreeAllUserMem @ 0x1C000930C (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000C81C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C010D9C8 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C0114664 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C01149D0 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax
  struct _KTHREAD **v6; // rbx
  __int64 v7; // r8
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  void *v14; // rcx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (_QWORD *)(*a1 + 16);
  if ( (_QWORD *)*v2 != v2 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
    v5 = *(_DWORD *)(v1 + 4);
    if ( v5 == 2 )
    {
      if ( !*(_BYTE *)(v1 + 8) )
      {
        v6 = *(struct _KTHREAD ***)(v1 + 408);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v15, v6 + 12);
        RIMFreeSpecificDevWorker((__int64)v6, v1 + 64, v7);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v15);
        ObfDereferenceObject(v6);
      }
    }
    else if ( v5 == 1 )
    {
      v9 = *(_QWORD **)(v1 + 664);
      while ( v9 != (_QWORD *)(v1 + 664) )
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        v11 = v10[9];
        if ( v11 )
          Win32FreePool(v11);
        rimFreePointerRawDataListWorker(v10[7]);
        v12 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v13 = (_QWORD *)v10[1], (_QWORD *)*v13 != v10) )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        Win32FreePool((__int64)v10);
      }
      RIMLockExclusive(v1 + 696);
      rimFreeAllUserMem(v1);
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v1 + 696));
      Win32FreePool(*(_QWORD *)(v1 + 1016));
      *(_QWORD *)(v1 + 1016) = 0LL;
      *(_QWORD *)(v1 + 1016) = 0LL;
    }
    else
    {
      v14 = *(void **)(v1 + 72);
      if ( v14 != (void *)-1LL )
      {
        ZwClose(v14);
        *(_QWORD *)(v1 + 72) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
