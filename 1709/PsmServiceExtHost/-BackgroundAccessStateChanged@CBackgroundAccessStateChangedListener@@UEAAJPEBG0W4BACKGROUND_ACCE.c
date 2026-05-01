/*
 * XREFs of ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180048A00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180046A80 (-HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     CempPackageFamilyNameFromFullName @ 0x1800496D8 (CempPackageFamilyNameFromFullName.c)
 */

__int64 __fastcall CBackgroundAccessStateChangedListener::BackgroundAccessStateChanged(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  int v8; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  NTSTATUS v11; // eax
  int LastError; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  char v20[132]; // [rsp+50h] [rbp-B0h] BYREF
  char DestinationSid[68]; // [rsp+D4h] [rbp-2Ch] BYREF
  int v22; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v24; // [rsp+140h] [rbp+40h]
  int v25; // [rsp+148h] [rbp+48h]
  int v26; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+160h] [rbp+60h] BYREF
  int *v29; // [rsp+170h] [rbp+70h]
  int v30; // [rsp+178h] [rbp+78h]
  int v31; // [rsp+17Ch] [rbp+7Ch]

  Sid = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
  {
    v8 = *(_DWORD *)(a1 + 40);
    v26 = 0;
    v17 = v8;
    v24 = (unsigned int *)&v17;
    v25 = 4;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v28, a3);
    v31 = 0;
    v29 = &v18;
    v18 = a4;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BBAE, v9, v10, 6u, &pData);
  }
  v22 = *(_DWORD *)(a1 + 40);
  v11 = CempPackageFamilyNameFromFullName(a3);
  if ( v11 < 0 )
    goto LABEL_5;
  if ( !ConvertStringSidToSidW(a2, &Sid) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_6;
  }
  v11 = RtlCopySid(0x44u, DestinationSid, Sid);
  if ( v11 < 0 )
  {
LABEL_5:
    LastError = v11 | 0x10000000;
LABEL_6:
    v16 = LastError;
    goto LABEL_12;
  }
  HampPkgHandleBackgroundAccessStateChange(
    *(struct _HOST_ACTIVITY_MANAGER **)(a1 + 32),
    (struct _HAM_PACKAGE_INFO *)v20,
    a4);
  v16 = 0;
LABEL_12:
  if ( Sid )
    LocalFree(Sid);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
  {
    v26 = 0;
    v24 = &v16;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BC15, v13, v14, 3u, &pData);
  }
  return v16;
}
