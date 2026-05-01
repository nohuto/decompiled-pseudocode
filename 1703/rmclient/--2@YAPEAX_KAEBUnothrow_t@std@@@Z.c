/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001C30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001E30 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ??$CreateGitHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@PEAPEAU342@@Z @ 0x1800022F0 (--$CreateGitHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Fo.c)
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002690 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800028A0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800030C0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180007C7C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18000AC50 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000AD00 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18000B084 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetClientProxy@@@Z @ 0x18000C6CC (--$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClie.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x18000E23C (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_t.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000E408 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
