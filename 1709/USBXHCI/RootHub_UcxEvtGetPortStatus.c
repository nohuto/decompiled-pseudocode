/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C0004AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0021A70 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int8 v9; // cl
  __int16 v10; // ax
  int v11; // ecx
  unsigned int v12; // ebp
  int v13; // edx
  __int64 v14; // r15
  unsigned int v15; // ebx
  unsigned __int64 v16; // rsi
  char v17; // cl
  __int64 v18; // rsi
  unsigned int v19; // r12d
  __int16 v20; // ax
  unsigned int v21; // r15d
  __int16 v22; // cx
  int v23; // edx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // eax
  __int16 v28; // cx
  __int16 v29; // cx
  __int16 v30; // ax
  __int16 v31; // ax
  __int64 v33; // rbp
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // cx
  int v39; // edx
  __int16 v40; // cx
  __int16 v41; // cx
  __int16 v42; // cx
  __int16 v43; // cx
  __int16 v44; // cx
  __int16 v45; // cx
  unsigned int *v46; // rdx
  unsigned int v47; // eax
  int v48; // edx
  unsigned __int16 v49; // r9
  __int64 v50; // rdx
  __int16 v51; // cx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // edx
  __int16 v55; // ax
  int v56; // r9d
  int v57; // edx
  int v58; // r8d
  __int64 v59; // rcx
  int v60; // edx
  char v61[8]; // [rsp+28h] [rbp-D0h]
  char v62[8]; // [rsp+28h] [rbp-D0h]
  char v63; // [rsp+28h] [rbp-D0h]
  char v64[8]; // [rsp+28h] [rbp-D0h]
  char v65; // [rsp+28h] [rbp-D0h]
  __int64 v66; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-80h] BYREF
  int v68[2]; // [rsp+80h] [rbp-78h]
  __int64 v69; // [rsp+88h] [rbp-70h] BYREF
  __int64 v70; // [rsp+90h] [rbp-68h]
  __int64 v71; // [rsp+98h] [rbp-60h]
  __int64 v72; // [rsp+A0h] [rbp-58h]
  __int64 v73; // [rsp+A8h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_BYTE *)(v4 + 441) == 0;
  v6 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)v68 = v6;
  if ( !v5 && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      1801LL);
  v69 = 40LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v69);
  v7 = *(_QWORD *)(v3 + 8);
  v8 = v70;
  v9 = *(_BYTE *)(*(_QWORD *)(v7 + 88) + 16LL);
  if ( !v9 || *(_BYTE *)(v7 + 333) )
  {
    v60 = v9;
    LOBYTE(v60) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v7 + 72),
      v60,
      4,
      221,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v9,
      *(_BYTE *)(v7 + 333));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x69u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    goto LABEL_71;
  }
  v10 = *(_WORD *)(v70 + 130);
  v11 = 8;
  v12 = *(unsigned __int16 *)(v70 + 132);
  if ( v10 != 2 )
    v11 = 4;
  if ( *(_BYTE *)(v70 + 128) != 0xA3
    || *(_BYTE *)(v70 + 129)
    || (v13 = 65533, (v10 & 0xFFFD) != 0)
    || !*(_WORD *)(v70 + 132)
    || v12 > *(_DWORD *)(v3 + 16)
    || *(unsigned __int16 *)(v70 + 134) != v11 )
  {
    v57 = *(unsigned __int8 *)(v70 + 133);
    v58 = *(unsigned __int8 *)(v70 + 132);
    v59 = *(_QWORD *)(v7 + 72);
    v56 = 106;
    goto LABEL_69;
  }
  v14 = 16LL * (v12 - 1);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v6, v14 + *(_DWORD *)(v3 + 40), 2, 1, &v66);
    v15 = v66;
  }
  else
  {
    v15 = *(_DWORD *)(v14 + *(_QWORD *)(v3 + 40));
  }
  v16 = (unsigned __int64)(v12 - 1) << 6;
  v17 = *(_BYTE *)(v16 + *(_QWORD *)(v3 + 48) + 1);
  if ( v17 != 2 )
  {
    if ( v17 == 3 )
    {
      if ( v15 != -1 )
      {
        v19 = 0;
        v66 = *(_QWORD *)(v8 + 40);
        *(_DWORD *)v66 = 0;
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v13,
          11,
          112,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v12,
          v15);
        if ( (_BYTE)KdDebuggerEnabled
          && *(_BYTE *)(v3 + 56)
          && (v52 = *(_QWORD *)(v3 + 8), (*(_QWORD *)(v52 + 272) & 0x8000000000000LL) != 0)
          && (unsigned int)XilRegister_ReadUlong(
                             *(_QWORD *)(v52 + 88),
                             *(_QWORD *)(*(_QWORD *)(v52 + 88) + 72LL) + 36LL) >> 24 == v12 )
        {
          *(_DWORD *)v62 = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x71u,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            *(_QWORD *)v62);
          v53 = v66;
          v54 = *(_WORD *)v66 & 0xFC04 | 0x2A0;
          v55 = *(_WORD *)(v66 + 2) & 0xFFFE;
          *(_WORD *)v66 = v54;
          v55 &= 0xFF07u;
          *(_WORD *)(v53 + 2) = v55;
          v65 = v54;
          LOBYTE(v54) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v54,
            11,
            114,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v65,
            v55);
        }
        else
        {
          v33 = v66;
          v34 = *(_WORD *)v66 ^ (*(_WORD *)v66 ^ v15) & 1;
          v35 = ((unsigned __int8)v34 ^ (unsigned __int8)(2 * (v15 >> 1))) & 2 ^ v34;
          v36 = ((unsigned __int8)v35 ^ v15 & 0xF8) & 8 ^ v35;
          v37 = ((unsigned __int8)v36 ^ v15 & 0xF0) & 0x10 ^ v36;
          v38 = (v37 ^ v15 & 0xFFE0) & 0x1E0 ^ v37;
          *(_WORD *)v66 = v38;
          if ( (v38 & 0x1E0) == 0x1E0 )
            *(_WORD *)v33 = v38 & 0xFE1F | 0x100;
          if ( (v15 & 0x1000000) != 0 )
            *(_WORD *)v33 = *(_WORD *)v33 & 0xFE1F | 0x140;
          v39 = *(_WORD *)v33 ^ (*(_WORD *)v33 ^ v15 & 0xFE00) & 0x200;
          v40 = *(_WORD *)(v33 + 2) ^ (*(_WORD *)(v33 + 2) ^ (v15 >> 17)) & 1;
          *(_WORD *)v33 = v39;
          v41 = ((unsigned __int8)v40 ^ (unsigned __int8)(8 * (v15 >> 20))) & 8 ^ v40;
          v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(16 * (v15 >> 21))) & 0x10 ^ v41;
          v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(32 * (v15 >> 19))) & 0x20 ^ v42;
          v44 = ((unsigned __int8)v43 ^ (unsigned __int8)((unsigned __int8)(v15 >> 22) << 6)) & 0x40 ^ v43;
          v45 = (v44 ^ (v15 >> 23 << 7)) & 0x80 ^ v44;
          *(_WORD *)(v33 + 2) = v45;
          v63 = v39;
          LOBYTE(v39) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v39,
            11,
            115,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v63,
            v45);
          if ( *(_WORD *)(v8 + 130) == 2 )
          {
            v46 = (unsigned int *)(*(_QWORD *)(v3 + 40) + v14 + 8);
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v68 + 8LL) + 441LL) )
            {
              Register_ReadSecureMmio(v68[0], (int)v46, 2, 1, &v67);
              v47 = v67;
            }
            else
            {
              v47 = *v46;
            }
            *(_DWORD *)(v33 + 4) = 0;
            if ( *(_WORD *)(v16 + *(_QWORD *)(v3 + 48) + 54) || (v15 & 0x3C00) != 0x400 )
              *(_DWORD *)(v33 + 4) = (v15 & 0x3C00 | (v15 >> 4) & 0x3C0) >> 6;
            else
              *(_DWORD *)(v33 + 4) = 68;
            v48 = ((unsigned __int16)(v47 >> 8) ^ *(_WORD *)(v33 + 4) ^ ((unsigned __int16)(v47 >> 8) ^ (unsigned __int16)*(_DWORD *)(v33 + 4)) & 0xF00) & 0xF000 ^ *(_DWORD *)(v33 + 4) ^ ((unsigned __int16)(v47 >> 8) ^ (unsigned __int16)*(_DWORD *)(v33 + 4)) & 0xF00;
            *(_DWORD *)(v33 + 4) = v48;
            *(_DWORD *)v64 = v48;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x74u,
              (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
              *(_QWORD *)v64);
          }
        }
        goto LABEL_26;
      }
      v49 = 111;
      goto LABEL_46;
    }
    goto LABEL_67;
  }
  if ( *(_WORD *)(v8 + 130) )
  {
LABEL_67:
    v56 = 117;
    v57 = *(unsigned __int8 *)(v8 + 134);
    v58 = *(unsigned __int8 *)(v8 + 133);
    v59 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
LABEL_69:
    WPP_RECORDER_SF_DDDDDDDD(v59, v57, v58, v56);
    *(_DWORD *)(v8 + 4) = -1073741820;
    v19 = -1073741823;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v19);
  }
  if ( v15 == -1 )
  {
    v49 = 107;
LABEL_46:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      v49,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    LOBYTE(v50) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v50);
LABEL_71:
    *(_DWORD *)(v8 + 4) = -1073713152;
    v19 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v19);
  }
  v18 = *(_QWORD *)(v8 + 40);
  v19 = 0;
  *(_DWORD *)v18 = 0;
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v13,
    11,
    108,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v12,
    v15);
  v20 = *(_WORD *)v18 ^ (*(_WORD *)v18 ^ v15) & 1;
  v21 = (v15 >> 5) & 0xF;
  v22 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(2 * (v15 >> 1))) & 2;
  *(_WORD *)v18 = v22;
  if ( v21 < 4 || v21 >= 0xB )
  {
    if ( v21 == 2 )
    {
      v51 = v22 | 0x20;
    }
    else
    {
      if ( v21 != 3 )
      {
        if ( v21 == 11 )
        {
          *(_WORD *)v18 = v22 | 0x800;
          *(_DWORD *)v61 = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            2u,
            0xBu,
            0x6Du,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            *(_QWORD *)v61);
          goto LABEL_19;
        }
        if ( v21 != 15 )
          goto LABEL_19;
      }
      v51 = v22 | 4;
    }
    *(_WORD *)v18 = v51;
  }
