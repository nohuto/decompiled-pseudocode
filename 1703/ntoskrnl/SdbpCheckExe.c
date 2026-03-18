/*
 * XREFs of SdbpCheckExe @ 0x14072B51C
 * Callers:
 *     SdbpSearchDB @ 0x1404B5980 (SdbpSearchDB.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     SdbpCheckForMatch @ 0x1405BB258 (SdbpCheckForMatch.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckExe(int a1, __int64 a2, unsigned int a3, _DWORD *a4, __int64 a5, int a6, int *a7, void *a8)
{
  unsigned int v9; // esi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  v15 = 2;
  v9 = 0;
  v16[0] = 0;
  if ( (unsigned int)SdbpCheckForMatch(a1, a2, a3, a5, &v15, (__int64)v16) )
  {
    v11 = v15;
    if ( (a6 != 1 || v15 == 2) && (a6 != 2 || v15 != 2) )
    {
      if ( v15 == 1 )
      {
        memset(a8, 0, 0x80uLL);
        *a4 = 0;
      }
      v12 = (unsigned int)*a4;
      if ( (unsigned int)v12 < 0x10 )
      {
        v13 = v16[0];
        *((_DWORD *)a8 + 2 * v12) = a3;
        *((_DWORD *)a8 + 2 * v12 + 1) = v13;
        *a4 = v12 + 1;
        v9 = 1;
        if ( a7 )
          *a7 = v11;
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckExe",
          2706,
          (unsigned int)"The number of matching EXEs exceeded the max allowed");
        ++*a4;
        return 0;
      }
    }
  }
  return v9;
}
