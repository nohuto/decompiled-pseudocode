/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x1C0007364
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C009B01C (RIMLogDeviceHealthTelemetry.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rdx
  const wchar_t *result; // rax

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return &word_1C0163008;
    result = L"RIM_INPUT_TYPE_PTP_CONFIG";
    if ( (*(_DWORD *)(a1 + 184) & 0x800) == 0 )
      return L"RIM_INPUT_TYPE_TCH_CONFIG";
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( *(_BYTE *)(a1 + 48) != 3 )
        return L"RIM_INPUT_TYPE_HID_GEN";
      return &word_1C0163008;
    }
    v4 = *(_QWORD *)(a1 + 472);
    if ( *(_DWORD *)(v4 + 24) != 7 )
    {
      if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) <= 1 )
        return L"RIM_INPUT_TYPE_HID_PEN";
      if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 1) <= 3 )
        return L"RIM_INPUT_TYPE_HID_TCH";
      return &word_1C0163008;
    }
    return L"RIM_INPUT_TYPE_HID_PTP";
  }
  return result;
}
