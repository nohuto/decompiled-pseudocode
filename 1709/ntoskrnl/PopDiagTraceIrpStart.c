/*
 * XREFs of PopDiagTraceIrpStart @ 0x1400B3A64
 * Callers:
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140123128 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // dl
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int16 v7; // di
  REGHANDLE v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  char v13; // [rsp+40h] [rbp-59h] BYREF
  char v14; // [rsp+41h] [rbp-58h] BYREF
  __int16 v15; // [rsp+44h] [rbp-55h] BYREF
  int v16; // [rsp+48h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  int *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  char *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  __int64 *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  __int16 *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  __int64 v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]

  v18 = a2;
  v2 = *(_QWORD *)(a2 + 72LL * (*(char *)(a2 + 66) - 1) + 272);
  v3 = *(_BYTE *)(v2 + 184);
  v14 = v3;
  v4 = *(_DWORD *)(v2 + 188);
  v16 = v4;
  v13 = *(_BYTE *)(v2 + 192) - 1;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 )
  {
    v5 = *(_QWORD *)(v5 + 312);
    v6 = *(_QWORD *)(v5 + 40);
  }
  else
  {
    v6 = 0LL;
  }
  v17 = v6;
  v7 = *(_WORD *)(v6 + 40) >> 1;
  v15 = v7;
  if ( v4 == 1 && v3 == 2 )
  {
    LOBYTE(v5) = PopFxAddLogEntry(v6, 0LL, 22LL, *(int *)(v2 + 192));
    v7 = v15;
  }
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART);
    if ( (_BYTE)v5 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v18;
      v20 = &v16;
      v22 = &v14;
      v24 = &v17;
      v26 = &v15;
      v9 = 5;
      v21 = 4LL;
      v23 = 1LL;
      v25 = 8LL;
      v27 = 2LL;
      if ( v7 )
      {
        v10 = *(_QWORD *)(v6 + 48);
        v29 = *(unsigned __int16 *)(v6 + 40);
        v9 = 6;
        v28 = v10;
        v30 = 0;
      }
      v11 = 2LL * v9;
      *(&UserData.Ptr + v11) = (ULONGLONG)&v13;
      *((_QWORD *)&UserData.Size + v11) = 1LL;
      LOBYTE(v5) = EtwWriteEx(v8, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v9 + 1, &UserData);
    }
  }
  return v5;
}
