/*
 * XREFs of rimCompleteReads @ 0x1C0093A64
 * Callers:
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0093D18 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     RimInputTypeToDeviceType @ 0x1C00953D0 (RimInputTypeToDeviceType.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimCompleteReads(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // r15d
  __int64 i; // rbx
  int v6; // eax
  __int64 j; // rbx
  int v8; // eax

  if ( *(_DWORD *)(a1 + 76) )
  {
    rimFindPausedDeviceAndCompleteRead();
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 76) & DeviceTypeToRimInputType(v2);
      if ( v3 )
        break;
LABEL_4:
      if ( ++v2 > 2 )
        return 0LL;
    }
    for ( i = *(_QWORD *)(a1 + 552); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      if ( v2 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *(_DWORD *)(a1 + 76)) == 0 )
          continue;
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          rimProcessAnyQueuedCompleteFrames(a1, i);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v3) )
      {
        continue;
      }
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x200) == 0 && (v6 & 0x100) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, i);
    }
  }
  for ( j = *(_QWORD *)(a1 + 552); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
    {
      v8 = *(_DWORD *)(j + 184);
      if ( (v8 & 0x200) == 0 && (v8 & 0x100) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, j);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1, j);
    }
  }
  return 0LL;
}
