/*
 * XREFs of ndisFillOffloadCapsInTasks @ 0x1C0046BD8
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C004967C (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisFillOffloadCapsInTasks(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rbx
  char v8; // r11
  __int64 v9; // r10
  int v10; // r9d
  _DWORD *v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  v8 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_q(0xD4u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
    v8 = byte_1C0092612;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = 28;
  v11 = (_DWORD *)(*(_QWORD *)(a1 + 4120) + 196LL);
  v12 = *(_DWORD *)(v9 + 16);
  v13 = v9 + 28;
  *(_DWORD *)(v9 + 12) = 28;
  if ( v11[9] )
  {
    *(_DWORD *)(v9 + 32) = 24;
    *(_DWORD *)v13 = 1;
    v4 = v9 + 48;
    *(_DWORD *)(v9 + 36) = 2;
    v2 = v9 + 28;
    *(_DWORD *)(v9 + 44) = 16;
    *(_DWORD *)(v9 + 40) = 36;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_DWORD *)(v9 + 52) = v11[10];
    *(_DWORD *)(v9 + 56) = v11[11];
    if ( (v11[12] & 3) == 1 )
      *(_BYTE *)(v9 + 60) = 1;
    if ( (v11[12] & 0xC) == 4 )
      *(_BYTE *)(v9 + 61) = 1;
    v14 = *(unsigned int *)(v9 + 40);
    v13 += v14;
    v10 = v14 + 28;
  }
  if ( v11[3] || v11[1] || v11[7] || v11[5] )
  {
    *(_DWORD *)(v13 + 8) = 0;
    v3 = (_DWORD *)(v13 + 20);
    *(_DWORD *)(v13 + 4) = 24;
    *(_DWORD *)v13 = 1;
    v10 += 36;
    *(_DWORD *)(v13 + 16) = 16;
    v2 = v13;
    *(_DWORD *)(v13 + 12) = 36;
    *(_QWORD *)(v13 + 20) = 0LL;
    *(_QWORD *)(v13 + 28) = 0LL;
    if ( v12 == 2 )
    {
      if ( (v11[1] & 2) != 0 )
      {
        if ( (v11[2] & 3) == 1 )
          *v3 |= 1u;
        if ( (v11[2] & 0xC) == 4 )
          *v3 |= 2u;
        if ( (v11[2] & 0x30) == 0x10 )
          *v3 |= 4u;
        if ( (v11[2] & 0xC0) == 0x40 )
          *v3 |= 8u;
        if ( (v11[2] & 0x300) == 0x100 )
          *v3 |= 0x10u;
      }
      if ( (v11[3] & 2) != 0 )
      {
        if ( (v11[4] & 3) == 1 )
          *(_DWORD *)(v13 + 24) |= 1u;
        if ( (v11[4] & 0xC) == 4 )
          *(_DWORD *)(v13 + 24) |= 2u;
        if ( (v11[4] & 0x30) == 0x10 )
          *(_DWORD *)(v13 + 24) |= 4u;
        if ( (v11[4] & 0xC0) == 0x40 )
          *(_DWORD *)(v13 + 24) |= 8u;
        if ( (v11[4] & 0x300) == 0x100 )
          *(_DWORD *)(v13 + 24) |= 0x10u;
      }
      if ( (v11[7] & 2) != 0 )
      {
        if ( (v11[8] & 0xC) == 4 )
          *(_DWORD *)(v13 + 32) |= 2u;
        if ( (v11[8] & 0x30) == 0x10 )
          *(_DWORD *)(v13 + 32) |= 4u;
        if ( (v11[8] & 0xC0) == 0x40 )
          *(_DWORD *)(v13 + 32) |= 8u;
      }
      if ( (v11[5] & 2) != 0 )
      {
        if ( (v11[6] & 0xC) == 4 )
          *(_DWORD *)(v13 + 28) |= 2u;
        if ( (v11[6] & 0x30) == 0x10 )
          *(_DWORD *)(v13 + 28) |= 4u;
        if ( (v11[6] & 0xC0) == 0x40 )
          *(_DWORD *)(v13 + 28) |= 8u;
      }
    }
    v13 += *(unsigned int *)(v13 + 12);
  }
  if ( v11[13] )
  {
    *(_DWORD *)(v13 + 12) = 44;
    v6 = v13 + 20;
    v10 += 44;
    *(_DWORD *)(v13 + 4) = 24;
    v2 = v13;
    *(_DWORD *)(v13 + 16) = 24;
    *(_DWORD *)v13 = 1;
    *(_DWORD *)(v13 + 8) = 1;
    *(_QWORD *)(v13 + 20) = 0LL;
    *(_QWORD *)(v13 + 28) = 0LL;
    *(_QWORD *)(v13 + 36) = 0LL;
    *(_DWORD *)(v13 + 20) = v11[14];
    *(_DWORD *)(v13 + 24) = v11[15];
    *(_DWORD *)(v13 + 28) = v11[16];
    *(_DWORD *)(v13 + 32) = v11[17];
    if ( (v11[18] & 3) == 1 )
      *(_DWORD *)(v13 + 36) |= 1u;
    if ( (v11[18] & 0xC) == 4 )
      *(_DWORD *)(v13 + 36) |= 2u;
    if ( (v11[18] & 0x30) == 0x10 )
      *(_DWORD *)(v13 + 36) |= 4u;
    if ( (v11[18] & 0x300) == 0x100 )
      *(_DWORD *)(v13 + 36) |= 0x10u;
    if ( (v11[18] & 0xC00) == 0x400 )
      *(_DWORD *)(v13 + 36) |= 0x20u;
    if ( (v11[19] & 0x300) == 0x100 )
      *(_DWORD *)(v13 + 40) |= 0x10u;
    if ( (v11[19] & 0x3000) == 0x1000 )
      *(_DWORD *)(v13 + 40) |= 0x40u;
    if ( (v11[19] & 0xC000) == 0x4000 )
      *(_DWORD *)(v13 + 40) |= 0x80u;
    if ( (v11[19] & 3) == 1 )
      *(_DWORD *)(v13 + 40) |= 1u;
    if ( (v11[19] & 0xC0) == 0x40 )
      *(_DWORD *)(v13 + 40) |= 8u;
    if ( (v11[19] & 0x30) == 0x10 )
      *(_DWORD *)(v13 + 40) |= 4u;
    if ( (v11[19] & 0xC) == 4 )
      *(_DWORD *)(v13 + 40) |= 2u;
  }
  if ( !v4 && !v3 )
    *(_DWORD *)(v9 + 12) &= -(v6 != 0);
  if ( v2 )
    *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(a2 + 52) = v10;
  if ( (unsigned __int8)v8 >= 4u )
    WPP_SF_q(0xD5u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
}
