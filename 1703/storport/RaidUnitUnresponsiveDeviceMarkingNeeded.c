/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C003F6AC
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2576) )
  {
    if ( (*(_BYTE *)(a1 + 154) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 2588);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 2624) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 2624) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 2624)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 2588));
        }
      }
    }
  }
  return v1;
}
