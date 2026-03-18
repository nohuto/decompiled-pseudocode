/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C009BF98
 * Callers:
 *     rimInputApc @ 0x1C008E100 (rimInputApc.c)
 * Callees:
 *     UserLogError @ 0x1C0008700 (UserLogError.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     RIMConfigurePointerDevice @ 0x1C008D290 (RIMConfigurePointerDevice.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C01067F0 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0117FD4 (WPP_RECORDER_SF_qqd.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C013D19C (ApiSetIsPTPInputEnabled.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C013DDFC (ApiSetSetUserPTPEnabledPreference.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  unsigned __int8 v5; // cl
  _QWORD *v6; // rsi
  __int64 v7; // r14
  const GUID *v8; // r9
  const GUID *v9; // r9
  int v10; // edx
  int v11; // r8d
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  __int64 v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h] BYREF
  int v20; // [rsp+8Ch] [rbp-Dh]
  _DWORD *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  __int64 v24; // [rsp+A0h] [rbp+7h]
  _DWORD v25[6]; // [rsp+A8h] [rbp+Fh] BYREF

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v13, 1, 0);
    if ( (unsigned int)ApiSetIsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v3, v4, 12);
      v5 = *(_BYTE *)(a2 + 205);
      *(_BYTE *)(a2 + 205) = v5 + 1;
      if ( v5 >= 0x14u )
      {
        if ( dword_1C0186860 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000000uLL) )
        {
          v17 = 0;
          v20 = 0;
          v15 = &v19;
          v18 = *(_QWORD *)(a2 + 216);
          v19 = *(unsigned __int16 *)(a2 + 208);
          v16 = 2;
          TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A765, 0LL, v9, 4u, &pData);
        }
        UserLogError(-1073741550);
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 13);
      }
      else
      {
        Object = 0LL;
        RIMFindReferencedSiblingPointerDeviceForMouseDevice(a2, &Object);
        v6 = Object;
        if ( Object )
        {
          v7 = *((_QWORD *)Object + 51);
          RIMLockExclusive(v7 + 96);
          if ( *(_BYTE *)(a2 + 205) == 1
            && dword_1C0186860 > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000000uLL) )
          {
            v17 = 0;
            v20 = 0;
            v23 = 0;
            v25[1] = 0;
            v15 = &v19;
            v18 = *(_QWORD *)(a2 + 216);
            v19 = *(unsigned __int16 *)(a2 + 208);
            v21 = v25;
            v24 = v6[35];
            v25[0] = *((unsigned __int16 *)v6 + 136);
            v16 = 2;
            v22 = 2;
            TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A79E, 0LL, v8, 6u, &pData);
          }
          RIMConfigurePointerDevice(v7, (__int64)(v6 + 8), v6[65]);
          ApiSetSetUserPTPEnabledPreference(v6 + 8, v6[65], v7);
          *(_QWORD *)(v7 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v6);
        }
      }
    }
    if ( v13[0] && !v13[1] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
}
