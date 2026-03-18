/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00885AC
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00884DC (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFreeAllUserMem @ 0x1C0095354 (rimFreeAllUserMem.c)
 *     rimFreePointerRawDataListWorker @ 0x1C010EA78 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C0115B98 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C0115F04 (rimObsReleaseAllTrackedHandles.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  void *v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (_QWORD *)(*a1 + 16LL);
  if ( (_QWORD *)*v2 != v2 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
    v5 = *(_DWORD *)(v1 + 4);
    if ( v5 == 2 )
    {
      if ( !*(_BYTE *)(v1 + 8) )
      {
        v6 = *(_QWORD *)(v1 + 408);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v14,
          (struct RIMLOCK *)(v6 + 96));
        RIMFreeSpecificDevWorker(v6, v1 + 64);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v14);
        ObfDereferenceObject((PVOID)v6);
      }
    }
    else if ( v5 == 1 )
    {
      v8 = *(_QWORD **)(v1 + 664);
      while ( v8 != (_QWORD *)(v1 + 664) )
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        v10 = v9[9];
        if ( v10 )
          Win32FreePool(v10);
        rimFreePointerRawDataListWorker(v9[7]);
        v11 = *v9;
        v12 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        Win32FreePool((__int64)v9);
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
      v13 = *(void **)(v1 + 72);
      if ( v13 != (void *)-1LL )
      {
        ZwClose(v13);
        *(_QWORD *)(v1 + 72) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
    }
  }
  return 0LL;
}
