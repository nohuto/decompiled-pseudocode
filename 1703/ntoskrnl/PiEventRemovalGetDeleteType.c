/*
 * XREFs of PiEventRemovalGetDeleteType @ 0x140570414
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiEventRemovalGetDeleteType(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 104) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a2 + 112) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  if ( v2 )
  {
    if ( (*(_DWORD *)(a2 + 136) & 4) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 304);
      if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
      {
        if ( v5 == 777 || v5 <= 774 || v5 >= 780 )
          return 6;
        else
          return 5;
      }
      else if ( v5 != 777 && v5 > 774 && v5 < 780
             || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 312LL) + 32LL) & 4) != 0 )
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
  else
  {
    return 4;
  }
}
