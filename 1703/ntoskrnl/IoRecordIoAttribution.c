/*
 * XREFs of IoRecordIoAttribution @ 0x1400ADF00
 * Callers:
 *     <none>
 * Callees:
 *     IopFindDiskIoAttribution @ 0x1400ADF94 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     IopRecordIoAttribution @ 0x1400AE0C4 (IopRecordIoAttribution.c)
 */

__int64 __fastcall IoRecordIoAttribution(__int64 a1, _DWORD *a2)
{
  __int64 DiskIoAttribution; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // ebx

  if ( *a2 == 1 )
  {
    DiskIoAttribution = IopFindDiskIoAttribution();
    v4 = DiskIoAttribution;
    if ( DiskIoAttribution )
    {
      v5 = DiskIoAttribution;
      while ( 1 )
      {
        if ( (a2[1] & 0xA00) != 0x800 || *(_QWORD *)(v5 + 160) )
        {
          v6 = IopRecordIoAttribution(v5, a2);
          if ( v6 < 0 )
            break;
        }
        v5 = *(_QWORD *)(v5 + 160);
        if ( !v5 )
        {
          v6 = 0;
          break;
        }
      }
      IoDiskIoAttributionDereference(v4);
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v6;
}
