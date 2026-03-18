/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x140280FE8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x140281890 (PpmEventTracePreVetoAccounting.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int16 v4; // ax
  __int16 v5; // ax
  KIRQL v6; // al
  unsigned int v7; // edx
  KIRQL v8; // r14
  unsigned int v9; // ecx
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  int i; // [rsp+40h] [rbp-29h] BYREF
  __int16 v13; // [rsp+44h] [rbp-25h] BYREF
  __int16 v14; // [rsp+48h] [rbp-21h] BYREF
  char v15; // [rsp+4Ah] [rbp-1Fh]
  unsigned int v16; // [rsp+4Bh] [rbp-1Eh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int *p_i; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  _QWORD *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  char *v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+98h] [rbp+2Fh]
  int v29; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 23808);
  if ( v1 )
  {
    v3 = 1;
    for ( i = 1; v3 < *(_DWORD *)(v1 + 32); i = v3 )
    {
      v4 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v14 = v4;
      v15 = *(_BYTE *)(a1 + 209);
      UserData.Ptr = (ULONGLONG)&v14;
      v16 = v3;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v3 = i + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v20 = 0;
      v13 = v5;
      UserData.Ptr = (ULONGLONG)&v13;
      v18 = a1 + 209;
      UserData.Size = 2;
      v19 = 1;
      v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v7 = 0;
      v8 = v6;
      i = 0;
      if ( *(_DWORD *)(v1 + 32) )
      {
        v9 = 0;
        do
        {
          v23 = 0;
          p_i = &i;
          v22 = 4;
          v10 = (_QWORD **)(248LL * v9 + v1 + 1024);
          v11 = *v10;
          if ( *v10 != v10 )
          {
            do
            {
              v26 = 0;
              v29 = 0;
              v24 = v11 + 2;
              v25 = 4;
              v27 = (char *)v11 + 20;
              v28 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v11 = (_QWORD *)*v11;
            }
            while ( v11 != v10 );
            v7 = i;
          }
          i = ++v7;
          v9 = v7;
        }
        while ( v7 < *(_DWORD *)(v1 + 32) );
      }
      KxReleaseSpinLock(&PpmIdleVetoLock);
      __writecr8(v8);
    }
  }
}
