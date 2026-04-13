/*
 * XREFs of ?get_OptedIn@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x180093AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::get_OptedIn(MobilityExperienceManager *this, bool *a2)
{
  LSTATUS ValueW; // eax
  signed int v4; // ecx
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"OptedIn",
             0x20000010u,
             0LL,
             &v7,
             &v6);
  v4 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v4 = ValueW;
  if ( v4 >= 0 )
    *a2 = v7 != 0;
  return 0LL;
}
