/*
 * XREFs of ExpCreateOutputEFI @ 0x1407BF3CC
 * Callers:
 *     ExpConvertSignatureName @ 0x1407BF0C4 (ExpConvertSignatureName.c)
 *     ExpTranslateNtPath @ 0x1407C21D4 (ExpTranslateNtPath.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpFindDiskSignature @ 0x1407BFAFC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 */

__int64 __fastcall ExpCreateOutputEFI(
        char *a1,
        unsigned int *a2,
        _OWORD *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *Src,
        char a8)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  int *v10; // rax
  int v14; // ebp
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // eax
  __int64 result; // rax
  int *v20; // rax
  unsigned __int64 v21; // rcx
  char v22; // r8
  char *v23; // rdi
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  int *v25; // [rsp+38h] [rbp-60h]
  _QWORD v26[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]

  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  v25 = a4;
  v14 = 54;
  if ( Src )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    v16 = 2 * v15;
    v9 = (unsigned int)(v16 + 2);
    v14 = v16 + 60;
    v10 = a4;
  }
  v17 = v14 + 4;
  if ( *a2 < v17 )
  {
    v8 = -1073741789;
LABEL_15:
    *a2 = v17;
    return v8;
  }
  v18 = *v10;
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
      v22 = 1;
      *(_DWORD *)a1 = 1;
      *((_DWORD *)a1 + 1) = v17;
      *((_DWORD *)a1 + 2) = 4;
      v23 = a1 + 12;
      *(_DWORD *)v23 = 2752772;
      *((_DWORD *)v23 + 1) = *v20;
      *((_QWORD *)v23 + 1) = *a5 / v21;
      *((_QWORD *)v23 + 2) = *a6 / v21;
      if ( a8 == 1 )
      {
        v22 = 2;
        *(_OWORD *)(v23 + 24) = *a3;
      }
      else
      {
        *((_DWORD *)v23 + 6) = *(_DWORD *)a3;
      }
      v23[40] = v22;
      v23[41] = v22;
      if ( Src )
      {
        v23 += (unsigned __int8)v23[2] | (unsigned __int64)((unsigned __int8)v23[3] << 8);
        *(_WORD *)v23 = 1028;
        *((_WORD *)v23 + 1) = v9 + 4;
        memmove(v23 + 4, Src, v9 - 2);
        *(_WORD *)&v23[2 * (v9 >> 1) + 2] = 0;
      }
      *(_DWORD *)&v23[(unsigned __int8)v23[2] | (unsigned __int64)((unsigned __int8)v23[3] << 8)] = 327551;
      goto LABEL_15;
    }
  }
  return result;
}
