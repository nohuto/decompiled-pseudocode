/*
 * XREFs of PoFxSetComponentResidency @ 0x140167970
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     PopPepComponentSetResidency @ 0x140167A04 (PopPepComponentSetResidency.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  REGHANDLE v7; // rsi
  unsigned int v8; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-1h] BYREF
  int *v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+74h] [rbp+1Bh]
  __int64 *v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+84h] [rbp+2Bh]

  v8 = a2;
  v10 = a3;
  v9 = *(_QWORD *)(a1 + 48);
  PopFxAddLogEntry(v9, a2, 10, a3);
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_RESIDENCY) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 8;
      v12 = (int *)&v8;
      v16 = 8;
      v15 = &v10;
      v13 = 4;
      EtwWriteEx(v7, &POP_ETW_EVENT_COMPONENT_RESIDENCY, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
