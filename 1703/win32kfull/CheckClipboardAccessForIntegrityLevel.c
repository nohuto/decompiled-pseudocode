/*
 * XREFs of CheckClipboardAccessForIntegrityLevel @ 0x1C00AFA70
 * Callers:
 *     FindClipFormat @ 0x1C00AF864 (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C00AF9F8 (CountNumClipFormatForIL.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01DACB0 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01E89A0 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckClipboardAccessForIntegrityLevel(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int *v3; // r11
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned int v6; // r8d
  int v7; // r10d

  v2 = 0;
  v3 = (unsigned int *)&unk_1C0324078;
  v4 = 1;
  do
  {
    if ( a1 >= *v3 && a1 < *((_DWORD *)&gaClipILDef + 6 * v2 + 8) )
      break;
    ++v2;
    v3 += 6;
  }
  while ( v2 < 5 );
  if ( v2 > 4 )
  {
LABEL_17:
    v6 = dword_1C03240F0;
    v7 = dword_1C03240F4;
  }
  else
  {
    while ( 1 )
    {
      v5 = v2 + 1;
      if ( *((_DWORD *)&gaClipILDef + 6 * v5 + 5) )
        break;
      ++v2;
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_17;
    }
    v6 = *((_DWORD *)&gaClipILDef + 6 * v2 + 2);
    v7 = *((_DWORD *)&gaClipILDef + 6 * v2 + 3);
  }
  if ( gbEnforceUIPI
    && v6 <= (unsigned int)a2
    && (v6 != (_DWORD)a2 || v7 != HIDWORD(a2) && HIDWORD(a2) != -1 && v7 != -1) )
  {
    return 0;
  }
  return v4;
}
