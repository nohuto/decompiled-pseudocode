/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B7EA0
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61F8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00BB224 (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v2; // rdi
  unsigned int i; // ebx
  Rtl::KString *Myptr; // rcx
  __int64 v7; // rcx
  const wchar_t *j; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-20h]
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = &off_1C007F070;
  a1->FilterBindFlags = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( (int)KRegKey::QueryValueBoolean(a2, *v2, &v12, DefaultToFalse) < 0 )
    {
      if ( (unsigned __int8)byte_1C0099611 >= 2u )
        WPP_SF_S(0xAu, &WPP_8d98bde3000d344f77c1d3be10f8ac4f_Traceguids, *v2);
      return 0;
    }
    if ( v12 )
      a1->FilterBindFlags |= *((_DWORD *)v2 + 2);
    v2 += 2;
  }
  Myptr = a1->FilterClass._Myptr;
  if ( Myptr )
  {
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
    a1->FilterClass._Myptr = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  v7 = 0x7FFFLL;
  for ( j = L"FilterClass"; *j; ++j )
  {
    if ( !--v7 )
      return 1;
  }
  v11 = L"FilterClass";
  LOWORD(v10) = 2 * (0x7FFF - v7);
  HIWORD(v10) = v10 + 2;
  KRegKey::QueryValueString(a2, &v10, &a1->FilterClass);
  return 1;
}
