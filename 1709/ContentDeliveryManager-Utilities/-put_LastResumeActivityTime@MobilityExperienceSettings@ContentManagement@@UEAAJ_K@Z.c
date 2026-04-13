/*
 * XREFs of ?put_LastResumeActivityTime@MobilityExperienceSettings@ContentManagement@@UEAAJ_K@Z @ 0x180011840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_LastResumeActivityTime(
        ContentManagement::MobilityExperienceSettings *this,
        __int64 a2)
{
  LSTATUS v2; // eax
  signed int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2;
  v2 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
         L"LastResumeOnPCTime",
         0xBu,
         &Data,
         8u);
  v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v3 = v2;
  if ( v3 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x65,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
      (const char *)(unsigned int)v3);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x3DA,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
