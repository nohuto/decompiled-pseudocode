/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C01AA0EC
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C01AA65C (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0cjqzr2jx @ 0x1C0028504 (McTemplateK0cjqzr2jx.c)
 */

void __fastcall DripsBlockerInfoList::EmitSleepStudyBlockerDataEvents(DripsBlockerInfoList *this, char a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  wchar_t *v21; // rdx
  char v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  GUID *p_ActivityId; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  wchar_t *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  wchar_t *Buffer; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v45[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v46[48]; // [rsp+140h] [rbp+40h] BYREF

  v22 = a2;
  v23 = 1;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, 0x2AuLL);
  String.MaximumLength = 42;
  String.Buffer = (wchar_t *)v46;
  DestinationString.MaximumLength = 32;
  DestinationString.Buffer = (wchar_t *)v45;
  v3 = 0;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v29[0] = 0LL;
  for ( v29[1] = 0LL; v3 < *(_DWORD *)this; ++v3 )
  {
    v4 = 48LL * v3;
    v5 = RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)(v4 + *((_QWORD *)this + 1)), 0);
    v9 = v5;
    if ( v5 >= 0 )
    {
      v11 = *((_QWORD *)this + 1);
      v29[0] = *(_QWORD *)(v4 + v11 + 16);
      *(_QWORD *)ActivityId.Data4 = *(_QWORD *)(v4 + v11 + 16) + v3 + 1LL;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0cjqzr2jx(
          SLEEPSTUDY_ETW_PROVIDER_Context,
          v11,
          v8,
          v22,
          (__int64)v29,
          (DestinationString.Length >> 1) + 1,
          (__int64)DestinationString.Buffer,
          (__int64)&ActivityId,
          *(_QWORD *)(v4 + v11 + 32));
      v12 = 0;
      v13 = 0LL;
      do
      {
        if ( v12 != 1 )
        {
          v14 = RtlInt64ToUnicodeString(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v13 + 6LL * v3) + 24), 0xAu, &String);
          v18 = v14;
          if ( v14 >= 0 )
          {
            v20 = -1LL;
            v21 = off_1C003B200[v13];
            do
              ++v20;
            while ( v21[v20] );
            UserData.Ptr = (ULONGLONG)&v22;
            v24 = v20 + 1;
            v31 = &v23;
            v38 = 2 * (v20 + 1);
            v40 = &v25;
            Buffer = String.Buffer;
            p_ActivityId = &ActivityId;
            v25 = (String.Length >> 1) + 1;
            v43 = 2 * v25;
            v35 = &v24;
            v37 = v21;
            *(_QWORD *)&UserData.Size = 1LL;
            v32 = 4LL;
            v34 = 16LL;
            v36 = 4LL;
            v39 = 0;
            v41 = 4LL;
            v44 = 0;
            EtwWrite(
              SLEEPSTUDY_ETW_PROVIDER_Context[0],
              &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
              &ActivityId,
              7u,
              &UserData);
          }
          else
          {
            v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v19 + 24) = v18;
            WdLogEvent5_WdWarning(v19);
          }
        }
        ++v12;
        ++v13;
      }
      while ( v12 < 3 );
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdWarning(v10);
    }
  }
}
