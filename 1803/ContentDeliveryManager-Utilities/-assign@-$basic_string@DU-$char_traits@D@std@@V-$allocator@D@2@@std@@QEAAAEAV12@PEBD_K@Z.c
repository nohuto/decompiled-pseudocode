/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800180A4
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180006F90 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007000 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007090 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18002A274 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18003009C (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?do_grouping@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180035850 (-do_grouping@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004AF60 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800A9D70 (-do_curr_symbol@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800BA228 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?do_negative_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800BF270 (-do_negative_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?do_positive_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800BF2D0 (-do_positive_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800BF320 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180018278 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800189C8 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

void **__fastcall std::string::assign(void **a1, char *Src, size_t Size)
{
  void **v5; // rbx
  char *v6; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax
  void *v10; // rcx
  _BYTE *v11; // rax

  v5 = a1;
  if ( Src )
  {
    v6 = (unsigned __int64)a1[3] < 0x10 ? (char *)a1 : (char *)*a1;
    if ( Src >= v6 )
    {
      if ( (unsigned __int64)a1[3] >= 0x10 )
        a1 = (void **)*a1;
      if ( (char *)a1 + (unsigned __int64)v5[2] > Src )
        return (void **)std::string::assign(v5);
    }
  }
  if ( Size == -1LL )
    std::wstring::_Xlen(v5);
  if ( (unsigned __int64)v5[3] >= Size )
  {
    if ( Size )
    {
LABEL_19:
      v9 = (unsigned __int64)v5[3];
      if ( v9 < 0x10 )
        v10 = v5;
      else
        v10 = *v5;
      if ( Size )
      {
        memcpy_0(v10, Src, Size);
        v9 = (unsigned __int64)v5[3];
      }
      v5[2] = (void *)Size;
      if ( v9 < 0x10 )
        v11 = v5;
      else
        v11 = *v5;
      v11[Size] = 0;
      return v5;
    }
    v5[2] = 0LL;
    if ( (unsigned __int64)v5[3] < 0x10 )
      v8 = v5;
    else
      v8 = *v5;
    *v8 = 0;
  }
  else
  {
    std::string::_Copy(v5);
  }
  if ( Size )
    goto LABEL_19;
  return v5;
}
