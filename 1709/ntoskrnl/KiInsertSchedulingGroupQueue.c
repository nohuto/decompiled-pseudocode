/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400D2BE8
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400D2B88 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  bool v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // r11d
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r8
  int v13; // r10d
  int v14; // eax
  unsigned __int64 v15; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 408);
  if ( v3 )
    v6 = v3 + 392;
  else
    v6 = a1 + 22896;
  v7 = 0;
  v8 = *(_QWORD *)v6;
  if ( !*(_QWORD *)v6 )
    goto LABEL_4;
  v9 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v10 = v9 - *(_DWORD *)(v8 + 28);
    if ( v9 != *(_DWORD *)(v8 + 28) )
      goto LABEL_13;
    v11 = *(_WORD *)(a2 + 114);
    if ( v11 )
    {
      v12 = *(_WORD *)(v8 + 26);
      _BitScanReverse((unsigned int *)&v13, v11);
      v14 = 0;
      if ( v12 )
        _BitScanReverse((unsigned int *)&v14, v12);
      v10 = v14 - v13;
LABEL_13:
      if ( v10 < 0 )
        goto LABEL_14;
      goto LABEL_17;
    }
    if ( v9 )
    {
      v10 = 1;
      goto LABEL_13;
    }
    if ( *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
    {
LABEL_14:
      v15 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
      {
        if ( !v15 )
        {
LABEL_16:
          v7 = 0;
          goto LABEL_4;
        }
        v15 ^= v8;
      }
      if ( !v15 )
        goto LABEL_16;
      goto LABEL_20;
    }
LABEL_17:
    v15 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)(v6 + 8) & 1) == 0 )
      goto LABEL_18;
    if ( !v15 )
      break;
    v15 ^= v8;
LABEL_18:
    if ( !v15 )
      break;
LABEL_20:
    v8 = v15;
  }
  v7 = 1;
LABEL_4:
  RtlRbInsertNodeEx(v6, v8, v7, a2 + 88);
  if ( a3 )
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
}
