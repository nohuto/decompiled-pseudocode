/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x18001D58C
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001D6A4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x18001B01C (RmpResourceLimitsAreLegal.c)
 *     RmpResourceSetPropertiesInitialize @ 0x18001D648 (RmpResourceSetPropertiesInitialize.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 */

__int64 __fastcall RmpResourceSetPropertyOverridesAreSupported(void *Buf1)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-98h] BYREF
  _BYTE Buf2[32]; // [rsp+30h] [rbp-88h] BYREF
  int v6; // [rsp+50h] [rbp-68h]
  char v7; // [rsp+54h] [rbp-64h]
  __int16 v8; // [rsp+98h] [rbp-20h]
  char v9; // [rsp+9Ah] [rbp-1Eh]

  v4 = 527LL;
  v2 = 0;
  if ( !RmpResourceLimitsAreLegal((__int64)Buf1 + 40, &v4, 0LL) )
    return 0LL;
  RmpResourceSetPropertiesInitialize(Buf2);
  if ( memcmp_0(Buf1, Buf2, 0x20uLL)
    || *((_DWORD *)Buf1 + 8) != v6
    || *((_BYTE *)Buf1 + 36) != v7
    || *((_WORD *)Buf1 + 52) != v8
    || *((_BYTE *)Buf1 + 106) != v9 )
  {
    return 0LL;
  }
  LOBYTE(v2) = *((_DWORD *)Buf1 + 27) == 0;
  return v2;
}
