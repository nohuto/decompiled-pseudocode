/*
 * XREFs of GetContainerId @ 0x18003C818
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     SearchForHeadphones @ 0x18003C5D0 (SearchForHeadphones.c)
 *     IsInternalFormFactorOf @ 0x1800C07DC (IsInternalFormFactorOf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetContainerId(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // bl
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
      (void *)0x56,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      (int)pvar);
  }
  else
  {
    if ( (_WORD)pvar == 72 )
    {
      v6 = 1;
      *a3 = *v9;
    }
    else
    {
      v6 = 0;
    }
    PropVariantClear(&pvar);
    if ( v6 )
      return 0LL;
    v5 = -2147024894;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)0x80070002LL,
      (int)pvar);
  }
  return v5;
}
