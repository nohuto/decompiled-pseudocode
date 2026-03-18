/*
 * XREFs of ApplyRelocations @ 0x140001D2C
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758 (WbDecryptWarbirdEncryptionSegmentBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyRelocations(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v7; // ebx
  unsigned int v8; // r11d
  signed int v9; // r10d
  unsigned int v13; // edx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  _DWORD *v21; // r8

  v7 = a2 - 1;
  v8 = a5 - a3;
  v9 = 0;
  while ( v7 >= v9 )
  {
    v15 = (v7 + v9) / 2;
    v16 = *(_DWORD *)(a1 + 4LL * v15) & 0xFFFFFFF;
    if ( v8 >= v16 )
    {
      if ( v8 <= v16 )
      {
        v13 = (v7 + v9) / 2;
        goto LABEL_3;
      }
      v9 = v15 + 1;
    }
    else
    {
      v7 = v15 - 1;
    }
  }
  v13 = v9;
LABEL_3:
  while ( v13 < a2 )
  {
    v17 = *(_DWORD *)(a1 + 4LL * v13);
    if ( (v17 & 0xFFFFFFF) >= v8 + a7 )
      break;
    ++v13;
    v18 = v17 & 0xFFFFFFF;
    v19 = v17 >> 28;
    v20 = (_DWORD *)(a3 + v18);
    v21 = (_DWORD *)((char *)v20 + a6 - a5);
    if ( v19 )
    {
      if ( v19 == 3 )
      {
        *v21 = a4 + *v20;
      }
      else if ( v19 == 10 )
      {
        *(_QWORD *)v21 = a4 + *(_QWORD *)v20;
      }
    }
  }
  return 0LL;
}
