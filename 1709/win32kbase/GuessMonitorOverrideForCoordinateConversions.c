/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x1C007DFA0
 * Callers:
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C00E7BA0 (NtUserGetClipCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C0070E54 (HMValidateSharedHandleNoRip.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v3 = 0LL;
  if ( **(_DWORD **)gpDispInfo > 1u )
  {
    if ( (int)IsDCELogicalSpeedTopLevelHitTestSupported() < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v7 = 18LL;
      if ( !a3 )
        v7 = a2;
      v8 = DCELogicalSpeedTopLevelHitTest(&v9, v7);
    }
    if ( v8 && (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v8 + 368) >> 8)) & 0x1FF) == 0 )
      return HMValidateSharedHandleNoRip(*(_QWORD *)(v8 + 360));
  }
  return v3;
}
