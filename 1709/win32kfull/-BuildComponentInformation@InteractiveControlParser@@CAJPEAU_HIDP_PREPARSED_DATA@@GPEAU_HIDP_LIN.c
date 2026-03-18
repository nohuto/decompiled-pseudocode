/*
 * XREFs of ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C022558C
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0225990 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0225B94 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225F58 (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildComponentInformation(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct _HIDP_LINK_COLLECTION_NODE *a3,
        struct InteractiveControlDevice *a4)
{
  USHORT v4; // di
  struct _INTERACTIVECTRL_CAPABILITIES *v5; // r15
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  struct _HIDP_BUTTON_CAPS *v9; // rsi
  NTSTATUS SpecificValueCaps; // eax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  UCHAR *v14; // rdi
  __int64 v15; // r8
  SimpleHapticsController *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  NTSTATUS SpecificButtonCaps; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+44h] [rbp-55h] BYREF
  USHORT v23; // [rsp+48h] [rbp-51h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v24[2]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v25; // [rsp+60h] [rbp-39h] BYREF

  v4 = 0;
  v5 = (struct InteractiveControlDevice *)((char *)a4 + 72);
  ValueCapsLength[0] = 0;
  ButtonCapsLength[0] = 0;
  v23 = 1;
  *((_QWORD *)a4 + 24) = (char *)a4 + 184;
  ValueCaps = 0LL;
  *((_QWORD *)a4 + 23) = (char *)a4 + 184;
  v9 = 0LL;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0LL, ValueCapsLength, PreparsedData);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    goto LABEL_32;
  if ( ValueCapsLength[0] )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * ValueCapsLength[0], 1819440195LL);
    if ( !ValueCaps )
    {
      v11 = -1073741670;
LABEL_33:
      InteractiveControlParser::FreeComponentInformation(v5);
      return (unsigned int)v11;
    }
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
    {
      if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &v25, &v23, PreparsedData) >= 0 )
      {
        v12 = *((unsigned __int16 *)v5 + 6);
        LODWORD(v24[0]) = 0;
        v11 = -1073741661;
        v14 = (UCHAR *)Win32AllocPool(v12, 1819440195LL);
        *v14 = v25.ReportID;
        v16 = (SimpleHapticsController *)*((_QWORD *)a4 + 48);
        if ( v16 )
          v11 = SimpleHapticsController::SendDeviceIOControl(
                  v16,
                  0xB0192u,
                  0LL,
                  0LL,
                  v14,
                  *((unsigned __int16 *)v5 + 6),
                  (unsigned int *)v24);
        if ( v11 < 0 )
          goto LABEL_28;
        DbgPrintEx(
          0x4Du,
          2u,
          "InteractiveControlParser::BuildComponentInformationFound Device Resolution Multiplier:\n");
        DbgPrintEx(
          0x4Du,
          2u,
          "InteractiveControlParser::BuildComponentInformation\tLogical Rnage = [%d - %d]\n",
          v25.LogicalMin,
          v25.LogicalMax);
        DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformation\tMultiplier Value = %d\n", 1);
        Win32FreePool(v14, v17, v18);
        v4 = 0;
      }
      if ( ValueCapsLength[0] )
      {
        do
        {
          v11 = InteractiveControlParser::CreateAndLinkComponent(&ValueCaps[v4], 0, v5, v24);
          if ( v11 < 0 )
            goto LABEL_28;
          if ( v24[0] && ValueCaps[v4].LinkCollection == v25.LinkCollection )
            *((_DWORD *)v24[0] + 31) = 1;
        }
        while ( ++v4 < ValueCapsLength[0] );
      }
      v4 = 0;
    }
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0LL, ButtonCapsLength, PreparsedData);
  v11 = SpecificButtonCaps;
  if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
  {
    v9 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * ButtonCapsLength[0], 1819440195LL);
    if ( v9 )
    {
      v11 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v9, ButtonCapsLength, PreparsedData);
      if ( v11 >= 0 && ButtonCapsLength[0] )
      {
        do
        {
          v11 = InteractiveControlParser::CreateAndLinkComponent((struct _HIDP_VALUE_CAPS *)&v9[v4], 1, v5, v24);
          if ( v11 < 0 )
            break;
          ++v4;
        }
        while ( v4 < ButtonCapsLength[0] );
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
LABEL_28:
  if ( ValueCaps )
    Win32FreePool(ValueCaps, v13, v15);
  if ( v9 )
    Win32FreePool(v9, v13, v15);
LABEL_32:
  if ( v11 < 0 )
    goto LABEL_33;
  return (unsigned int)v11;
}
