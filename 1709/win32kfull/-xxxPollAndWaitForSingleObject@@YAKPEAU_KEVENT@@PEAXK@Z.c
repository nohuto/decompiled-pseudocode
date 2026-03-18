/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0115708
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C0115464 (xxxWaitForInputIdle.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C0112D44 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v16; // eax
  _QWORD v17[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(gptiCurrent + 856LL) )
  {
    v7 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 856LL) = v7;
    if ( !v7 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v17, UserDereferenceObject, a4);
  if ( Object )
    ObfReferenceObject(Object);
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 704LL));
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v9 = a3;
      a3 = 0;
    }
    else
    {
      v9 = 500;
      if ( a3 != -1 )
      {
        v16 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
        LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v16 >= a3 )
          a3 = 0;
        else
          a3 -= v16;
      }
    }
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 856LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 856LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1376LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 856LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 856LL),
            WaitAny,
            WrUserRequest,
            1,
            0,
            &Timeout,
            0LL);
    EnterCrit(0LL, 1LL);
    if ( v11 == 1 )
      xxxRemoveQueueCompletion();
    if ( v11 < 0 )
      goto LABEL_32;
    if ( v11 == 192 )
    {
      ClientDeliverUserApc(v13);
LABEL_32:
      v11 = -1;
    }
    v14 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( (*(_BYTE *)(v14 + 4) & 0x40) != 0 && (*(_BYTE *)(v14 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 );
    }
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_18;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_18:
  PopAndFreeW32ThreadLock((__int64)v17, v12);
  return (unsigned int)v11;
}
