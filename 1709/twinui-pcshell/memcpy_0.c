/*
 * XREFs of memcpy_0 @ 0x1801E5CBD
 * Callers:
 *     memcpy_s @ 0x180002500 (memcpy_s.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800165C0 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E11C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     memcpy_s_0 @ 0x180027A64 (memcpy_s_0.c)
 *     ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002CEF4 (--$_MergeThem@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180081B3C (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x1800C04C0 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x1800C05DC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C05DC.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800C0724 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C0724.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800ECE0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180116230 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180132A78 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x180197CB4 (-IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x1801C1384 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
