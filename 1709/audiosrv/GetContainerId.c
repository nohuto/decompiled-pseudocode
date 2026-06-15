/*
 * XREFs of GetContainerId @ 0x1800BAB0C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     IsInternalFormFactorOf @ 0x1800BAD10 (IsInternalFormFactorOf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetContainerId(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v7; // bl
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  _OWORD *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  pvar = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_Device_ContainerId,
         &pvar);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x58,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  if ( (_WORD)pvar == 72 )
  {
    v7 = 1;
    *a3 = *v9;
  }
  else
  {
    v7 = 0;
  }
  PropVariantClear(&pvar);
  if ( !v7 )
  {
    v5 = -2147024894;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)0x80070002LL);
    return v5;
  }
  return 0LL;
}
