/*
 * XREFs of rimHidP_GetCollectionDescription @ 0x1C0106E48
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010BD74 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010C374 (RIMIDE_CreateGenericHidDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetCollectionDescription(__int64 a1, __int64 a2)
{
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))WPP_MAIN_CB.Queue.ListEntry.Flink)(a1, a2, 1LL);
  else
    return 3221225659LL;
}
