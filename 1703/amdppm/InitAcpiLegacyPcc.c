/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C002A250
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001E8C (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCCP @ 0x1C00197E4 (AcpiEval_PCCP.c)
 *     AcquirePccInterface @ 0x1C002C6C0 (AcquirePccInterface.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  _DWORD *v5; // rcx
  unsigned __int16 v6; // r9

  v2 = AcquirePccInterface();
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v4 = AcpiEval_PCCP((__int64)a1, a1 + 69);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( v4 == -1073741772 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_75735a37d26d326260b0b0039ed2ea36_Traceguids);
      else
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_75735a37d26d326260b0b0039ed2ea36_Traceguids,
          v4);
      goto LABEL_19;
    }
    v3 = -1073741811;
    v5 = (_DWORD *)a1[69];
    if ( !qword_1C00118B0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x30u,
        (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
      goto LABEL_18;
    }
    if ( *v5 <= (unsigned int)(dword_1C00118B8 - 4) )
    {
      if ( v5[1] <= (unsigned int)(dword_1C00118B8 - 4) )
      {
        v3 = 0;
        if ( (unsigned int)(dword_1C00118AC - 1) > 0x26 )
        {
LABEL_19:
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
          return v3;
        }
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&WPP_75735a37d26d326260b0b0039ed2ea36_Traceguids,
          dword_1C00118AC,
          40);
        v3 = -1073741823;
LABEL_18:
        a1[33] &= ~0x80000000uLL;
        goto LABEL_19;
      }
      v6 = 50;
    }
    else
    {
      v6 = 49;
    }
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v6,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      KeGetPcr()->Prcb.Number);
    goto LABEL_18;
  }
  if ( v2 == -1073741637 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_75735a37d26d326260b0b0039ed2ea36_Traceguids);
  else
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_75735a37d26d326260b0b0039ed2ea36_Traceguids,
      v2);
  return v3;
}
