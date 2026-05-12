/*
 * XREFs of GetSrbScsiData @ 0x1C001C960
 * Callers:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001204 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaidLogMiniportCompletion @ 0x1C0005ED0 (RaidLogMiniportCompletion.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaidUnitClaimIrp @ 0x1C00080D0 (RaidUnitClaimIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidLogGetParm4 @ 0x1C000A7E0 (RaidLogGetParm4.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000AD4C (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014C34 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     StorPortGetPhysicalAddress @ 0x1C001AD20 (StorPortGetPhysicalAddress.c)
 *     RaidLogRequestComplete @ 0x1C003C114 (RaidLogRequestComplete.c)
 *     StorEtwIORequestDispatch @ 0x1C00408F0 (StorEtwIORequestDispatch.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0040B30 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0040E58 (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _BYTE *a2, _DWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r11
  char v7; // r15
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // ecx

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 && !*(_DWORD *)(a1 + 20) )
  {
    v11 = 0LL;
    if ( !*(_DWORD *)(a1 + 56) )
      return v6;
    while ( 1 )
    {
      v12 = *(unsigned int *)(a1 + 4 * v11 + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        v13 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v12 <= (unsigned int)v13 )
          break;
      }
LABEL_21:
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 56) )
        return v6;
    }
    v14 = (unsigned int)v12;
    v15 = *(_DWORD *)(v12 + a1) - 64;
    if ( v15 )
    {
      v20 = v15 - 1;
      if ( v20 )
      {
        if ( v20 == 1 && v14 + 40 <= v13 )
        {
          if ( a3 )
            *a3 = *(_DWORD *)(v14 + a1 + 12);
          v19 = v14 + a1 + 32;
          if ( !*(_DWORD *)(v14 + a1 + 12) )
            v19 = v6;
          v6 = v19;
          if ( a4 )
            *a4 = *(_BYTE *)(v14 + a1 + 8);
          if ( a5 )
            *a5 = *(_QWORD *)(v14 + a1 + 24);
          if ( a6 )
            *a6 = *(_BYTE *)(v14 + a1 + 9);
          return v6;
        }
        goto LABEL_20;
      }
      v16 = v14 + 56;
    }
    else
    {
      v16 = v14 + 40;
    }
    if ( v16 <= v13 )
    {
      v7 = 1;
      if ( a2 )
        *a2 = *(_BYTE *)(v14 + a1 + 10);
      v17 = v14 + a1 + 24;
      if ( !*(_BYTE *)(v14 + a1 + 10) )
        v17 = v6;
      v6 = v17;
      if ( a4 )
        *a4 = *(_BYTE *)(v14 + a1 + 8);
      if ( a5 )
        *a5 = *(_QWORD *)(v14 + a1 + 16);
      if ( !a6 )
        return v6;
      *a6 = *(_BYTE *)(v14 + a1 + 9);
    }
LABEL_20:
    if ( v7 )
      return v6;
    goto LABEL_21;
  }
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  return v6;
}
