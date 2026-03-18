/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C005D19C
 * Callers:
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00054F0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001F2D4 (Register_FindFirstExtendedCapability.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0038500 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  __int16 v4; // ax
  __int64 v5; // rbx
  unsigned __int16 v6; // r9
  int v7; // edx
  unsigned int Ulong; // eax
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int8 v12; // bl
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // edi
  unsigned int v25; // esi
  int v26; // ebx
  unsigned __int16 v27; // r9
  unsigned int *v28; // rdx
  unsigned int v29; // ebx
  unsigned int v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ebx
  unsigned __int16 v33; // r9
  unsigned int v34; // ebx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 FirstExtendedCapability; // rax
  unsigned int *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v45; // [rsp+28h] [rbp-70h]
  __int64 v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+28h] [rbp-70h]
  __int64 v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+28h] [rbp-70h]
  __int64 v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  __int64 v57; // [rsp+30h] [rbp-68h]
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+30h] [rbp-68h]
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+30h] [rbp-68h]
  __int64 v62; // [rsp+30h] [rbp-68h]
  __int64 v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+38h] [rbp-60h]
  __int64 v67; // [rsp+40h] [rbp-58h]
  __int128 v68; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 264) == -1LL )
  {
    v4 = *(_WORD *)(v2 + 184);
    if ( v4 == 7023 )
    {
      Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      v5 = Ulong;
      v6 = 21;
      v7 = HIWORD(Ulong);
      Ulong = (unsigned __int16)Ulong;
LABEL_7:
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        v6,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        Ulong,
        v7);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) = v5;
      Etw_ControllerFirmareVersionUpdate(v10, *(_QWORD *)(a1 + 8));
      goto LABEL_8;
    }
    if ( v4 == 4172 || !_stricmp((const char *)(v2 + 240), "QCOM") )
    {
      v9 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      v5 = v9;
      v7 = v9 & 0xFFF;
      Ulong = v9 >> 12;
      v6 = 22;
      goto LABEL_7;
    }
  }
