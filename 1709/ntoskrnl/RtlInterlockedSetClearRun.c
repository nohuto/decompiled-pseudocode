/*
 * XREFs of RtlInterlockedSetClearRun @ 0x1400E0B00
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x140532FCC (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  volatile signed __int32 *v5; // r10
  unsigned int v6; // r11d
  unsigned __int64 v7; // rbx
  signed __int32 v8; // eax
  int v9; // edx
  signed __int32 v10; // ett
  int v12; // eax
  int v13; // edi
  signed __int32 v14; // eax
  int v15; // edx
  signed __int32 v16; // ett
  signed __int32 v17; // eax
  int v18; // edx
  signed __int32 v19; // ett
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rbx
  volatile signed __int32 *v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax

  v3 = a2 & 0x1F;
  v5 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v6 = a3;
  v7 = a2;
  if ( v3 + (unsigned __int64)a3 <= 0x20 )
  {
    v8 = *v5;
    if ( a3 == 32 )
      v9 = -1;
    else
      v9 = ((1 << a3) - 1) << v3;
    if ( (v9 & v8) != 0 )
      return 0LL;
    while ( 1 )
    {
      v10 = v8;
      v8 = _InterlockedCompareExchange(v5, v8 | v9, v8);
      if ( v10 == v8 )
        break;
      if ( (v8 & v9) != 0 )
        return 0LL;
    }
    return 1LL;
  }
  v13 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
    goto LABEL_21;
  v14 = *v5;
  v15 = ((1 << (32 - v13)) - 1) << v3;
  if ( (v15 & *v5) != 0 )
    return 0LL;
  while ( 1 )
  {
    v16 = v14;
    v14 = _InterlockedCompareExchange(v5, v14 | v15, v14);
    if ( v16 == v14 )
      break;
    if ( (v14 & v15) != 0 )
      return 0LL;
  }
  v6 = a3 - (32 - v13);
  for ( ++v5; ; ++v5 )
  {
LABEL_21:
    if ( v6 < 0x20 )
    {
      if ( !v6 )
        return 1LL;
      v17 = *v5;
      v18 = (1 << v6) - 1;
      if ( (v18 & *v5) == 0 )
      {
        do
        {
          v19 = v17;
          v17 = _InterlockedCompareExchange(v5, v17 | v18, v17);
          if ( v19 == v17 )
            return 1LL;
        }
        while ( (v17 & v18) == 0 );
      }
      v20 = v7 >> 5;
      v21 = a3 - v6;
      v22 = v7 & 0x1F;
      v23 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * v20);
      if ( v22 + (unsigned __int64)(a3 - v6) > 0x20 )
      {
        if ( v13 )
        {
          _InterlockedAnd(v23, ~(((1 << (32 - v13)) - 1) << v22));
          v21 -= 32 - v13;
          ++v23;
        }
        if ( v21 >= 0x20 )
        {
          v24 = (unsigned __int64)v21 >> 5;
          do
          {
            *v23 = 0;
            v21 -= 32;
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        goto LABEL_40;
      }
      goto LABEL_42;
    }
    if ( _InterlockedCompareExchange(v5, -1, 0) )
      break;
    v6 -= 32;
  }
  if ( a3 == v6 )
    return 0LL;
  v25 = v7 >> 5;
  v21 = a3 - v6;
  v22 = v7 & 0x1F;
  v23 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * v25);
  if ( v22 + (unsigned __int64)(a3 - v6) <= 0x20 )
  {
LABEL_42:
    if ( v21 != 32 )
    {
      v12 = ((1 << v21) - 1) << v22;
      goto LABEL_10;
    }
    *v23 = 0;
    return 0LL;
  }
  if ( v13 )
  {
    _InterlockedAnd(v23, ~(((1 << (32 - v13)) - 1) << v22));
    v21 -= 32 - v13;
    ++v23;
  }
  if ( v21 >= 0x20 )
  {
    v26 = (unsigned __int64)v21 >> 5;
    do
    {
      *v23 = 0;
      v21 -= 32;
      ++v23;
      --v26;
    }
    while ( v26 );
  }
LABEL_40:
  if ( v21 )
  {
    v12 = (1 << v21) - 1;
LABEL_10:
    _InterlockedAnd(v23, ~v12);
  }
  return 0LL;
}
