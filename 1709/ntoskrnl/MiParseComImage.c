/*
 * XREFs of MiParseComImage @ 0x1404FB3CC
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiParseComImage(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  ULONG_PTR v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // r14d
  unsigned int v11; // eax
  __int128 *v12; // rcx
  int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // cl
  _QWORD v18[10]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v19; // [rsp+90h] [rbp-88h]
  __int128 v20; // [rsp+A0h] [rbp-78h]
  __int128 v21; // [rsp+B0h] [rbp-68h]
  __int128 v22; // [rsp+C0h] [rbp-58h]
  __int64 v23; // [rsp+D0h] [rbp-48h]

  v6 = 0;
  v7 = 0LL;
  *a3 = 0;
  v8 = a2[20];
  if ( !(_DWORD)v8 )
    return 0LL;
  if ( (v8 & 3) != 0 )
    return 0LL;
  v9 = a2[21];
  if ( v9 < 0x48 || (unsigned int)v8 + v9 <= (unsigned int)v8 || v8 + 72 > (unsigned __int64)a2[4] )
    return 0LL;
  v10 = MiMapImageInSystemSpace(a1, 3, (__int64)v18);
  if ( v10 >= 0 )
  {
    v7 = MiReferenceControlAreaFile((__int64)a1);
    v6 = 3;
    v10 = 0;
    v11 = a2[20];
    v12 = (__int128 *)(v18[0] + v11);
    v19 = *v12;
    v20 = v12[1];
    v21 = v12[2];
    v22 = v12[3];
    v23 = *((_QWORD *)v12 + 8);
    MiLogRelocationRva(v11, 0x48u, v7, a1);
    v13 = v20;
    if ( (v20 & 1) != 0 )
    {
      *a3 = 1;
      v14 = *a1;
      *(_BYTE *)(*a1 + 15) |= 1u;
      if ( WORD2(v19) > 2u || WORD2(v19) == 2 && WORD3(v19) >= 5u )
      {
        v15 = *(_QWORD *)(v14 + 56);
        *(_BYTE *)(v15 + 51) |= 2u;
        if ( (v13 & 0x20002) != 2 && (*(_BYTE *)(v14 + 14) & 0x40) != 0 )
        {
          v16 = *(_BYTE *)(v15 + 51) | 1;
          *(_BYTE *)(v15 + 51) = v16;
          if ( (v13 & 0x20000) != 0 )
            *(_BYTE *)(v15 + 51) = v16 | 0x20;
        }
      }
    }
  }
  if ( (v6 & 1) != 0 )
    MiUnmapImageInSystemSpace((__int64)v18);
  if ( v6 >= 2 )
    MiDereferenceControlAreaFile((__int64)a1, v7);
  return (unsigned int)v10;
}
