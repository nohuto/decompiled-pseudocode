/*
 * XREFs of rimProcessHidKeyboardInput @ 0x1C0114B20
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0106EE0 (rimHidP_GetUsages.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01149CC (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0114D14 (rimReportHidKeyboardInputData.c)
 */

void __fastcall rimProcessHidKeyboardInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int Usages; // eax
  int v6; // edi
  int v7; // edx
  unsigned __int16 v8; // r9
  __int64 v9; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 480);
  if ( *(_DWORD *)(v2 + 356) )
  {
    PoLatencySensitivityHint(1LL);
    *(_DWORD *)(v2 + 356) = 0;
  }
  memset((void *)v2, 0, 0x28uLL);
  memset((void *)(v2 + 44), 0, 0x28uLL);
  memset((void *)(v2 + 84), 0, 0x28uLL);
  *(_BYTE *)(a1 + 712) = 1;
  *(_DWORD *)(v2 + 40) = 20;
  Usages = rimHidP_GetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)v2,
             (unsigned int *)(v2 + 40),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL),
             *(char **)(*(_QWORD *)(a2 + 456) + 24LL),
             *(_DWORD *)(a2 + 264));
  v6 = Usages;
  if ( Usages < 0 )
  {
    v8 = 15;
    LODWORD(v9) = Usages;
  }
  else
  {
    if ( gpfnHidP_UsageListDifference )
      v6 = gpfnHidP_UsageListDifference(
             *(unsigned __int16 **)(v2 + 344),
             (unsigned __int16 *)v2,
             (unsigned __int16 *)(v2 + 84),
             (unsigned __int16 *)(v2 + 44),
             *(_DWORD *)(v2 + 352));
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      rimReportHidKeyboardInputData(a1, a2, v2);
      goto LABEL_12;
    }
    v8 = 14;
    LODWORD(v9) = v6;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x12u,
    v8,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids,
    v9);
LABEL_12:
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      17,
      16,
      (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
    rimInvalidateHidKeyboardDeviceKeys(a1, a2, v2, 1);
  }
}
