/*
 * XREFs of PopInitializeDirectedDrips @ 0x1408A9118
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopCapturePlatformRole @ 0x140523884 (PopCapturePlatformRole.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     PdcTaskClientRegister @ 0x140624758 (PdcTaskClientRegister.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140627DA4 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140627EA0 (PopDirectedDripsQueryEmSettings.c)
 *     PdcNotificationClientRegister @ 0x14078B970 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14078BB20 (PdcNotificationClientUnregister.c)
 */

char PopInitializeDirectedDrips()
{
  int v0; // ebx
  int v1; // edi
  char result; // al
  int v3; // eax
  _QWORD v4[4]; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  char v6; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  if ( !PopDirectedDripsOverride )
  {
    v0 = 2;
    goto LABEL_8;
  }
  if ( PopDirectedDripsOverride == -1 )
  {
    if ( !BYTE6(PopCapabilities) )
    {
      v0 = 3;
      goto LABEL_8;
    }
    PopDirectedDripsQueryEmSettings(&v6);
    if ( v6 )
    {
      v0 = 4;
      goto LABEL_8;
    }
    if ( !PopDripsCallbackInterval )
    {
      v0 = 5;
      goto LABEL_8;
    }
    if ( !PopPlatformAoAc )
    {
      v0 = 6;
LABEL_8:
      v1 = -1073741637;
      goto LABEL_9;
    }
    v3 = PopCapturePlatformRole();
    if ( v3 == 2 || v3 == 8 )
    {
      v0 = 7;
      goto LABEL_8;
    }
    if ( PopDirectedDripsTimeout < (unsigned int)PopDripsCallbackInterval
      || PopDirectedDripsTimeout > (unsigned int)PopDripsWatchdogTimeout
      || !PopDripsCallbackInterval )
    {
      v0 = 8;
      goto LABEL_8;
    }
  }
  else
  {
    v0 = 1;
  }
  dword_1403AAFB8 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  dword_1403AAFBC = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  v1 = PdcTaskClientRegister(102, &qword_1403AAFD0);
  if ( v1 >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 1;
    v4[1] = PopDirectedDripsPdcLpeNotification;
    v4[3] = xHalAllocatePmcCounterSet;
    v1 = PdcNotificationClientRegister(0x67u, (int *)v4, (__int64)&PopDirectedDripsState, &qword_1403AAFD8);
    if ( v1 >= 0 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 1;
      v4[1] = PopDirectedDripsPdcPlmNotification;
      v4[3] = 0LL;
      v1 = PdcNotificationClientRegister(0x68u, (int *)v4, (__int64)&PopDirectedDripsState, &qword_1403AAFE0);
      if ( v1 >= 0 )
      {
        word_1403AAF10 = 1;
        qword_1403AAF20 = (__int64)&qword_1403AAF18;
        qword_1403AAF18 = (__int64)&qword_1403AAF18;
        byte_1403AAF28 = PopDirectedDripsAction;
        byte_1403AAF12 = 6;
        dword_1403AAF14 = 0;
        word_1403AAF32 = 0;
        KiInitializeTimer2(
          (__int64)&unk_1403AAF30,
          (__int64)PopDirectedDripsTimerCallbackRoutine,
          (__int64)&PopDirectedDripsState,
          8);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v1 = PsCreateSystemThread(
               &ThreadHandle,
               0,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
               &PopDirectedDripsState);
        if ( v1 >= 0 )
        {
          ZwClose(ThreadHandle);
          LOWORD(stru_1403AAFE8.Header.Lock) = 1;
          stru_1403AAFE8.Header.WaitListHead.Blink = &stru_1403AAFE8.Header.WaitListHead;
          stru_1403AAFE8.Header.WaitListHead.Flink = &stru_1403AAFE8.Header.WaitListHead;
          stru_1403AAFE8.Header.Size = 6;
          stru_1403AAFE8.Header.SignalState = 0;
          PopDirectedDripsState |= 1u;
        }
      }
    }
  }
LABEL_9:
  result = PopDiagTraceDirectedDripsInitialization(v0, v1);
  if ( v1 < 0 )
  {
    if ( qword_1403AAFD0 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_1403AAFD0);
      qword_1403AAFD0 = 0LL;
    }
    if ( qword_1403AAFD8 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_1403AAFD8);
      qword_1403AAFD8 = 0LL;
    }
    if ( qword_1403AAFE0 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_1403AAFE0);
      qword_1403AAFE0 = 0LL;
    }
  }
  return result;
}
