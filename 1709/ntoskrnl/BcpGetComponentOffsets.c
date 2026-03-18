/*
 * XREFs of BcpGetComponentOffsets @ 0x1402912D4
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x1402910E0 (BcpDisplayProgress.c)
 */

__int64 __fastcall BcpGetComponentOffsets(__int64 *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int v7; // edi
  unsigned int v10; // r8d
  int v11; // r10d
  __int64 v12; // rbx
  unsigned int v13; // ecx
  int v14; // r13d
  unsigned int v15; // esi
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // ecx
  __int64 v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v7 = 0;
  v10 = dword_140387EC8;
  v11 = 0;
  *((_DWORD *)a1 + 2) = dword_140387EC8;
  v12 = 9LL * a4;
  *a1 = BcpCursor;
  *(_DWORD *)a1 = dword_140358260[18 * a4 + 8] + dword_140358260[18 * a4 + 4];
  v13 = v10 + dword_140358260[18 * a4 + 11];
  *((_DWORD *)a1 + 1) = v13;
  v14 = dword_140358260[18 * a4 + 11] + v13;
  *((_DWORD *)a1 + 2) = v14;
  v20 = *a1;
  if ( a6 )
  {
    dword_14035A1B0 |= 0x1000000u;
    v15 = 0;
    v16 = HIDWORD(v20);
    while ( 1 )
    {
      v11 = BcpDisplayProgress(v15, a4, v10);
      if ( v11 < 0 )
        break;
      if ( __PAIR64__(v16, v20) < BcpProgressEnd )
      {
        v14 = dword_14035A108;
        LODWORD(v20) = BcpProgressEnd;
        v16 = HIDWORD(BcpProgressEnd);
      }
      BcpCursor = *a1;
      if ( a1 != (__int64 *)-8LL )
        dword_140387EC8 = *((_DWORD *)a1 + 2);
      a4 = v21;
      if ( ++v15 > 0x64 )
      {
        dword_14035A1B0 &= ~0x1000000u;
        goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v17 = dword_140358260[2 * v12 + 8] + dword_140358260[2 * v12 + 4];
    *a3 = v17;
    a3[1] = v14 + dword_140358260[2 * v12 + 13];
    if ( a5 )
      v7 = a5 + dword_140358260[2 * v12 + 14];
    *a2 = v7 + v17;
    v18 = v14 + dword_140358260[2 * v12 + 15];
    a2[1] = v18;
    a2[2] = dword_140358260[2 * v12 + 11] + v18;
  }
  return (unsigned int)v11;
}
