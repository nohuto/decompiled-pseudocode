/*
 * XREFs of ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003B7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140033634 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     WPP_SF_Ds @ 0x140037314 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetFormat(
        CSystemAudioDeviceOffload *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  int v5; // edi
  _DWORD Src[6]; // [rsp+30h] [rbp-50h] BYREF
  GUID v8; // [rsp+48h] [rbp-38h]
  __int128 v9; // [rsp+58h] [rbp-28h]
  __int128 v10; // [rsp+68h] [rbp-18h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  Src[0] = 196606;
  Src[1] = 48000;
  v8 = GUID_00000001_0000_0010_8000_00aa00389b71;
  Src[3] = 1048580;
  Src[2] = 192000;
  Src[4] = 1048598;
  Src[5] = 3;
  v5 = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, a3);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_1c5487218bb03e28dff4809d6fd419ee_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceOffload::GetFormat");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetFormat", 0x1E5u, v5);
  }
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v5;
}