LABEL_8:
  v11 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v12 = v11;
  v13 = (unsigned __int8)v11;
  v14 = HIWORD(v11);
  LODWORD(v54) = BYTE2(v11);
  v15 = HIBYTE(v11);
  LODWORD(v45) = HIBYTE(v11);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x17u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v45,
    v54,
    (unsigned __int8)v11);
  v16 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v16 + 256) = v15;
  *(_BYTE *)(v16 + 257) = v14;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_BYTE *)(v17 + 256);
  if ( v18 )
  {
    if ( *(_BYTE *)(v17 + 257) >= 0x10u || v18 > 1u )
      *(_BYTE *)(v17 + 255) = 1;
  }
  else
  {
    v68 = 0x1000uLL;
    WPP_RECORDER_SF_(*(_QWORD *)(v17 + 72), 4u, 6u, 0x18u, (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = 2LL;
    v21 = (_QWORD *)(v19 + 272);
    do
    {
      *v21 |= *(_QWORD *)((char *)&v68 + (_QWORD)v21 - v19 - 272);
      ++v21;
      --v20;
    }
    while ( v20 );
  }
  v22 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v22 + v12;
  v23 = XilRegister_ReadUlong(a1, (unsigned int *)(v22 + 4));
  v24 = (unsigned __int8)v23;
  v25 = HIBYTE(v23);
  v26 = (v23 >> 8) & 0x7FF;
  LODWORD(v64) = HIBYTE(v23);
  LODWORD(v55) = v26;
  LODWORD(v46) = (unsigned __int8)v23;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x19u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v46,
    v55,
    v64);
  if ( !v24 )
  {
    v27 = 26;
    LODWORD(v47) = 0;
LABEL_44:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v27,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
      v47);
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(a1 + 80) = v24;
  if ( (unsigned int)(v26 - 1) > 0x3FF )
  {
    v27 = 27;
    LODWORD(v47) = v26;
    goto LABEL_44;
  }
  *(_DWORD *)(a1 + 84) = v26;
  if ( !v25 )
  {
    v27 = 28;
    LODWORD(v47) = 0;
    goto LABEL_44;
  }
  v28 = (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(a1 + 88) = v25;
  v29 = XilRegister_ReadUlong(a1, v28);
  *(_DWORD *)(a1 + 92) = 1 << ((v29 >> 4) & 0xF);
  LODWORD(v56) = 1 << ((v29 >> 4) & 0xF);
  LODWORD(v47) = v29 & 0xF;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Du,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v47,
    v56);
  *(_DWORD *)(a1 + 96) = ((v29 >> 11) | v29 & 0x3E00000) >> 16;
  LODWORD(v57) = ((v29 >> 11) | v29 & 0x3E00000) >> 16;
  LODWORD(v48) = (v29 >> 26) & 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Eu,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v48,
    v57);
  v30 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  v31 = HIWORD(v30);
  *(_DWORD *)(a1 + 100) = __PAIR32__(HIWORD(v30), (unsigned __int8)v30);
  v32 = (unsigned __int8)v30;
  LODWORD(v58) = HIWORD(v30);
  LODWORD(v49) = (unsigned __int8)v30;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Fu,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v49,
    v58);
  if ( v32 > 0xA )
  {
    v33 = 32;
LABEL_22:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v33,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( v31 > 0x7FF )
  {
    v33 = 33;
    goto LABEL_22;
  }
  v34 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  LODWORD(v65) = (v34 >> 2) & 1;
  LODWORD(v59) = (v34 >> 1) & 1;
  LODWORD(v50) = v34 & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x22u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v50,
    v59,
    v65,
    (v34 >> 3) & 1);
  *(_DWORD *)(a1 + 104) = v34;
  LODWORD(v67) = (v34 >> 7) & 1;
  LODWORD(v66) = (v34 >> 6) & 1;
  LODWORD(v60) = (v34 >> 5) & 1;
  LODWORD(v51) = (v34 >> 4) & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x23u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v51,
    v60,
    v66,
    v67);
  LODWORD(v61) = HIWORD(v34);
  LODWORD(v52) = (unsigned __int16)v34 >> 12;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x24u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v52,
    v61);
  *(_DWORD *)(a1 + 108) = 0;
  if ( v13 >= 0x20 )
    *(_DWORD *)(a1 + 108) = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
  if ( (unsigned __int16)((unsigned __int16)v34 >> 12) > 7u )
  {
    LODWORD(v53) = (unsigned __int16)v34 >> 12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x25u,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
      v53);
    v34 = v34 & 0xFFFF0FFF | 0x7000;
  }
  if ( !((unsigned __int16)v34 >> 12) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x40000LL) != 0 )
    *(_DWORD *)(a1 + 112) = 0;
  else
    *(_DWORD *)(a1 + 112) = (2 << ((unsigned __int16)v34 >> 12)) - 1;
  LODWORD(v53) = *(_DWORD *)(a1 + 112);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x26u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v53);
  if ( !HIWORD(v34) || (v35 = 4 * ((unsigned __int64)v34 >> 16), v35 >= *(unsigned int *)(a1 + 20)) )
  {
    v27 = 39;
    LODWORD(v47) = HIWORD(v34);
    goto LABEL_44;
  }
  v36 = v35 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v36;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x28u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v36);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v38 = (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  v39 = XilRegister_ReadUlong(a1, v38);
  if ( !v39 )
  {
    v27 = 41;
LABEL_37:
    LODWORD(v47) = 0;
    goto LABEL_44;
  }
  v40 = *(_QWORD *)(a1 + 24) + v39;
  *(_QWORD *)(a1 + 48) = v40;
  LODWORD(v62) = v39;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    v40,
    6u,
    0x2Au,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v40,
    v62);
  v41 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( !v41 )
  {
    v27 = 43;
    goto LABEL_37;
  }
  v42 = *(_QWORD *)(a1 + 24) + v41;
  *(_QWORD *)(a1 + 40) = v42;
  LODWORD(v63) = v41;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    v42,
    6u,
    0x2Cu,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
    v42,
    v63);
  v43 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v43 != 1 )
  {
    v27 = 45;
    LODWORD(v47) = v43;
    goto LABEL_44;
  }
  return v3;
}
