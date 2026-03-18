/*
 * XREFs of bReAllocCacheFile @ 0x1C0142978
 * Callers:
 *     EngFntCacheAlloc @ 0x1C0142780 (EngFntCacheAlloc.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00C1B34 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C1D80 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 */

__int64 __fastcall bReAllocCacheFile(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  int *v3; // r9
  unsigned __int16 *v4; // rcx
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebp
  int v8; // r14d
  unsigned __int16 *v9; // rcx
  int *v10; // r9
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax

  v1 = qword_1C0327748;
  v2 = 0;
  v3 = (int *)a1;
  if ( (*(_DWORD *)(qword_1C0327748 + 16) & 4) != 0 )
    return 0LL;
  v4 = (unsigned __int16 *)(unsigned int)(*(_DWORD *)(qword_1C0327748 + 32) - *(_DWORD *)(qword_1C0327748 + 40));
  v5 = *(_DWORD *)(*(_QWORD *)qword_1C0327748 + 24LL);
  v6 = (((_DWORD)v4 + (_DWORD)v3 + 7) & 0xFFFFFFF8) + 0x2000;
  v7 = *(_DWORD *)(qword_1C0327748 + 24) - *(_QWORD *)qword_1C0327748;
  v8 = v6 + v5;
  if ( *(_QWORD *)qword_1C0327748 )
  {
    vUnmapFontCacheFile();
    v1 = qword_1C0327748;
  }
  if ( (unsigned int)bMapFileRetainHandle(v4, (struct _FILEVIEW *)(v1 + 56), v8, v3) )
  {
    v11 = qword_1C0327748;
    v2 = 1;
    v12 = *(_QWORD *)(qword_1C0327748 + 64);
    *(_QWORD *)qword_1C0327748 = v12;
    *(_DWORD *)(v12 + 24) = v8;
    *(_DWORD *)(*(_QWORD *)v11 + 32LL) += v6;
    v13 = *(_QWORD *)v11;
    v14 = *(_QWORD *)v11 + v7;
    v15 = v14 + (unsigned int)(*(_DWORD *)(v11 + 32) - *(_DWORD *)(v11 + 24));
    *(_QWORD *)(v11 + 24) = v14;
    *(_QWORD *)(v11 + 32) = v15;
    *(_QWORD *)(v11 + 40) = v14 + *(unsigned int *)(v13 + 32) + *(unsigned int *)(v13 + 28);
  }
  else
  {
    v17 = (unsigned int)bMapFileRetainHandle(v9, (struct _FILEVIEW *)(qword_1C0327748 + 56), v5, v10);
    v18 = qword_1C0327748;
    if ( v17 )
    {
      v19 = *(_QWORD *)(qword_1C0327748 + 64);
      *(_DWORD *)(qword_1C0327748 + 16) |= 6u;
      *(_QWORD *)v18 = v19;
      *(_DWORD *)(v18 + 48) = 1;
    }
    else
    {
      *(_DWORD *)(qword_1C0327748 + 16) |= 1u;
    }
  }
  return v2;
}
