/*
 * XREFs of ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14001B5DC
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPCMWfxToIEEEFloat(struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  WORD v3; // ax
  WORD v4; // cx
  DWORD v5; // eax

  if ( a1 )
  {
    if ( a1->wFormatTag == 1 )
      goto LABEL_9;
    if ( a1->wFormatTag == 0xFFFE )
    {
      v2 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
        v2 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( !v2 )
      {
LABEL_9:
        if ( a1->wFormatTag != 0xFFFE || (a1[1].wFormatTag & 7) == 0 )
        {
          if ( a1->wFormatTag == 1 )
          {
            a1->wFormatTag = 3;
          }
          else
          {
            a1[1].wFormatTag = 32;
            *(GUID *)((char *)&a1[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
          }
          v3 = 4 * a1->nChannels;
          a1->wBitsPerSample = 32;
          v4 = v3;
          v5 = v3 * a1->nSamplesPerSec;
          a1->nBlockAlign = v4;
          a1->nAvgBytesPerSec = v5;
        }
      }
    }
  }
}
