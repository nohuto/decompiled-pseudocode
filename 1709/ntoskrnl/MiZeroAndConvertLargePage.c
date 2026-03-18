/*
 * XREFs of MiZeroAndConvertLargePage @ 0x1400CFECC
 * Callers:
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiZeroAndConvertLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  bool v6; // zf
  __int64 v7; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // esi
  __int64 i; // rcx
  char v14[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+42h] [rbp-16h]

  v15 = 0LL;
  v3 = a3;
  v6 = (*(_BYTE *)(a1 + 34) & 7) == 0;
  v16 = v16 & 0x38 | 0x45;
  if ( !v6 )
    MiSetOriginalPtePfnFromFreeList(&v15);
  v7 = 0LL;
  result = MiPfnZeroingNeeded((__int64)v14, v3);
  v12 = result;
  if ( (_DWORD)v3 == 1 )
  {
LABEL_9:
    v7 = 0LL;
    if ( v12 != 1 )
      return result;
    goto LABEL_10;
  }
  for ( i = a1; v10; --v10 )
  {
    *(_QWORD *)(i + 16) = v7;
    v7 = i;
    i += 48LL;
  }
  if ( (_DWORD)result != 1 )
    goto LABEL_11;
  if ( *(_DWORD *)(v11 + 4 * (v3 + 4 * ((unsigned __int64)v9 >> 6)) + 3704176) == (_DWORD)v3 )
  {
    result = MiChangePageAttributeBatch(v7, (unsigned int)v3, 0LL);
    goto LABEL_9;
  }
LABEL_10:
  result = MiZeroLargePage(a1, a2, v3);
LABEL_11:
  if ( v7 )
    return MiChangePageAttributeBatch(v7, (unsigned int)v3, 0LL);
  return result;
}
