/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010C51C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C010C2F4 (xxxWaitForInputIdle.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00C8860 (xxxRemoveQueueCompletion.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C010A4AC (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v17; // eax
  _QWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(gptiCurrent + 768LL) )
  {
    v6 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 768LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v18, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
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
        v17 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
        LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v17 >= a3 )
          a3 = 0;
        else
          a3 -= v17;
      }
    }
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 768LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 768LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1288LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 768LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, 0LL, v7);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 768LL),
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
      goto LABEL_33;
    if ( v11 == 192 )
    {
      ClientDeliverUserApc(v13, v12, v14, v7);
LABEL_33:
      v11 = -1;
    }
    v15 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( (*(_BYTE *)(v15 + 4) & 0x40) != 0 && (*(_BYTE *)(v15 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
    }
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_19;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_19:
  PopAndFreeW32ThreadLock((__int64)v18);
  return (unsigned int)v11;
}
