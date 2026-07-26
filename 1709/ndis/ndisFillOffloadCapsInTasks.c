/*
 * XREFs of ndisFillOffloadCapsInTasks @ 0x1C0043DD8
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C0046A58 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisFillOffloadCapsInTasks(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v8; // r10
  int v9; // r9d
  _DWORD *v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xE6u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 28;
  v10 = (_DWORD *)(*(_QWORD *)(a1 + 4120) + 196LL);
  v11 = *(_DWORD *)(v8 + 16);
  v12 = v8 + 28;
  *(_DWORD *)(v8 + 12) = 28;
  if ( v10[9] )
  {
    *(_DWORD *)(v8 + 32) = 24;
    *(_DWORD *)v12 = 1;
    v4 = v8 + 48;
    *(_DWORD *)(v8 + 36) = 2;
    v2 = v8 + 28;
    *(_DWORD *)(v8 + 44) = 16;
    *(_DWORD *)(v8 + 40) = 36;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_DWORD *)(v8 + 52) = v10[10];
    *(_DWORD *)(v8 + 56) = v10[11];
    if ( (v10[12] & 3) == 1 )
      *(_BYTE *)(v8 + 60) = 1;
    if ( (v10[12] & 0xC) == 4 )
      *(_BYTE *)(v8 + 61) = 1;
    v13 = *(unsigned int *)(v8 + 40);
    v12 += v13;
    v9 = v13 + 28;
  }
  if ( v10[3] || v10[1] || v10[7] || v10[5] )
  {
    *(_DWORD *)(v12 + 8) = 0;
    v3 = (_DWORD *)(v12 + 20);
    *(_DWORD *)(v12 + 12) = 36;
    v9 += 36;
    *(_DWORD *)(v12 + 4) = 24;
    *(_DWORD *)v12 = 1;
    v2 = v12;
    *(_DWORD *)(v12 + 16) = 16;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    if ( v11 == 2 )
    {
      if ( (v10[1] & 2) != 0 )
      {
        if ( (v10[2] & 3) == 1 )
          *v3 |= 1u;
        if ( (v10[2] & 0xC) == 4 )
          *v3 |= 2u;
        if ( (v10[2] & 0x30) == 0x10 )
          *v3 |= 4u;
        if ( (v10[2] & 0xC0) == 0x40 )
          *v3 |= 8u;
        if ( (v10[2] & 0x300) == 0x100 )
          *v3 |= 0x10u;
      }
      if ( (v10[3] & 2) != 0 )
      {
        if ( (v10[4] & 3) == 1 )
          *(_DWORD *)(v12 + 24) |= 1u;
        if ( (v10[4] & 0xC) == 4 )
          *(_DWORD *)(v12 + 24) |= 2u;
        if ( (v10[4] & 0x30) == 0x10 )
          *(_DWORD *)(v12 + 24) |= 4u;
        if ( (v10[4] & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 24) |= 8u;
        if ( (v10[4] & 0x300) == 0x100 )
          *(_DWORD *)(v12 + 24) |= 0x10u;
      }
      if ( (v10[7] & 2) != 0 )
      {
        if ( (v10[8] & 0xC) == 4 )
          *(_DWORD *)(v12 + 32) |= 2u;
        if ( (v10[8] & 0x30) == 0x10 )
          *(_DWORD *)(v12 + 32) |= 4u;
        if ( (v10[8] & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 32) |= 8u;
      }
      if ( (v10[5] & 2) != 0 )
      {
        if ( (v10[6] & 0xC) == 4 )
          *(_DWORD *)(v12 + 28) |= 2u;
        if ( (v10[6] & 0x30) == 0x10 )
          *(_DWORD *)(v12 + 28) |= 4u;
        if ( (v10[6] & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 28) |= 8u;
      }
    }
    v12 += *(unsigned int *)(v12 + 12);
  }
  if ( v10[13] )
  {
    *(_DWORD *)(v12 + 12) = 44;
    v6 = v12 + 20;
    v9 += 44;
    *(_DWORD *)(v12 + 4) = 24;
    v2 = v12;
    *(_DWORD *)(v12 + 16) = 24;
    *(_DWORD *)v12 = 1;
    *(_DWORD *)(v12 + 8) = 1;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    *(_QWORD *)(v12 + 36) = 0LL;
    *(_DWORD *)(v12 + 20) = v10[14];
    *(_DWORD *)(v12 + 24) = v10[15];
    *(_DWORD *)(v12 + 28) = v10[16];
    *(_DWORD *)(v12 + 32) = v10[17];
    if ( (v10[18] & 3) == 1 )
      *(_DWORD *)(v12 + 36) |= 1u;
    if ( (v10[18] & 0xC) == 4 )
      *(_DWORD *)(v12 + 36) |= 2u;
    if ( (v10[18] & 0x30) == 0x10 )
      *(_DWORD *)(v12 + 36) |= 4u;
    if ( (v10[18] & 0x300) == 0x100 )
      *(_DWORD *)(v12 + 36) |= 0x10u;
    if ( (v10[18] & 0xC00) == 0x400 )
      *(_DWORD *)(v12 + 36) |= 0x20u;
    if ( (v10[19] & 0x300) == 0x100 )
      *(_DWORD *)(v12 + 40) |= 0x10u;
    if ( (v10[19] & 0x3000) == 0x1000 )
      *(_DWORD *)(v12 + 40) |= 0x40u;
    if ( (v10[19] & 0xC000) == 0x4000 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    if ( (v10[19] & 3) == 1 )
      *(_DWORD *)(v12 + 40) |= 1u;
    if ( (v10[19] & 0xC0) == 0x40 )
      *(_DWORD *)(v12 + 40) |= 8u;
    if ( (v10[19] & 0x30) == 0x10 )
      *(_DWORD *)(v12 + 40) |= 4u;
    if ( (v10[19] & 0xC) == 4 )
      *(_DWORD *)(v12 + 40) |= 2u;
  }
  if ( !v4 && !v3 )
    *(_DWORD *)(v8 + 12) &= -(v6 != 0);
  if ( v2 )
    *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(a2 + 52) = v9;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xE7u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
}
