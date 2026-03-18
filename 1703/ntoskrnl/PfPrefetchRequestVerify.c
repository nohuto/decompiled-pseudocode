/*
 * XREFs of PfPrefetchRequestVerify @ 0x140466DB4
 * Callers:
 *     PfpPrefetchRequest @ 0x1404634E8 (PfpPrefetchRequest.c)
 * Callees:
 *     PfPrefetchRequestVerifyRanges @ 0x140466CD0 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerifyPath @ 0x140467018 (PfPrefetchRequestVerifyPath.c)
 *     PfRequestRangeCheck @ 0x1404670A4 (PfRequestRangeCheck.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x1404670E4 (PfPrefetchRequestPrepareForVerify.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  __int64 v9; // rsi
  int v10; // r11d
  __int64 v11; // r15
  __int64 v12; // r13
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  int v15; // r11d
  __int64 v16; // rsi
  __int64 v17; // rdi
  _DWORD v18[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v19[12]; // [rsp+40h] [rbp-40h] BYREF
  char v20; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-2Ch]
  char v22; // [rsp+64h] [rbp-1Ch] BYREF

  if ( (unsigned int)a2 < 0x80 )
    return 1000LL;
  if ( *(_DWORD *)a1 != 13 )
    return 1500LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)a2 != (_DWORD)v3 )
    return 2000LL;
  if ( a1 + v3 < a1 )
    return 2500LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 28) >= 8u )
    return 3000LL;
  if ( *(_WORD *)(a1 + 30) >= 8u )
    return 3200LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC0) != 0 )
    return 3400LL;
  if ( *(_BYTE *)(a1 + 81) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, v19);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)PfRequestRangeCheck((unsigned int)v19, *(_DWORD *)(a1 + 32), 40 * *(_DWORD *)(a1 + 8), 8, 1) )
    {
      _mm_lfence();
      v5 = 0LL;
      v6 = a1 + *(unsigned int *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v18[0] = *(_DWORD *)(v6 + 40 * v5 + 32);
          v18[2] = *(_DWORD *)(v6 + 40 * v5 + 24);
          result = PfPrefetchRequestVerifyPath(a1, v19, v18);
          if ( (_DWORD)result )
            break;
          v7 = *(_DWORD *)(v6 + 40 * v5 + 12);
          if ( v7 < 2 )
            return 13000LL;
          v8 = v7 >> 1;
          if ( v8 > v21 )
            return 14000LL;
          v9 = *(unsigned int *)(v6 + 40 * v5 + 16);
          if ( !(unsigned __int8)PfRequestRangeCheck((unsigned int)&v20, *(_DWORD *)(v6 + 40 * v5 + 16), 48 * v8, 8, 1) )
            return 15000LL;
          v11 = 0LL;
          v12 = a1 + v9;
          if ( v10 )
          {
            do
            {
              v13 = (_DWORD *)(v12 + 48 * v11);
              if ( v13[8] || v13[10] )
              {
                result = PfPrefetchRequestVerifyPath(a1, v19, v13 + 8);
                if ( (_DWORD)result )
                  return result;
              }
              result = PfPrefetchRequestVerifyRanges(a1, (__int64)v19, v13 + 4, (*v13 & 1) != 0 ? 512 : 4096);
              if ( (_DWORD)result )
                return result;
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < *(_DWORD *)(v6 + 40 * v5 + 12) >> 1 );
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 8) )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        v14 = *(unsigned int *)(a1 + 56);
        if ( (unsigned __int8)PfRequestRangeCheck(
                                (unsigned int)&v22,
                                *(_DWORD *)(a1 + 56),
                                40 * *(_DWORD *)(a1 + 20),
                                8,
                                1) )
        {
          v16 = a1 + v14;
          v17 = 0LL;
          if ( v15 )
          {
            while ( 1 )
            {
              result = PfPrefetchRequestVerifyRanges(
                         a1,
                         (__int64)v19,
                         (unsigned int *)(v16 + 8 * ((unsigned int)v17 + 3LL + 4 * v17)),
                         4096);
              if ( (_DWORD)result )
                break;
              v17 = (unsigned int)(v17 + 1);
              if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 20) )
                return 0LL;
            }
          }
          else
          {
            return 0LL;
          }
        }
        else
        {
          return 40000LL;
        }
      }
    }
    else
    {
      return 12500LL;
    }
  }
  return result;
}
