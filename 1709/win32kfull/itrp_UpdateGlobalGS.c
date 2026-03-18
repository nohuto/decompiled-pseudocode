/*
 * XREFs of itrp_UpdateGlobalGS @ 0x1C02D4874
 * Callers:
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C02C270C (fsg_UpdatePrivateSpaceAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_UpdateGlobalGS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned __int16 v14; // cx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int64 result; // rax
  unsigned __int64 v18; // rcx

  v14 = a7[12];
  if ( !v14 )
    v14 = 1;
  *(_QWORD *)(a1 + 168) = a5;
  *(_QWORD *)(a1 + 416) = a13;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 160) = a4;
  *(_QWORD *)a1 = a6;
  v15 = a6 + 4LL * v14;
  *(_QWORD *)(a1 + 424) = v15;
  *(_QWORD *)(a1 + 432) = a6 ^ a1 ^ v15 ^ MEMORY[0xFFFFF78000000330];
  v16 = a7[5];
  if ( a7[3] > v16 )
    v16 = a7[3];
  *(_DWORD *)(a1 + 440) = v16 + 4;
  if ( a9 )
  {
    *(_DWORD *)(a1 + 224) = a9;
    *(_QWORD *)(a1 + 216) = a10;
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  if ( a11 )
  {
    *(_DWORD *)(a1 + 208) = a11;
    *(_QWORD *)(a1 + 200) = a12;
  }
  else
  {
    *(_DWORD *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  *(_QWORD *)(a1 + 344) = a7;
  *(_QWORD *)(a1 + 352) = (unsigned __int64)a7 ^ a1 ^ *(_QWORD *)(a1 + 8) ^ MEMORY[0xFFFFF78000000330];
  result = a8;
  *(_WORD *)(a1 + 360) = a8;
  v18 = a8 ^ (unsigned __int64)MEMORY[0xFFFFF78000000330];
  *(_BYTE *)(a1 + 341) = 0;
  *(_QWORD *)(a1 + 368) = a1 ^ *(_QWORD *)(a1 + 16) ^ v18;
  *(_WORD *)(a1 + 396) = 1;
  *(_DWORD *)(a1 + 400) = 10000;
  *(_DWORD *)(a1 + 404) = 100;
  *(_DWORD *)(a1 + 408) = 10000000;
  return result;
}
