/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00C8D70
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C8C44 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0061AA8 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B1AD0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v2; // rbx
  unsigned int i; // edi
  wchar_t *v6; // r8
  __int64 v7; // rcx
  wchar_t *v8; // rax
  Rtl::KString *Myptr; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = &off_1C007E1E0;
  a1->FilterBindFlags = 0;
  for ( i = 0; i < 5; ++i )
  {
    v6 = *v2;
    *(_DWORD *)&v13.Length = 0;
    v13.Buffer = 0LL;
    if ( v6 )
    {
      v7 = 0x7FFFLL;
      v8 = v6;
      while ( *v8 )
      {
        ++v8;
        if ( !--v7 )
          goto LABEL_20;
      }
      v13.Buffer = v6;
      v13.Length = 2 * (0x7FFF - v7);
      v13.MaximumLength = v13.Length + 2;
    }
    if ( (int)KRegKey::QueryValueBoolean(a2, &v13, &v14, DefaultToFalse) < 0 )
    {
LABEL_20:
      if ( (unsigned __int8)byte_1C0098751 >= 2u )
        WPP_SF_S(0xAu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids, *v2);
      return 0;
    }
    if ( v14 )
      a1->FilterBindFlags |= *((_DWORD *)v2 + 2);
    v2 += 2;
  }
  Myptr = a1->FilterClass._Myptr;
  if ( Myptr )
  {
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
    a1->FilterClass._Myptr = 0LL;
  }
  *(_DWORD *)&v13.Length = 0;
  v10 = L"FilterClass";
  v13.Buffer = 0LL;
  v11 = 0x7FFFLL;
  while ( *v10 )
  {
    ++v10;
    if ( !--v11 )
      return 1;
  }
  v13.Buffer = L"FilterClass";
  v13.Length = 2 * (0x7FFF - v11);
  v13.MaximumLength = v13.Length + 2;
  KRegKey::QueryValueString(&a2->m_ptr, &v13, (void **)&a1->FilterClass._Myptr);
  return 1;
}
