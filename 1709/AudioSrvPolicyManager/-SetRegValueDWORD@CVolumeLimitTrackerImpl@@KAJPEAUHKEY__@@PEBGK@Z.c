/*
 * XREFs of ?SetRegValueDWORD@CVolumeLimitTrackerImpl@@KAJPEAUHKEY__@@PEBGK@Z @ 0x180022F6C
 * Callers:
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::SetRegValueDWORD(HKEY a1, const unsigned __int16 *a2, int a3)
{
  unsigned int v3; // edi
  LSTATUS v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 0;
  v4 = RegSetValueExW(a1, L"VolumeLimitTimer", 0, 4u, (const BYTE *)&v8, 4u);
  if ( v4 )
  {
    v6 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v6 = v4;
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(v5, &EUVolumePolicy_Error_Origination, v6, "CVolumeLimitTrackerImpl::SetRegValueDWORD", 67, 0);
    return v6;
  }
  return v3;
}
