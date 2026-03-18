/*
 * XREFs of ?EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@1@@Z @ 0x1C019E060
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C019DD80 (-EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerInfoList::EmitSleepStudyBlockerTelemetry(
        DripsBlockerInfoList *this,
        __int64 a2,
        struct DripsBlockerInfoList::_DripsBlockerInfoTelemetryEntry *a3)
{
  const GUID *v3; // r9
  char v4; // r10
  unsigned __int16 *v5; // rax
  int v6; // ecx
  char v7; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v9; // [rsp+60h] [rbp-19h]
  __int64 v10; // [rsp+68h] [rbp-11h]
  _DWORD *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  __int64 v13; // [rsp+80h] [rbp+7h]
  _DWORD v14[2]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int8 *Data4; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  const GUID *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  unsigned __int8 *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  if ( dword_1C0079090 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x400000000004uLL) )
    {
      v7 = v4;
      v10 = 1LL;
      v9 = &v7;
      v5 = *(unsigned __int16 **)&v3->Data1;
      v11 = v14;
      v12 = 2LL;
      v6 = *v5;
      v13 = *((_QWORD *)v5 + 1);
      Data4 = v3->Data4;
      v17 = v3 + 1;
      v19 = v3[1].Data4;
      v14[0] = v6;
      v14[1] = 0;
      v16 = 8LL;
      v18 = 8LL;
      v20 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C0058AB3, 0LL, v3, 8u, &pData);
    }
  }
}
