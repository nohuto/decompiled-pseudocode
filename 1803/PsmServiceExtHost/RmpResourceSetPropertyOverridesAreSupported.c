/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x18000F8E0
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x18000F9C4 (RmpResourceLimitsAreLegal.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

_BOOL8 __fastcall RmpResourceSetPropertyOverridesAreSupported(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[48]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v8; // [rsp+88h] [rbp-20h]
  char v9; // [rsp+8Ah] [rbp-1Eh]

  v5 = 687LL;
  if ( !(unsigned int)RmpResourceLimitsAreLegal(a1 + 40, &v5, 0LL) )
    return 0LL;
  memset_0(v6, 0, 0x60uLL);
  memset_0(v7, 0, sizeof(v7));
  v2 = *(_DWORD *)(a1 + 32);
  if ( (unsigned __int16)v2 >= 0x1000u )
    return 0LL;
  if ( (v2 & 1) != 0 )
  {
    v3 = HIBYTE(v2);
    if ( (_BYTE)v3 && (unsigned __int8)v3 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v2 || *(_BYTE *)(a1 + 36) != v6[36] )
  {
    return 0LL;
  }
  return *(_WORD *)(a1 + 88) == v8
      && *(_BYTE *)(a1 + 90) == v9
      && !*(_DWORD *)(a1 + 92)
      && ((*(_BYTE *)(a1 + 16) & 2) != 0 || !*(_QWORD *)a1)
      && ((*(_BYTE *)(a1 + 16) & 4) != 0 || !*(_QWORD *)(a1 + 8));
}
