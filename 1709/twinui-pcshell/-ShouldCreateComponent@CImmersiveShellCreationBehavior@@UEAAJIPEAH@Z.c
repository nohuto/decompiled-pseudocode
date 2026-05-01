/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAH@Z @ 0x1800DEE70
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002BAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800DE87C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        int *a3)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdi
  int v7; // ebx
  unsigned __int8 (*v8)(void); // rax
  HKEY hKey; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-298h] BYREF
  WCHAR SubKey[264]; // [rsp+90h] [rbp-248h] BYREF

  *a3 = 0;
  v4 = a2;
  v5 = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 40));
  if ( v5 >= 0 )
  {
    if ( (unsigned int)v4 >= 0x76 )
      return (unsigned int)-2147483637;
    v6 = 3 * v4;
    v7 = *((_DWORD *)&off_1802B7C90 + 6 * v4 + 3) & 1;
    if ( v7 && (*(_BYTE *)(&off_1802B7C90 + v6 + 1) & 1) != 0 )
    {
      v7 = 0;
      if ( (int)SHStringFromGUIDW(*(&off_1802B7C90 + v6), v11, 39LL) < 0
        || (int)StringCchPrintfW(SubKey, 260LL, L"SOFTWARE\\Classes\\CLSID\\%s", v11) < 0 )
      {
LABEL_12:
        *a3 = v7;
        return (unsigned int)v5;
      }
      if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, &hKey) )
      {
        RegCloseKey(hKey);
        v7 = 1;
      }
    }
    if ( v7 )
    {
      v8 = (unsigned __int8 (*)(void))*(&off_1802B7C90 + v6 + 2);
      if ( v8 )
        v7 = v8();
    }
    goto LABEL_12;
  }
  return (unsigned int)v5;
}
