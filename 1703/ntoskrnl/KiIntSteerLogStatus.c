/*
 * XREFs of KiIntSteerLogStatus @ 0x14020587C
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x1405D6550 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     KiIntSteerLogState @ 0x14014C888 (KiIntSteerLogState.c)
 *     KiIntSteerEtwEventEnabled @ 0x14014C8F0 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  REGHANDLE v1; // rbx
  const EVENT_DESCRIPTOR *v2; // rdi
  const EVENT_DESCRIPTOR *v4; // rdi
  const EVENT_DESCRIPTOR *v5; // rsi
  ULONG_PTR v6; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  int v10; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v11[2]; // [rsp+50h] [rbp-61h] BYREF
  __int16 v12; // [rsp+60h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp-49h] BYREF
  __int64 v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  int *v19; // [rsp+A8h] [rbp-9h]
  __int64 v20; // [rsp+B0h] [rbp-1h]
  int *v21; // [rsp+B8h] [rbp+7h]
  __int64 v22; // [rsp+C0h] [rbp+Fh]
  __int64 *v23; // [rsp+C8h] [rbp+17h]
  int v24; // [rsp+D0h] [rbp+1Fh]
  int v25; // [rsp+D4h] [rbp+23h]

  v1 = KiIntSteerEtwHandle;
  v2 = &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( KiIntSteerEtwHandle && EtwEventEnabled(KiIntSteerEtwHandle, v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v18 = 4LL;
    v17 = &KiIntTrackRootCount;
    v20 = 4LL;
    v19 = &KiIntSteerMaskCount;
    v22 = 2LL;
    v21 = &KiIntSteerMask;
    v25 = 0;
    v23 = qword_14034FDA8;
    v24 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(v1, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    v1 = KiIntSteerEtwHandle;
  }
  v4 = &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v4 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( v1 && EtwEventEnabled(v1, v4) )
  {
    v11[1] = (unsigned __int16 *)qword_1403E42B8[0];
    v11[0] = (unsigned __int16 *)KeActiveProcessors;
    v12 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v11) )
    {
      *(_QWORD *)&v13.Size = 4LL;
      v13.Ptr = (ULONGLONG)&v10;
      v15 = 4LL;
      v14 = KiProcessorBlock[v10] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &v13);
    }
  }
  v5 = &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v6) = KiIntSteerEtwEventEnabled(v5);
  if ( (_BYTE)v6 )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( !a1 )
      {
        v6 = i[20];
        if ( i[22] == v6 )
          continue;
      }
      for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
        LOBYTE(v6) = KiIntSteerLogState((__int64)j, v5);
    }
  }
  return v6;
}
