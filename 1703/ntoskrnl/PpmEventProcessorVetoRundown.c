/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x140235FD8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int16 v4; // ax
  __int16 v5; // ax
  KIRQL v6; // al
  unsigned int v7; // r8d
  KIRQL v8; // r14
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  int i; // [rsp+40h] [rbp-39h] BYREF
  __int16 v12; // [rsp+44h] [rbp-35h] BYREF
  __int16 v13; // [rsp+48h] [rbp-31h] BYREF
  char v14; // [rsp+4Ah] [rbp-2Fh]
  unsigned int v15; // [rsp+4Bh] [rbp-2Eh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  int *p_i; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  _QWORD *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  char *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 23936);
  if ( v1 )
  {
    v3 = 1;
    for ( i = 1; v3 < *(_DWORD *)(v1 + 28); i = v3 )
    {
      v4 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v13 = v4;
      v14 = *(_BYTE *)(a1 + 209);
      UserData.Ptr = (ULONGLONG)&v13;
      v15 = v3;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v3 = i + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v19 = 0;
      v12 = v5;
      UserData.Ptr = (ULONGLONG)&v12;
      v17 = a1 + 209;
      UserData.Size = 2;
      v18 = 1;
      v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v7 = 0;
      v8 = v6;
      for ( i = 0; v7 < *(_DWORD *)(v1 + 28); i = v7 )
      {
        v22 = 0;
        p_i = &i;
        v9 = (_QWORD **)(248LL * v7 + v1 + 1024);
        v21 = 4;
        v10 = *v9;
        if ( *v9 != v9 )
        {
          do
          {
            v25 = 0;
            v28 = 0;
            v23 = v10 + 2;
            v24 = 4;
            v26 = (char *)v10 + 20;
            v27 = 4;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
            v10 = (_QWORD *)*v10;
          }
          while ( v10 != v9 );
          v7 = i;
        }
        ++v7;
      }
      KxReleaseSpinLock(&PpmIdleVetoLock);
      __writecr8(v8);
    }
  }
}