LABEL_19:
  v23 = 256;
  v24 = *(_WORD *)v18 ^ (*(_WORD *)v18 ^ (8 * (v15 >> 3))) & 8;
  v25 = ((unsigned __int8)v24 ^ v15 & 0xF0) & 0x10 ^ v24;
  v26 = (v25 ^ ((unsigned __int16)(v15 >> 9) << 8)) & 0x100 ^ v25;
  v27 = (v15 >> 10) & 0xF;
  *(_WORD *)v18 = v26;
  if ( v27 == 2 )
  {
    v23 = 512;
  }
  else
  {
    if ( v27 != 3 )
      goto LABEL_21;
    v23 = 1024;
  }
  *(_WORD *)v18 = v23 | v26;
LABEL_21:
  if ( (v15 & 0xC000) != 0 )
    *(_WORD *)v18 |= 0x1000u;
  v28 = *(_WORD *)(v18 + 2) ^ (*(_WORD *)(v18 + 2) ^ (v15 >> 17)) & 1;
  v29 = ((unsigned __int8)v28 ^ (unsigned __int8)(2 * (v15 >> 18))) & 2 ^ v28;
  *(_WORD *)(v18 + 2) = v29;
  if ( v21 == 15 )
    *(_WORD *)(v18 + 2) = v29 & 0xFFFB;
  else
    *(_WORD *)(v18 + 2) = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(4 * (v15 >> 22))) & 4;
  v30 = *(_WORD *)(v18 + 2) ^ (*(_WORD *)(v18 + 2) ^ (8 * (v15 >> 20))) & 8;
  v31 = ((unsigned __int8)v30 ^ (unsigned __int8)(16 * (v15 >> 21))) & 0x10 ^ v30;
  *(_WORD *)(v18 + 2) = v31;
  LOBYTE(v23) = 4;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v23,
    11,
    110,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    *(_WORD *)v18,
    v31);
  if ( v21 == 15 )
  {
    *(_DWORD *)(v8 + 4) = 1;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v19);
  }
LABEL_26:
  *(_DWORD *)(v8 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v19);
}
