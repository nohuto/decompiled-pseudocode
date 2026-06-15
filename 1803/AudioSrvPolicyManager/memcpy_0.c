/*
 * XREFs of memcpy_0 @ 0x1800362AD
 * Callers:
 *     memcpy_s @ 0x180001570 (memcpy_s.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000FEA0 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x1800179EC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180024CC4 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x18002A3D8 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 *     ?_Grow@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_NXZ @ 0x18002AB98 (-_Grow@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@AEAA_NXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800342B0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1800349AC (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
