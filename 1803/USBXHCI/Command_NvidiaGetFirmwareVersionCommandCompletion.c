/*
 * XREFs of Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C0004400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

LONG __fastcall Command_NvidiaGetFirmwareVersionCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  char v2; // al
  __int64 v3; // rdi

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 16),
      4,
      7,
      19,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      BYTE1(*((_DWORD *)v1 + 10)),
      *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 264LL) = (unsigned __int16)*((_DWORD *)v1 + 10);
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 16), 3, 7, 20, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids, v2);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
