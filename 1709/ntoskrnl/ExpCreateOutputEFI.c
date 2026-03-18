/*
 * XREFs of ExpCreateOutputEFI @ 0x140758738
 * Callers:
 *     ExpConvertSignatureName @ 0x140758430 (ExpConvertSignatureName.c)
 *     ExpTranslateNtPath @ 0x14075B25C (ExpTranslateNtPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExpFindDiskSignature @ 0x140758E6C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14075905C (ExpGetDriveGeometry.c)
 */

__int64 __fastcall ExpCreateOutputEFI(
        char *a1,
        unsigned int *a2,
        __int128 *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *Src,
        char a8)
{
  unsigned int v8; // esi
  int *v9; // rax
  unsigned int v13; // r15d
  int v14; // ebp
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // eax
  __int64 result; // rax
  int *v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // rdi
  __int128 v23; // xmm0
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  int *v25; // [rsp+38h] [rbp-60h]
  _QWORD v26[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]

  v8 = 0;
  v9 = a4;
  v25 = a4;
  v13 = 0;
  v14 = 54;
  if ( Src )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    v16 = 2 * v15;
    v13 = v16 + 2;
    v14 = v16 + 60;
    v9 = a4;
  }
  v17 = v14 + 4;
  if ( *a2 < v17 )
  {
    v8 = -1073741789;
LABEL_15:
    *a2 = v17;
    return v8;
  }
  v18 = *v9;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v27 = 0LL;
  LODWORD(v24) = v18;
  result = ExpFindDiskSignature((_DWORD)a3, (unsigned int)&v24, (unsigned int)&v24 + 4, 0, 0LL, a8, v24);
  if ( (int)result >= 0 )
  {
    result = ExpGetDriveGeometry(HIDWORD(v24), v26);
    if ( (int)result >= 0 )
    {
      memset(a1, 0, v17);
      v20 = v25;
      v21 = HIDWORD(v27);
      *(_DWORD *)a1 = 1;
      *((_DWORD *)a1 + 1) = v17;
      *((_DWORD *)a1 + 2) = 4;
      v22 = a1 + 12;
      *(_DWORD *)v22 = 2752772;
      *((_DWORD *)v22 + 1) = *v20;
      *((_QWORD *)v22 + 1) = *a5 / v21;
      *((_QWORD *)v22 + 2) = *a6 / v21;
      if ( a8 == 1 )
      {
        v23 = *a3;
        *((_WORD *)v22 + 20) = 514;
        *(_OWORD *)(v22 + 24) = v23;
      }
      else
      {
        *((_DWORD *)v22 + 6) = *(_DWORD *)a3;
        *((_WORD *)v22 + 20) = 257;
      }
      if ( Src )
      {
        v22 += (unsigned __int8)v22[2] | (unsigned __int64)((unsigned __int8)v22[3] << 8);
        *(_WORD *)v22 = 1028;
        *((_WORD *)v22 + 1) = v13 + 4;
        memmove(v22 + 4, Src, v13 - 2LL);
        *(_WORD *)&v22[2 * ((unsigned __int64)v13 >> 1) + 2] = 0;
      }
      *(_DWORD *)&v22[(unsigned __int8)v22[2] | (unsigned __int64)((unsigned __int8)v22[3] << 8)] = 327551;
      goto LABEL_15;
    }
  }
  return result;
}
