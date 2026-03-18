/*
 * XREFs of XilCoreDeviceSlot_Initialize @ 0x1C003F860
 * Callers:
 *     DeviceSlot_Initialize @ 0x1C000F07C (DeviceSlot_Initialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     XilRegister_WriteUlong64 @ 0x1C0019828 (XilRegister_WriteUlong64.c)
 */

__int64 __fastcall XilCoreDeviceSlot_Initialize(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_QWORD *)(a1 + 24) )
  {
    XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), (_DWORD *)(v5 + 56), (unsigned __int8)*(_DWORD *)(a1 + 16));
    XilRegister_WriteUlong64(v4, (_DWORD *)(v5 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 0xAu, 0x12u, (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids);
    return (unsigned int)-1073741436;
  }
  return v2;
}
