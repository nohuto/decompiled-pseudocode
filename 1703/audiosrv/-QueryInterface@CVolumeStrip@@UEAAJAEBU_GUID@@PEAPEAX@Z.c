/*
 * XREFs of ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017F10
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180018030 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::QueryInterface(CVolumeStrip *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
      goto LABEL_13;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15LL,
          &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
          2147500034LL);
      }
      return 2147500034LL;
    }
    else
    {
LABEL_13:
      if ( *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)this + 8LL) == CVolumeStrip::AddRef )
        CVolumeStrip::AddRef(this);
      else
        (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return 0LL;
    }
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::QueryInterface", 0xDDu, -2147467261);
    return 2147500035LL;
  }
}
