/*
 * XREFs of ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180068968
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180062B18 (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180032A3C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampHostDepValidateCustomProperties(const wchar_t *a1)
{
  unsigned int v2; // edi
  _BYTE Buf1[40]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[5]; // [rsp+48h] [rbp-50h] BYREF
  int v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+74h] [rbp-24h]

  v2 = 0;
  if ( !(unsigned int)HampUtilCheckAndSanitizeActivityProperties(a1)
    || (*(_DWORD *)a1 & 0xFFF7FFEC) != 0
    || *((_DWORD *)a1 + 1)
    || *((_DWORD *)a1 + 2)
    || a1[70]
    || *((_DWORD *)a1 + 67) != 5
    || *((_DWORD *)a1 + 68) )
  {
    return 0LL;
  }
  memset_0(Buf1, 0, 0x60uLL);
  memset_0(v5, 0, 0x30uLL);
  v5[0] |= 0x200uLL;
  v6 = 100;
  memset(&v5[1], 255, 32);
  v7 = 33;
  LOBYTE(v2) = memcmp_0(Buf1, a1 + 140, 0x60uLL) == 0;
  return v2;
}
