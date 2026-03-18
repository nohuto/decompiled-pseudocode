/*
 * XREFs of ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A9E48
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A9240 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01A9C30 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00BA830 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSetSlateAutoRotationState(CLegacyRotationMgr *this, int a2)
{
  int updated; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C032A800 = a2;
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
      {
        v10 = 0;
        v8 = &dword_1C032A800;
        v9 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBB8B, v4, v5, 3u, &pData);
      }
    }
  }
  return (unsigned int)updated;
}
