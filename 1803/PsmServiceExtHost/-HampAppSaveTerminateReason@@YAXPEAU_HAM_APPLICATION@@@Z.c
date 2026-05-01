/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800070EC
 * Callers:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180006F1C (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x180008208 (-HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000846C (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampAppSaveTerminateReason(struct _HAM_APPLICATION *a1)
{
  int v2; // eax
  int AumidFromPsmKey; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v7; // [rsp+3Ch] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+40h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v12; // [rsp+78h] [rbp-90h]
  int v13; // [rsp+80h] [rbp-88h]
  int v14; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR ValueName[136]; // [rsp+B8h] [rbp-50h] BYREF

  hKey = 0LL;
  if ( (*((_DWORD *)a1 + 152) & 0x80000) != 0 )
    return;
  v2 = HampUtilCreateVolatileUserRegKey((union _RM_SID *)(*((_QWORD *)a1 + 11) + 228LL), 2u, &hKey);
  v6 = v2;
  if ( v2 >= 0 )
  {
    v10 = 130;
    AumidFromPsmKey = HampUtilGetAumidFromPsmKey((const unsigned __int16 *)a1 + 48, &v10, ValueName);
    v4 = *((_DWORD *)a1 + 152);
    v6 = AumidFromPsmKey;
    *(_DWORD *)Data = (unsigned __int16)(v4 >> 3);
    if ( (v4 & 0x7FFF8) != 0 )
    {
      v2 = RegSetValueExW(hKey, ValueName, 0, 4u, Data, 4u);
      v5 = v2;
      if ( v2 <= 0 )
        goto LABEL_9;
      v2 = (unsigned __int16)v2 | 0xC0070000;
    }
    else
    {
      v2 = RegDeleteValueW(hKey, ValueName);
      if ( v2 > 0 )
        v2 = (unsigned __int16)v2 | 0xC0070000;
      v6 = v2;
      v5 = v2;
      if ( v2 != -1073283070 )
        goto LABEL_10;
      v2 = 279;
    }
    v5 = v2;
LABEL_9:
    v6 = v2;
LABEL_10:
    if ( v5 >= 0 )
    {
      if ( _volatile_metadata > 5u )
      {
        v14 = 0;
        v15.Reserved = 0;
        v12 = &v6;
        v7 = *(_WORD *)Data;
        v15.Ptr = (ULONGLONG)&v7;
        v13 = 4;
        v15.Size = 2;
        TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 48);
        TlgCreateSid(&v17, (const SID *)(*((_QWORD *)a1 + 11) + 228LL));
        TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083349, 0LL, 0LL, 6u, &pData);
      }
      v2 = 0;
      v6 = 0;
    }
  }
  if ( hKey )
  {
    RegCloseKey(hKey);
    v2 = v6;
  }
  if ( v2 < 0 && _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
    {
      v14 = 0;
      v12 = &v6;
      v13 = 4;
      TlgCreateWsz(&v15, (LPCWSTR)a1 + 48);
      TlgCreateSid(&pDesc, (const SID *)(*((_QWORD *)a1 + 11) + 228LL));
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800833E7, 0LL, 0LL, 5u, &pData);
    }
  }
}
