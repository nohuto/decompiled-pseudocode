/*
 * XREFs of PoFxSetComponentLatency @ 0x140147590
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, int a2, unsigned __int64 a3)
{
  REGHANDLE v7; // rsi
  int v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  int *v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+74h] [rbp+2Bh]
  unsigned __int64 *v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+84h] [rbp+3Bh]

  v8 = a2;
  v10 = a3;
  v9 = *(_QWORD *)(a1 + 48);
  PopFxAddLogEntry(v9, a2, 9, a3);
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 8;
      v12 = &v8;
      v15 = &v10;
      v16 = 8;
      v13 = 4;
      EtwWriteEx(v7, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return PopPepComponentSetLatency(*(unsigned int **)(a1 + 56), a2, a3);
}
