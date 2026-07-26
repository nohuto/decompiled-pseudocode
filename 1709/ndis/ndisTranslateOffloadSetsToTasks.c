/*
 * XREFs of ndisTranslateOffloadSetsToTasks @ 0x1C00DDCB4
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001C09C (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  bool v4; // bp
  char v5; // di
  char v6; // r14
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // eax

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xD8u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD **)(a1 + 4120);
  v10 = *(_DWORD *)(a2 + 16);
  if ( v8 == 1 )
  {
    v4 = v9[11] != 0;
    if ( v9[3] || v9[5] )
      v5 = 1;
    if ( v9[15] )
      v6 = 1;
  }
  if ( v10 == 1 && (v9[7] || v9[9]) )
    v5 = 1;
  v9[268] |= 1u;
  v11 = 28;
  v9[264] = 28;
  v9[263] = 1;
  v9[267] = 2;
  v9[269] = 14;
  if ( v4 || v5 == 1 || v6 == 1 )
  {
    v3 = v9 + 270;
    v9[266] = 28;
    v9[271] = 24;
    v9[270] = 1;
  }
  else
  {
    v9[266] = 0;
  }
  if ( v5 )
  {
    v3[2] = 0;
    v3[4] = 16;
    v11 = 64;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    if ( v8 == 1 )
    {
      if ( (v9[4] & 0xC) == 4 )
        v3[5] |= 2u;
      if ( (v9[4] & 3) == 1 )
        v3[5] |= 1u;
      if ( (v9[4] & 0x30) == 0x10 )
        v3[5] |= 4u;
      if ( (v9[4] & 0xC0) == 0x40 )
        v3[5] |= 8u;
      if ( (v9[4] & 0x300) == 0x100 )
        v3[5] |= 0x10u;
      if ( (v9[6] & 0xC) == 4 )
        v3[6] |= 2u;
      if ( (v9[6] & 3) == 1 )
        v3[6] |= 1u;
      if ( (v9[6] & 0x30) == 0x10 )
        v3[6] |= 4u;
      if ( (v9[6] & 0xC0) == 0x40 )
        v3[6] |= 8u;
      if ( (v9[6] & 0x300) == 0x100 )
        v3[6] |= 0x10u;
    }
    if ( v10 == 1 )
    {
      if ( (v9[8] & 0xC) == 4 )
        v3[7] |= 2u;
      if ( (v9[8] & 0x30) == 0x10 )
        v3[7] |= 4u;
      if ( (v9[8] & 0xC0) == 0x40 )
        v3[7] |= 8u;
      if ( (v9[10] & 0xC) == 4 )
        v3[8] |= 2u;
      if ( (v9[10] & 0x30) == 0x10 )
        v3[8] |= 4u;
      if ( (v9[10] & 0xC0) == 0x40 )
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
    v11 += 36;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[5] = 0;
    if ( (v9[14] & 0xC) == 4 )
      *((_BYTE *)v3 + 33) = 1;
    if ( (v9[14] & 3) == 1 )
      *((_BYTE *)v3 + 32) = 1;
    v3[6] = v9[12];
    v3[7] = v9[13];
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
    v11 += 44;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)(v3 + 9) = 0LL;
    if ( v9[16] == 1 )
      v3[5] = 1;
    v3[6] = 0;
    if ( v9[18] == 1 )
      v3[7] = 1;
    v12 = v9[19];
    if ( v12 )
      v3[8] = v12;
    if ( (v9[20] & 3) == 1 )
      v3[9] |= 1u;
    if ( (v9[20] & 0xC) == 4 )
      v3[9] |= 2u;
    if ( (v9[20] & 0x30) == 0x10 )
      v3[9] |= 4u;
    v3[9] &= ~8u;
    if ( (v9[20] & 0x300) == 0x100 )
      v3[9] |= 0x10u;
    if ( (v9[20] & 0xC00) == 0x400 )
      v3[9] |= 0x20u;
    if ( (v9[21] & 3) == 1 )
      v3[10] |= 1u;
    if ( (v9[21] & 0xC) != 0 )
      v3[10] |= 2u;
    if ( (v9[21] & 0x30) == 0x10 )
      v3[10] |= 4u;
    if ( (v9[21] & 0x300) == 0x100 )
      v3[10] |= 0x10u;
    v3[10] &= ~0x20u;
    if ( (v9[21] & 0x3000) == 0x1000 )
      v3[10] |= 0x40u;
    if ( (v9[21] & 0xC000) == 0x4000 )
      v3[10] |= 0x80u;
LABEL_93:
    v3[3] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4120) + 1196LL) = v11;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xD9u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
}
