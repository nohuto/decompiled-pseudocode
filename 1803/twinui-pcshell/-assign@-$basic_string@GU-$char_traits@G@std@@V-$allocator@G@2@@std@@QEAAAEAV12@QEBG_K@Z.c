/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008C784
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C740 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008C8B4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x180189CE4 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019684C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801972C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801B692C (-CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1801C0350 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18008C82C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rbx
  _WORD *v8; // rax
  _WORD *v9; // r14
  char *v11; // r14
  __int64 v12; // rbx

  v3 = (unsigned __int64)a1[3];
  if ( a3 <= v3 )
  {
    v11 = (char *)a1;
    if ( v3 >= 8 )
      v11 = (char *)*a1;
    v12 = 2 * a3;
    a1[2] = (void *)a3;
    memmove(v11, Src, 2 * a3);
    *(_WORD *)&v11[v12] = 0;
  }
  else
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    v7 = std::wstring::_Calculate_growth(a1, a3);
    v8 = (_WORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v7 + 1, 2LL);
    a1[3] = (void *)v7;
    a1[2] = (void *)a3;
    v9 = v8;
    memcpy_0(v8, Src, 2 * a3);
    v9[a3] = 0;
    if ( v3 >= 8 )
      std::_Deallocate(*a1, v3 + 1, 2uLL);
    *a1 = v9;
  }
  return a1;
}
