/*
 * XREFs of sub_18004ABB4 @ 0x18004ABB4
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_180024C30 @ 0x180024C30 (sub_180024C30.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 * Callees:
 *     sub_180024C30 @ 0x180024C30 (sub_180024C30.c)
 *     sub_18004ADC0 @ 0x18004ADC0 (sub_18004ADC0.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall sub_18004ABB4(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  signed __int64 result; // rax
  signed __int64 v6; // rbx
  signed __int64 v7; // rtt
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  char v10; // r8
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // dl
  bool v15; // zf
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt

  v4 = (*(_DWORD *)a2 >> 5) & 0x7F;
  result = *(_QWORD *)(a1 + 8 * v4);
  while ( result )
  {
    if ( (result & 2) != 0 )
    {
      v17 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 1, result);
      if ( v17 == result )
        break;
    }
    else
    {
      v6 = result | 2;
      v7 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 2, result);
      if ( v7 == result )
      {
        v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        v9 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        v10 = 0;
        v11 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
        while ( 1 )
        {
          v12 = *(_QWORD *)(v8 + 16);
          if ( v8 == a2 )
          {
            v10 = 1;
            if ( v8 == v9 )
            {
              v16 = *(_QWORD *)(v8 + 16);
              if ( v12 )
                v16 = v12 ^ ((unsigned __int8)v6 ^ (unsigned __int8)v12) & 3;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v16, v6);
              if ( v6 == result )
              {
                if ( !v16 )
                  return result;
                *(_QWORD *)(v12 + 24) = 0LL;
                v8 = v12;
                v9 = v12;
              }
              else
              {
                v6 = result;
                v8 = result & 0xFFFFFFFFFFFFFFFCuLL;
                v9 = result & 0xFFFFFFFFFFFFFFFCuLL;
                v11 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 24);
              }
              goto LABEL_9;
            }
            *(_QWORD *)(v11 + 16) = v12;
            if ( v12 )
              *(_QWORD *)(v12 + 24) = v11;
            else
              *(_QWORD *)(v11 + 32) = v11;
          }
          else
          {
            *(_QWORD *)(v8 + 24) = v11;
            v11 = v8;
          }
          v8 = v12;
LABEL_9:
          if ( !v8 )
          {
            if ( !v10 && _InterlockedExchange((volatile __int32 *)(a2 + 40), 0) != 2 )
              ZwWaitForAlertByThreadId(*(PVOID *)a2, 0LL);
            *(_QWORD *)(v9 + 32) = v11;
            do
            {
              v13 = 0LL;
              v14 = v6 & 1;
              if ( (v6 & 1) == 0 )
                v13 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v13, v6);
              v15 = v6 == result;
              v6 = result;
            }
            while ( !v15 );
            if ( v14 )
              return sub_18004ADC0(result);
            return result;
          }
        }
      }
    }
  }
  if ( _InterlockedExchange((volatile __int32 *)(a2 + 40), 1) != 2 )
    return sub_180024C30(a1, a2, 0LL, dword_1801596D8);
  return result;
}
