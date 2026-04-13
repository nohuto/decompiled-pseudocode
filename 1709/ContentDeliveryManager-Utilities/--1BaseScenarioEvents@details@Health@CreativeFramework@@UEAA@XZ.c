/*
 * XREFs of ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180029218
 * Callers:
 *     ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x180029DC0 (--_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180026228 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180029618 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800296F4 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)this = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  if ( !*((_BYTE *)this + 250) || !*((_BYTE *)this + 249) )
    goto LABEL_12;
  v2 = (const WCHAR *)((char *)this + 216);
  hKey = 0LL;
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v3 )
  {
    v5 = 443LL;
  }
  else
  {
    v3 = RegSetValueExW(hKey, 0LL, 0, 3u, (const BYTE *)this + 8, 0x5Cu);
    if ( !v3 )
      goto LABEL_10;
    v5 = 446LL;
  }
  wil::details::in1diag3::_Log_Win32(retaddr, (void *)v5, v4, (const char *)v3);
LABEL_10:
  v6 = hKey;
  *((_BYTE *)this + 249) = 0;
  if ( v6 )
    RegCloseKey(v6);
LABEL_12:
  CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    operator delete(*((void **)this + 27));
  *((_QWORD *)this + 30) = 7LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 108) = 0;
  if ( *((_QWORD *)this + 26) >= 8uLL )
    operator delete(*((void **)this + 23));
  *((_QWORD *)this + 26) = 7LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_WORD *)this + 92) = 0;
}
