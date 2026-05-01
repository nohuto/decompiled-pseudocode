/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x1801DE920
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180187A70 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x1801DED78 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeByUserSid@AAManagerHelper@AssignedAccess@Internal@Windows@@QEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1801DEE5C (-GetAssignedAccessTypeByUserSid@AAManagerHelper@AssignedAccess@Internal@Windows@@QEAAJPEBGPEAW4A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1)
{
  LSTATUS v2; // eax
  HKEY v3; // rcx
  unsigned int v4; // edi
  __int64 **v5; // rbx
  __int64 v6; // r8
  int AssignedAccessTypeByUserSid; // eax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+30h] [rbp-40h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-38h] BYREF
  void **v12; // [rsp+40h] [rbp-30h] BYREF
  void **v13; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+38h] BYREF
  DWORD cbData; // [rsp+B0h] [rbp+40h] BYREF
  DWORD Type; // [rsp+B8h] [rbp+48h] BYREF

  v12 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v13 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  hKey = 0LL;
  v14[0] = &v12;
  v14[1] = &v13;
  v2 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
         0,
         0x20019u,
         &hKey);
  v3 = hKey;
  if ( v2 )
    goto LABEL_7;
  Data = 0;
  cbData = 4;
  if ( RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData) || Type != 4 )
  {
    v3 = hKey;
LABEL_7:
    if ( v3 )
      RegCloseKey(v3);
    v4 = 0;
    goto LABEL_10;
  }
  v4 = Data;
  if ( hKey )
    RegCloseKey(hKey);
LABEL_10:
  v5 = (__int64 **)v14;
  while ( 1 )
  {
    v6 = **v5;
    if ( v4 <= (*(_QWORD *)(v6 + 8) != (_QWORD)SingleViewShellExperienceEventHandler::OnViewPropertiesChanging) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int16 *))v6)(*v5, a1) )
        break;
    }
    if ( ++v5 == v15 )
      return 0LL;
  }
  Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v15);
  AssignedAccessTypeByUserSid = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeByUserSid(
                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v15,
                                  a1,
                                  (enum Windows::Internal::AssignedAccess::AssignedAccessType *)&v10);
  v9 = v10;
  if ( AssignedAccessTypeByUserSid < 0 )
    v9 = 0;
  if ( v15[0] )
    (*(void (**)(void))(*(_QWORD *)v15[0] + 16LL))();
  return v9;
}
