/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x1C000C538
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDev @ 0x1C000C32C (RIMOpenDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00A3F30 (RIMLogDeviceHealthTelemetry.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx
  const wchar_t *result; // rax

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = L"RIM_INPUT_TYPE_PTP_CONFIG";
      if ( (*(_DWORD *)(a1 + 184) & 0x800) == 0 )
        return L"RIM_INPUT_TYPE_TCH_CONFIG";
      return result;
    }
    return &word_1C0160290;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return L"RIM_INPUT_TYPE_HID_GEN";
    return &word_1C0160290;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
  if ( v4 != 7 )
  {
    if ( (unsigned int)(v4 - 5) <= 1 )
      return L"RIM_INPUT_TYPE_HID_PEN";
    if ( (unsigned int)(v4 - 1) <= 3 )
      return L"RIM_INPUT_TYPE_HID_TCH";
    return &word_1C0160290;
  }
  return L"RIM_INPUT_TYPE_HID_PTP";
}
