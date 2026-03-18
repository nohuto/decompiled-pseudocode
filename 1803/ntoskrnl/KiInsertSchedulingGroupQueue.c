/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400A9414
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400A93B4 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // di
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r11d
  int v12; // eax
  unsigned __int16 v13; // ax
  int v14; // r10d
  int v15; // eax
  __int64 v16; // rax
  __int64 result; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v4 = *(_QWORD *)(a2 + 408);
  v5 = a3;
  if ( v4 )
    v7 = (__int64 *)(v4 + 392);
  else
    v7 = (__int64 *)(a1 + 22896);
  v8 = v7[1];
  v9 = *v7;
  if ( (v8 & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v7;
    else
      v9 = 0LL;
  }
  LOBYTE(a3) = 0;
  v10 = v8 & 1;
  if ( v9 )
  {
    v11 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v12 = v11 - *(_DWORD *)(v9 + 28);
      if ( v11 == *(_DWORD *)(v9 + 28) )
      {
        v13 = *(_WORD *)(a2 + 114);
        if ( v13 )
        {
          a3 = *(unsigned __int16 *)(v9 + 26);
          _BitScanReverse((unsigned int *)&v14, v13);
          v15 = 0;
          if ( (_WORD)a3 )
            _BitScanReverse((unsigned int *)&v15, (unsigned __int16)a3);
          v12 = v15 - v14;
        }
        else
        {
          if ( !v11 )
          {
            if ( *(_QWORD *)a2 > *(_QWORD *)(v9 - 88) )
              goto LABEL_24;
            goto LABEL_17;
          }
          v12 = 1;
        }
      }
      if ( v12 >= 0 )
      {
LABEL_24:
        v16 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          if ( !v16 )
            goto LABEL_28;
          v16 ^= v9;
        }
        if ( !v16 )
        {
LABEL_28:
          LOBYTE(a3) = 1;
          break;
        }
        goto LABEL_21;
      }
LABEL_17:
      v16 = *(_QWORD *)v9;
      if ( v10 )
      {
        if ( !v16 )
          goto LABEL_29;
        v16 ^= v9;
      }
      if ( !v16 )
      {
LABEL_29:
        LOBYTE(a3) = 0;
        break;
      }
LABEL_21:
      v9 = v16;
    }
  }
  result = RtlRbInsertNodeEx(v7, v9, a3, a2 + 88);
  if ( v5 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
