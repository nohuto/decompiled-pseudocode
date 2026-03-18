/*
 * XREFs of rimProcessHidKeyboardInput @ 0x1C01135F4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0107BCC (rimHidP_GetUsages.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01134A0 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C01137E8 (rimReportHidKeyboardInputData.c)
 */

void __fastcall rimProcessHidKeyboardInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int Usages; // eax
  int v6; // edi
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-30h]

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
    v7 = 15;
    LODWORD(v8) = Usages;
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
    v7 = 14;
    LODWORD(v8) = v6;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x12u,
    v7,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids,
    v8);
LABEL_12:
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x10u,
      (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
    rimInvalidateHidKeyboardDeviceKeys(a1, a2, v2, 1);
  }
}
