/*
 * XREFs of ndisTranslateOffloadSetsToTasks @ 0x1C00D34BC
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001F9B8 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  bool v4; // bp
  char v5; // di
  char v6; // r14
  char v8; // r9
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // eax

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_q(0xC6u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
    v8 = byte_1C0092612;
  }
  v9 = *(_DWORD *)(a2 + 4);
  v10 = *(_DWORD **)(a1 + 4120);
  v11 = *(_DWORD *)(a2 + 16);
  if ( v9 == 1 )
  {
    v4 = v10[11] != 0;
    if ( v10[3] || v10[5] )
      v5 = 1;
    if ( v10[15] )
      v6 = 1;
  }
  if ( v11 == 1 && (v10[7] || v10[9]) )
    v5 = 1;
  v10[268] |= 1u;
  v12 = 28;
  v10[264] = 28;
  v10[263] = 1;
  v10[267] = 2;
  v10[269] = 14;
  if ( v4 || v5 == 1 || v6 == 1 )
  {
    v3 = v10 + 270;
    v10[266] = 28;
    v10[271] = 24;
    v10[270] = 1;
  }
  else
  {
    v10[266] = 0;
  }
  if ( v5 )
  {
    v3[2] = 0;
    v3[4] = 16;
    v12 = 64;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    if ( v9 == 1 )
    {
      if ( (v10[4] & 0xC) == 4 )
        v3[5] |= 2u;
      if ( (v10[4] & 3) == 1 )
        v3[5] |= 1u;
      if ( (v10[4] & 0x30) == 0x10 )
        v3[5] |= 4u;
      if ( (v10[4] & 0xC0) == 0x40 )
        v3[5] |= 8u;
      if ( (v10[4] & 0x300) == 0x100 )
        v3[5] |= 0x10u;
      if ( (v10[6] & 0xC) == 4 )
        v3[6] |= 2u;
      if ( (v10[6] & 3) == 1 )
        v3[6] |= 1u;
      if ( (v10[6] & 0x30) == 0x10 )
        v3[6] |= 4u;
      if ( (v10[6] & 0xC0) == 0x40 )
        v3[6] |= 8u;
      if ( (v10[6] & 0x300) == 0x100 )
        v3[6] |= 0x10u;
    }
    if ( v11 == 1 )
    {
      if ( (v10[8] & 0xC) == 4 )
        v3[7] |= 2u;
      if ( (v10[8] & 0x30) == 0x10 )
        v3[7] |= 4u;
      if ( (v10[8] & 0xC0) == 0x40 )
        v3[7] |= 8u;
      if ( (v10[10] & 0xC) == 4 )
        v3[8] |= 2u;
      if ( (v10[10] & 0x30) == 0x10 )
        v3[8] |= 4u;
      if ( (v10[10] & 0xC0) == 0x40 )
        v3[8] |= 8u;
    }
    if ( !v4 && !v6 )
      goto LABEL_93;
    v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
    v3[1] = 24;
    *v3 = 1;
  }
  if ( v4 )
  {
    v3[2] = 2;
    v3[4] = 16;
    v12 += 36;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[5] = 0;
    if ( (v10[14] & 0xC) == 4 )
      *((_BYTE *)v3 + 33) = 1;
    if ( (v10[14] & 3) == 1 )
      *((_BYTE *)v3 + 32) = 1;
    v3[6] = v10[12];
    v3[7] = v10[13];
    if ( v6 )
    {
      v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
      v3[1] = 24;
      *v3 = 1;
    }
    else
    {
      v3[3] = 0;
    }
  }
  if ( v6 )
  {
    *((_QWORD *)v3 + 1) = 1LL;
    v3[4] = 24;
    v12 += 44;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)(v3 + 9) = 0LL;
    if ( v10[16] == 1 )
      v3[5] = 1;
    v3[6] = 0;
    if ( v10[18] == 1 )
      v3[7] = 1;
    v13 = v10[19];
    if ( v13 )
      v3[8] = v13;
    if ( (v10[20] & 3) == 1 )
      v3[9] |= 1u;
    if ( (v10[20] & 0xC) == 4 )
      v3[9] |= 2u;
    if ( (v10[20] & 0x30) == 0x10 )
      v3[9] |= 4u;
    v3[9] &= ~8u;
    if ( (v10[20] & 0x300) == 0x100 )
      v3[9] |= 0x10u;
    if ( (v10[20] & 0xC00) == 0x400 )
      v3[9] |= 0x20u;
    if ( (v10[21] & 3) == 1 )
      v3[10] |= 1u;
    if ( (v10[21] & 0xC) != 0 )
      v3[10] |= 2u;
    if ( (v10[21] & 0x30) == 0x10 )
      v3[10] |= 4u;
    if ( (v10[21] & 0x300) == 0x100 )
      v3[10] |= 0x10u;
    v3[10] &= ~0x20u;
    if ( (v10[21] & 0x3000) == 0x1000 )
      v3[10] |= 0x40u;
    if ( (v10[21] & 0xC000) == 0x4000 )
      v3[10] |= 0x80u;
LABEL_93:
    v3[3] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4120) + 1196LL) = v12;
  if ( (unsigned __int8)v8 >= 4u )
    WPP_SF_q(0xC7u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
}
