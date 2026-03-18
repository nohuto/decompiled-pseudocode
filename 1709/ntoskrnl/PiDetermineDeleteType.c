/*
 * XREFs of PiDetermineDeleteType @ 0x14055DB3C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDetermineDeleteType(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  int v6; // eax

  v1 = *(_QWORD *)(a1 + 144);
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  v4 = 4;
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 136) & 4) != 0 )
    {
      v6 = *(_DWORD *)(v2 + 304);
      if ( (*(_DWORD *)(v2 + 396) & 0x10) != 0 )
      {
        if ( v6 == 777 || v6 <= 774 || v6 >= 780 )
          return 6;
        else
          return 5;
      }
      else if ( v6 != 777 && v6 > 774 && v6 < 780 || (*(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) & 4) != 0 )
      {
        return 3;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
