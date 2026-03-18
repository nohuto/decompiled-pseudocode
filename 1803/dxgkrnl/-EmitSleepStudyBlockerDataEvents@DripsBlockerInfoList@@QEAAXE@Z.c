/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C019DD80
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C019E618 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0cjqzr2jx @ 0x1C0032F78 (McTemplateK0cjqzr2jx.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@1@@Z @ 0x1C019E060 (-EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@.c)
 */

void __fastcall DripsBlockerInfoList::EmitSleepStudyBlockerDataEvents(DripsBlockerInfoList *this, unsigned __int8 a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // esi
  DripsBlockerInfoList *v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v29[4]; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v31[3]; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  GUID *p_ActivityId; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  wchar_t *Buffer; // [rsp+130h] [rbp+30h]
  int v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v47[48]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v48[80]; // [rsp+170h] [rbp+70h] BYREF

  v23 = a2;
  v24 = 1;
  memset(v48, 0, 0x42uLL);
  memset(v47, 0, 0x2AuLL);
  String.MaximumLength = 42;
  String.Buffer = (wchar_t *)v47;
  DestinationString.MaximumLength = 66;
  DestinationString.Buffer = (wchar_t *)v48;
  v3 = 0;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v31[0] = 0LL;
  for ( v31[1] = 0LL; v3 < *(_DWORD *)this; ++v3 )
  {
    memset(v29, 0, sizeof(v29));
    v4 = 48LL * v3;
    v5 = RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)(v4 + *((_QWORD *)this + 1)), 0);
    v9 = v5;
    if ( v5 >= 0 )
    {
      v11 = *((_QWORD *)this + 1);
      v31[0] = *(_QWORD *)(v4 + v11 + 16);
      *(_QWORD *)ActivityId.Data4 = *(_QWORD *)(v4 + v11 + 16) + v3 + 1LL;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0cjqzr2jx(
          SLEEPSTUDY_ETW_PROVIDER_Context,
          v11,
          v8,
          v23,
          (__int64)v31,
          (DestinationString.Length >> 1) + 1,
          (__int64)DestinationString.Buffer,
          (__int64)&ActivityId,
          *(_QWORD *)(v4 + v11 + 32));
      v12 = v4 + 24;
      v13 = 0;
      v29[0] = &DestinationString;
      do
      {
        v14 = (DripsBlockerInfoList *)*((_QWORD *)this + 1);
        *(_QWORD *)((char *)&String.Length + v12 + -48 * v3) = *(_QWORD *)((char *)v14 + v12);
        if ( v13 != 1 )
        {
          v15 = RtlInt64ToUnicodeString(*(_QWORD *)((char *)v14 + v12), 0xAu, &String);
          v19 = v15;
          if ( v15 >= 0 )
          {
            v21 = *(__int64 *)((char *)&off_1C0055D90[-3] + v12 + -48 * v3);
            v22 = -1LL;
            do
              ++v22;
            while ( *(_WORD *)(v21 + 2 * v22) );
            UserData.Ptr = (ULONGLONG)&v23;
            v25 = v22 + 1;
            v33 = &v24;
            p_ActivityId = &ActivityId;
            v37 = &v25;
            v40 = 2 * (v22 + 1);
            v42 = &v26;
            Buffer = String.Buffer;
            v45 = 2 * ((String.Length >> 1) + 1);
            v26 = (String.Length >> 1) + 1;
            v39 = v21;
            v41 = 0;
            v46 = 0;
            *(_QWORD *)&UserData.Size = 1LL;
            v34 = 4LL;
            v36 = 16LL;
            v38 = 4LL;
            v43 = 4LL;
            EtwWrite(
              SLEEPSTUDY_ETW_PROVIDER_Context[0],
              &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
              &ActivityId,
              7u,
              &UserData);
          }
          else
          {
            v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            *(_QWORD *)(v20 + 24) = v19;
            WdLogEvent5_WdWarning(v20);
          }
        }
        ++v13;
        v12 += 8LL;
      }
      while ( v13 < 3 );
      DripsBlockerInfoList::EmitSleepStudyBlockerTelemetry(
        v14,
        v23,
        (struct DripsBlockerInfoList::_DripsBlockerInfoTelemetryEntry *)v29);
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdWarning(v10);
    }
  }
}
