/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180030A40
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180030578 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180030A40 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180030A40 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x180030C40 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     _Init_thread_footer @ 0x1800494C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180049528 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x18009C9F0 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int16 *a4,
        DWORD dwOptions,
        REGSAM samDesired,
        struct _SECURITY_ATTRIBUTES *a7,
        HKEY *a8,
        unsigned int *a9)
{
  const unsigned __int16 *v9; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  const WCHAR *v12; // rax
  int v13; // ebx
  CNtDeleteKey *v14; // rcx
  int v15; // ebx
  HKEY v16; // rcx
  LPCWSTR v17; // rbx
  DWORD v18; // eax
  int Key; // ebx
  LSTATUS result; // eax
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Reserved; // [rsp+60h] [rbp-A0h]
  LPCWSTR lpSubKey; // [rsp+68h] [rbp-98h]
  HKEY v26; // [rsp+70h] [rbp-90h]
  unsigned int *v27; // [rsp+78h] [rbp-88h]
  LPSECURITY_ATTRIBUTES lpSecurityAttributes; // [rsp+80h] [rbp-80h]
  LPWSTR lpClass; // [rsp+88h] [rbp-78h]
  _BYTE v30[528]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a2;
  lpSecurityAttributes = a7;
  lpClass = a4;
  Reserved = a3;
  v26 = a1;
  v27 = a9;
  if ( a9 )
    *a9 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( !v10 )
  {
    v12 = v9;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v10 - v9) >= 0x104 )
    return 87;
  _o_wcsncpy_s(v30, 260LL, v9);
  v12 = (const WCHAR *)v30;
  v9 = v11 + 1;
LABEL_9:
  hKey = 0LL;
  lpSubKey = v12;
  v13 = DetectRegistryLink(v26, v12, samDesired, &hKey);
  v14 = (CNtDeleteKey *)*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18012BED8 > *((_DWORD *)v14 + 1) )
  {
    Init_thread_header(&dword_18012BED8);
    if ( dword_18012BED8 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_18012BED8);
    }
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    if ( CNtDeleteKey::Init(v14) && !(qword_18012C580 ? qword_18012C580(hKey) : 87) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_36;
    }
LABEL_27:
    if ( hKey )
      RegCloseKey(hKey);
    return 5;
  }
  if ( (unsigned int)(v15 - 1) > 1 )
    goto LABEL_27;
  dwDisposition = 0;
  v16 = hKey;
  if ( !hKey )
  {
LABEL_36:
    v17 = lpSubKey;
    result = RegCreateKeyExW(
               v26,
               lpSubKey,
               Reserved,
               lpClass,
               dwOptions,
               samDesired,
               lpSecurityAttributes,
               &hKey,
               &dwDisposition);
    if ( result )
      return result;
    v18 = dwDisposition;
    if ( dwDisposition != 1 )
    {
      Key = 5;
      goto LABEL_16;
    }
    v16 = hKey;
    goto LABEL_14;
  }
  v17 = lpSubKey;
  v18 = 2;
  dwDisposition = 2;
LABEL_14:
  if ( v17 != v9 )
  {
    Key = SafeRegCreateKeyEx(v16, v9, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, a8, v27);
LABEL_16:
    RegCloseKey(hKey);
    return Key;
  }
  if ( a8 )
    *a8 = v16;
  if ( v27 )
    *v27 = v18;
  return 0;
}
