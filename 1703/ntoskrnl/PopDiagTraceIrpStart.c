/*
 * XREFs of PopDiagTraceIrpStart @ 0x140146604
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     PopQueueQuerySetIrp @ 0x140146394 (PopQueueQuerySetIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
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
  char v12; // [rsp+40h] [rbp-59h] BYREF
  char v13; // [rsp+41h] [rbp-58h] BYREF
  __int16 v14; // [rsp+44h] [rbp-55h] BYREF
  int v15; // [rsp+48h] [rbp-51h] BYREF
  __int64 v16; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  int *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  char *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  __int64 *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int16 *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  __int64 v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]

  v17 = a2;
  v2 = *(_QWORD *)(a2 + 72LL * (*(char *)(a2 + 66) - 1) + 272);
  v3 = *(_BYTE *)(v2 + 184);
  v13 = v3;
  v4 = *(_DWORD *)(v2 + 188);
  v15 = v4;
  v12 = *(_BYTE *)(v2 + 192) - 1;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v16 = v6;
  v7 = *(_WORD *)(v6 + 40) >> 1;
  v14 = v7;
  if ( v4 == 1 && v3 == 2 )
  {
    PopFxAddLogEntry(v6, 0, 22, *(int *)(v2 + 192));
    v7 = v14;
  }
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v17;
      v19 = &v15;
      v21 = &v13;
      v23 = &v16;
      v25 = &v14;
      v9 = 5;
      v20 = 4LL;
      v22 = 1LL;
      v24 = 8LL;
      v26 = 2LL;
      if ( v7 )
      {
        v10 = *(_QWORD *)(v6 + 48);
        v28 = *(unsigned __int16 *)(v6 + 40);
        v9 = 6;
        v27 = v10;
        v29 = 0;
      }
      v11 = 2LL * v9;
      *(&UserData.Ptr + v11) = (ULONGLONG)&v12;
      *((_QWORD *)&UserData.Size + v11) = 1LL;
      EtwWriteEx(v8, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v9 + 1, &UserData);
    }
  }
}
