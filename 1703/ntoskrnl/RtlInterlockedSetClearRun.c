/*
 * XREFs of RtlInterlockedSetClearRun @ 0x140122300
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x14055067C (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // r11
  unsigned __int64 v5; // rdi
  signed __int32 v6; // r8d
  int v7; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  int v11; // esi
  signed __int32 v12; // eax
  int v13; // edx
  signed __int32 v14; // ett
  signed __int32 v15; // eax
  int v16; // edx
  signed __int32 v17; // ett
  unsigned int v18; // r9d
  volatile signed __int32 *v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax

  v3 = a3;
  v4 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = a2;
  if ( a3 + (unsigned __int64)(a2 & 0x1F) <= 0x20 )
  {
    v6 = *v4;
    if ( v3 == 32 )
      v7 = -1;
    else
      v7 = ((1 << v3) - 1) << (a2 & 0x1F);
    if ( (v7 & v6) != 0 )
      return 0LL;
    while ( 1 )
    {
      v9 = _InterlockedCompareExchange(v4, v6 | v7, v6);
      v8 = v6 == v9;
      v6 = v9;
      if ( v8 )
        break;
      if ( (v9 & v7) != 0 )
        return 0LL;
    }
    return 1LL;
  }
  v11 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
    goto LABEL_18;
  v12 = *v4;
  v13 = ((1 << (32 - v11)) - 1) << (a2 & 0x1F);
  if ( (v13 & *v4) != 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = v12;
    v12 = _InterlockedCompareExchange(v4, v12 | v13, v12);
    if ( v14 == v12 )
      break;
    if ( (v12 & v13) != 0 )
      return 0LL;
  }
  v3 = a3 - (32 - v11);
  for ( ++v4; ; ++v4 )
  {
LABEL_18:
    if ( v3 < 0x20 )
    {
      if ( !v3 )
        return 1LL;
      v15 = *v4;
      v16 = (1 << v3) - 1;
      if ( (v16 & *v4) == 0 )
      {
        do
        {
          v17 = v15;
          v15 = _InterlockedCompareExchange(v4, v15 | v16, v15);
          if ( v17 == v15 )
            return 1LL;
        }
        while ( (v15 & v16) == 0 );
      }
      v18 = a3 - v3;
      v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v5 >> 5));
      if ( a3 - v3 + (v5 & 0x1F) > 0x20 )
      {
        if ( v11 )
        {
          _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << (v5 & 0x1F)));
          v18 -= 32 - v11;
          ++v19;
        }
        if ( v18 >= 0x20 )
        {
          v20 = (unsigned __int64)v18 >> 5;
          do
          {
            *v19 = 0;
            v18 -= 32;
            ++v19;
            --v20;
          }
          while ( v20 );
        }
        goto LABEL_37;
      }
LABEL_39:
      if ( v18 == 32 )
        *v19 = 0;
      else
        _InterlockedAnd(v19, ~(((1 << v18) - 1) << (v5 & 0x1F)));
      return 0LL;
    }
    if ( _InterlockedCompareExchange(v4, -1, 0) )
      break;
    v3 -= 32;
  }
  if ( a3 == v3 )
    return 0LL;
  v18 = a3 - v3;
  v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v5 >> 5));
  if ( a3 - v3 + (v5 & 0x1F) <= 0x20 )
    goto LABEL_39;
  if ( v11 )
  {
    _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << (v5 & 0x1F)));
    v18 -= 32 - v11;
    ++v19;
  }
  if ( v18 >= 0x20 )
  {
    v21 = (unsigned __int64)v18 >> 5;
    do
    {
      *v19 = 0;
      v18 -= 32;
      ++v19;
      --v21;
    }
    while ( v21 );
  }
LABEL_37:
  if ( v18 )
    _InterlockedAnd(v19, ~((1 << v18) - 1));
  return 0LL;
}
