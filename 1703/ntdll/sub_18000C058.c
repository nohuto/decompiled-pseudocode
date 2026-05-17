/*
 * XREFs of sub_18000C058 @ 0x18000C058
 * Callers:
 *     sub_18000B51C @ 0x18000B51C (sub_18000B51C.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_18000BF34 @ 0x18000BF34 (sub_18000BF34.c)
 * Callees:
 *     sub_18000AB78 @ 0x18000AB78 (sub_18000AB78.c)
 *     sub_18000BF34 @ 0x18000BF34 (sub_18000BF34.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall sub_18000C058(__int64 a1, volatile signed __int32 *a2)
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
  signed __int64 v13; // rcx
  char v14; // dl
  unsigned __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rtt

  v4 = ((unsigned __int32)*a2 >> 5) & 0x7F;
  result = *(_QWORD *)(a1 + 8 * v4);
  do
  {
    while ( 1 )
    {
      if ( !result )
      {
LABEL_23:
        if ( _InterlockedExchange(a2 + 10, 1) != 2 )
          return sub_18000BF34(a1, a2, 0LL, dword_180158680);
        return result;
      }
      if ( (result & 2) == 0 )
        break;
      v17 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 1, result);
      if ( v17 == result )
        goto LABEL_23;
    }
    v6 = result | 2;
    v7 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 2, result);
  }
  while ( v7 != result );
  v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = 0;
  v11 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
  do
  {
    if ( (volatile signed __int32 *)v8 == a2 )
    {
      v12 = *(_QWORD *)(v8 + 16);
      v10 = 1;
      if ( v8 == v9 )
      {
        v13 = *(_QWORD *)(v8 + 16);
        if ( v12 )
          v13 = v12 ^ ((unsigned __int8)v6 ^ (unsigned __int8)v12) & 3;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v13, v6);
        if ( v6 == result )
        {
          if ( !v13 )
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
      }
      else
      {
        *(_QWORD *)(v11 + 16) = v12;
        if ( v12 )
          *(_QWORD *)(v12 + 24) = v11;
        else
          *(_QWORD *)(v11 + 32) = v11;
        v8 = v12;
      }
    }
    else
    {
      *(_QWORD *)(v8 + 24) = v11;
      v11 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( v8 );
  if ( !v10 && _InterlockedExchange(a2 + 10, 0) != 2 )
    ZwWaitForAlertByThreadId(*(_QWORD *)a2, 0LL);
  *(_QWORD *)(v9 + 32) = v11;
  do
  {
    if ( (v6 & 1) != 0 )
    {
      v14 = 1;
      v15 = 0LL;
    }
    else
    {
      v14 = 0;
      v15 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v15, v6);
    v16 = v6 == result;
    v6 = result;
  }
  while ( !v16 );
  if ( v14 )
    return sub_18000AB78(result);
  return result;
}
