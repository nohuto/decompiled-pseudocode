/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C0003260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0002C30 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C001FBCC (RootHub_ForceU0AndWait.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0021A70 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r14
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // esi
  unsigned __int8 v12; // cl
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // edi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  char v18; // cl
  int v19; // r9d
  int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  int v24; // ebx
  int v25; // edi
  int v26; // esi
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  int v31; // ebx
  int v32; // edx
  unsigned int v33; // edi
  int v34; // edx
  char v35; // al
  int v36; // edx
  int v37; // ebx
  int v38; // edx
  unsigned int v39; // ebx
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // r9d
  unsigned __int64 v44; // rdi
  __int64 v45; // rbx
  int v46; // edx
  int v47; // ebx
  int v48; // ebx
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  unsigned int v53; // ebx
  int v54; // edx
  int v55; // edx
  unsigned int v56; // ebx
  int v57; // edx
  int v58; // edx
  int v59; // ebx
  int v60; // edx
  unsigned int v61; // ebx
  int v62; // edx
  __int64 v63; // rax
  unsigned __int64 v64; // rdi
  int v65; // ebx
  int v66; // edx
  int v67; // edx
  unsigned int v68; // ebx
  int v69; // eax
  int Ulong; // ebx
  int v71; // edx
  unsigned int v72; // ebx
  int v73; // edx
  int v74; // ebx
  int v75; // edx
  unsigned int v76; // ebx
  int v77; // edx
  int v78; // ebx
  int v79; // edx
  unsigned int v80; // ebx
  int v81; // edx
  int v82; // ebx
  int v83; // edx
  unsigned int v84; // ebx
  int v85; // edx
  char v86; // al
  int v87; // edx
  int v88; // ebx
  int v89; // edx
  unsigned int v90; // ebx
  int v91; // edx
  char v92; // al
  int v93; // edx
  int v94; // ebx
  int v95; // edx
  int v96; // edx
  int v97; // ebx
  int v98; // eax
  __int64 v99; // rcx
  char v100; // al
  int v101; // edx
  __int64 v102; // rbx
  int v103; // edx
  int v104; // esi
  int v105; // edx
  __int64 v106; // rax
  int *v107; // rbx
  int *v108; // rax
  __int64 v109; // rdi
  unsigned int v110; // ebx
  int v111; // edx
  int v112; // edx
  int v113; // r10d
  int v114; // r10d
  int v115; // r11d
  char v116; // al
  __int64 v117; // rcx
  signed __int32 v119[8]; // [rsp+0h] [rbp-C9h] BYREF
  void *v120; // [rsp+20h] [rbp-A9h]
  int v121; // [rsp+28h] [rbp-A1h]
  int v122; // [rsp+30h] [rbp-99h]
  int v123; // [rsp+38h] [rbp-91h]
  unsigned int v124; // [rsp+40h] [rbp-89h]
  unsigned int v125; // [rsp+48h] [rbp-81h]
  unsigned int v126; // [rsp+50h] [rbp-79h]
  int v127; // [rsp+58h] [rbp-71h]
  int v128; // [rsp+60h] [rbp-69h]
  unsigned __int64 v129; // [rsp+70h] [rbp-59h]
  unsigned int v130; // [rsp+78h] [rbp-51h]
  unsigned int v131; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v132[2]; // [rsp+80h] [rbp-49h]
  __int64 v133; // [rsp+88h] [rbp-41h]
  int v134; // [rsp+90h] [rbp-39h] BYREF
  int v135; // [rsp+94h] [rbp-35h] BYREF
  int v136; // [rsp+98h] [rbp-31h] BYREF
  int v137; // [rsp+A0h] [rbp-29h] BYREF
  int v138; // [rsp+A8h] [rbp-21h] BYREF
  int v139; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v140; // [rsp+B8h] [rbp-11h]
  __int64 v141; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-1h]
  __int64 v143; // [rsp+D0h] [rbp+7h]
  __int64 v144; // [rsp+D8h] [rbp+Fh]
  __int64 v145; // [rsp+E0h] [rbp+17h]

  v140 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      2255LL);
  v141 = 40LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v141);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = v142;
  LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(v6 + 88) + 16LL);
  if ( !(_BYTE)v8 || *(_BYTE *)(v6 + 333) )
  {
    v116 = *(_BYTE *)(v6 + 333);
    v117 = *(_QWORD *)(v6 + 72);
    v8 = (unsigned __int8)v8;
    LOBYTE(v121) = v8;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_DD(v117, v8, 4, 221, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v121, v116);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x76u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    goto LABEL_125;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v5, *(_DWORD *)(v3 + 32) + 4, 2, 1, &v134);
    v9 = v134;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL);
  }
  if ( v9 == -1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x77u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    LOBYTE(v10) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v10);
LABEL_125:
    v11 = -1073741810;
    *(_DWORD *)(v7 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v140,
             (unsigned int)v11);
  }
  if ( (v9 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x78u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    *(_DWORD *)(v7 + 4) = -1073741807;
    v11 = -1073741630;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v140,
             (unsigned int)v11);
  }
  v12 = *(_BYTE *)(v7 + 128);
  v13 = *(unsigned __int8 *)(v7 + 132);
  v14 = *(unsigned __int16 *)(v7 + 130);
  v15 = *(unsigned __int8 *)(v7 + 133);
  v130 = v13;
  if ( v12 != 35 || *(_BYTE *)(v7 + 129) != 3 || !v13 || v13 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v7 + 134) )
  {
    v19 = 121;
    v20 = *(unsigned __int8 *)(v7 + 134);
    v21 = *(unsigned __int8 *)(v7 + 131);
    v114 = *(unsigned __int8 *)(v7 + 130);
    v115 = *(unsigned __int8 *)(v7 + 129);
    v128 = *(unsigned __int8 *)(v7 + 135);
    v127 = v20;
    v126 = v15;
    v125 = v13;
    v124 = v21;
    v123 = v114;
    v122 = v115;
    v121 = v12;
    goto LABEL_23;
  }
  v16 = 16LL * (v13 - 1) + *(_QWORD *)(v3 + 40);
  v17 = (unsigned __int64)(v13 - 1) << 6;
  *(_QWORD *)v132 = v16;
  v129 = v17;
  v133 = v16 + 4;
  v18 = *(_BYTE *)(v17 + *(_QWORD *)(v3 + 48) + 1);
  if ( v18 != 2 )
  {
    if ( v18 != 3 )
    {
      v19 = 177;
      v20 = *(unsigned __int8 *)(v7 + 134);
      v21 = *(unsigned __int8 *)(v7 + 131);
      v113 = *(unsigned __int8 *)(v7 + 130);
      v128 = *(unsigned __int8 *)(v7 + 135);
      v127 = v20;
      v126 = v15;
      v125 = v13;
      v124 = v21;
      v123 = v113;
      v122 = 3;
      v121 = 35;
      goto LABEL_23;
    }
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v17,
      11,
      147,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v13,
      v14,
      v15);
    if ( v14 > 0x1B || (v69 = 159383584, !_bittest(&v69, v14)) )
    {
      if ( v15 )
      {
        v19 = 148;
        goto LABEL_22;
      }
    }
    switch ( v14 )
    {
      case 4u:
        DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        Ulong = XilRegister_ReadUlong(v5, v16);
        LOBYTE(v71) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v71,
          11,
          149,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          Ulong);
        v72 = Ulong & 0xE00C200 | 0x10;
        LOBYTE(v73) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v73,
          11,
          150,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v72);
        XilRegister_WriteUlong(v5, v16, v72);
        DynamicLock_Release(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        LOBYTE(v41) = XilRegister_ReadUlong(v5, v16);
        v43 = 151;
        goto LABEL_119;
      case 5u:
        if ( v15 > 5 )
        {
          v19 = 165;
          goto LABEL_22;
        }
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x80000LL) == 0 )
          goto LABEL_85;
        if ( !v15 )
          goto LABEL_86;
        v11 = RootHub_ForceU0AndWait(v3, v130);
        if ( v11 < 0 )
          goto LABEL_95;
LABEL_85:
        if ( v15 )
          goto LABEL_87;
LABEL_86:
        v11 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v130, 0);
        if ( v11 < 0 )
          goto LABEL_95;
LABEL_87:
        DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        if ( v15 == 3 )
          *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 6) = 0;
        v94 = XilRegister_ReadUlong(v5, *(_QWORD *)v132);
        LOBYTE(v95) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v95,
          11,
          166,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v94);
        v97 = v94 & 0xE00C200;
        if ( v15 == 4 )
          v98 = 2;
        else
          v98 = 32 * (v15 & 0xF | 0x800);
        v99 = *(_QWORD *)(v3 + 8);
        v131 = v97 | v98;
        LOBYTE(v96) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v99 + 72),
          v96,
          11,
          167,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v97 | v98);
        XilRegister_WriteUlong(v5, *(_QWORD *)v132, v131);
        DynamicLock_Release(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        v100 = XilRegister_ReadUlong(v5, *(_QWORD *)v132);
        LOBYTE(v101) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v101,
          11,
          168,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v100);
        if ( v15 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x4000000LL) != 0 )
        {
          v11 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v130, 1);
          if ( v11 < 0 )
            goto LABEL_95;
        }
        goto LABEL_120;
      case 8u:
        DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        v78 = XilRegister_ReadUlong(v5, v16);
        LOBYTE(v79) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v79,
          11,
          155,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v78);
        v80 = v78 & 0xE00C000 | 0x200;
        LOBYTE(v81) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v81,
          11,
          156,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v80);
        XilRegister_WriteUlong(v5, v16, v80);
        DynamicLock_Release(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        LOBYTE(v41) = XilRegister_ReadUlong(v5, v16);
        v43 = 157;
        goto LABEL_119;
      case 0x17u:
        v82 = XilRegister_ReadUlong(v5, v133);
        LOBYTE(v83) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v83,
          11,
          159,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v82);
        v84 = (unsigned __int8)(v15 ^ v82) ^ v82;
        LOBYTE(v85) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v85,
          11,
          160,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v84);
        XilRegister_WriteUlong(v5, v133, v84);
        v86 = XilRegister_ReadUlong(v5, v133);
        LOBYTE(v87) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v87,
          11,
          161,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v86);
        v11 = 0;
        *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 9) = v15;
        *(_DWORD *)(v7 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v140,
                 (unsigned int)v11);
      case 0x18u:
        v88 = XilRegister_ReadUlong(v5, v133);
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          162,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v88);
        v90 = ((unsigned __int16)v88 ^ (unsigned __int16)((_WORD)v15 << 8)) & 0xFF00 ^ v88;
        LOBYTE(v91) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v91,
          11,
          163,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v90);
        XilRegister_WriteUlong(v5, v133, v90);
        v92 = XilRegister_ReadUlong(v5, v133);
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          164,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v92);
        v11 = 0;
        *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 10) = v15;
        *(_DWORD *)(v7 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v140,
                 (unsigned int)v11);
      case 0x1Bu:
        if ( (unsigned __int8)v15 >= 8u )
        {
          v19 = 169;
          goto LABEL_22;
        }
        _mm_lfence();
        v102 = *(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16);
        if ( *(_DWORD *)v102 == 1 )
        {
          if ( KeGetCurrentIrql() )
            Debug_FreAssertMsg(
              "Code Path Requires Passive Level",
              0LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              88LL);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            *(_QWORD *)(v102 + 8),
            0LL);
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
            WdfDriverGlobals,
            *(_QWORD *)(v102 + 8));
        }
        if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(v5, v16, 2, 1, &v137);
          LOWORD(v16) = v137;
        }
        else
        {
          LODWORD(v16) = *(_DWORD *)v16;
        }
        LOBYTE(v103) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v103,
          11,
          170,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v16);
        v104 = v16 & 0xC200;
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          171,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v104);
        v106 = *(_QWORD *)(v5 + 8);
        v138 = v104 | ((v15 & 7) << 25);
        if ( *(_BYTE *)(v106 + 441) )
        {
          v107 = *(int **)v132;
          Register_WriteSecureMmio(v5, *(_QWORD *)v132, 2LL, &v138);
        }
        else
        {
          v108 = *(int **)v132;
          **(_DWORD **)v132 = v104 | ((v15 & 7) << 25);
          _InterlockedOr(v119, 0);
          v107 = v108;
        }
        v109 = *(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16);
        if ( *(_DWORD *)v109 == 1 )
        {
          if ( KeGetCurrentIrql() )
            Debug_FreAssertMsg(
              "Code Path Requires Passive Level",
              0LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              107LL);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            *(_QWORD *)(v109 + 8));
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
            WdfDriverGlobals,
            *(_QWORD *)(v109 + 8));
        }
        if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(v5, (int)v107, 2, 1, &v139);
          LOBYTE(v41) = v139;
        }
        else
        {
          v41 = *v107;
        }
        v43 = 172;
        break;
      case 0x1Cu:
        DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        v74 = XilRegister_ReadUlong(v5, v16);
        LOBYTE(v75) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v75,
          11,
          152,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v74);
        v76 = v74 & 0xE00C200 | 0x80000000;
        LOBYTE(v77) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v77,
          11,
          153,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v76);
        XilRegister_WriteUlong(v5, v16, v76);
        DynamicLock_Release(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
        LOBYTE(v41) = XilRegister_ReadUlong(v5, v16);
        v43 = 154;
        goto LABEL_119;
      case 0x1Eu:
        v110 = XilRegister_ReadUlong(v5, v133);
        LOBYTE(v111) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v111,
          11,
          173,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v110);
        v110 |= 0x10000u;
        LOBYTE(v112) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v112,
          11,
          174,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v110);
        XilRegister_WriteUlong(v5, v133, v110);
        LOBYTE(v41) = XilRegister_ReadUlong(v5, v133);
        v43 = 175;
        goto LABEL_119;
      default:
        v19 = 176;
        goto LABEL_22;
    }
    goto LABEL_119;
  }
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v17,
    11,
    122,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v13,
    v14,
    v15);
  if ( v14 - 21 > 1 && v15 )
  {
    v19 = 123;
LABEL_22:
    v20 = *(unsigned __int8 *)(v7 + 134);
    v21 = *(unsigned __int8 *)(v7 + 133);
    v22 = *(unsigned __int8 *)(v7 + 132);
    v23 = *(unsigned __int8 *)(v7 + 131);
    v24 = *(unsigned __int8 *)(v7 + 130);
    v25 = *(unsigned __int8 *)(v7 + 129);
    v26 = *(unsigned __int8 *)(v7 + 128);
    v128 = *(unsigned __int8 *)(v7 + 135);
    v127 = v20;
    v126 = v21;
    v125 = v22;
    v124 = v23;
    v123 = v24;
    v122 = v25;
    v121 = v26;
LABEL_23:
    WPP_RECORDER_SF_DDDDDDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v20,
      v21,
      v19,
      (_DWORD)v120,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    *(_DWORD *)(v7 + 4) = -1073741820;
    v11 = -1073741823;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v140,
             (unsigned int)v11);
  }
  v27 = v14 - 2;
  if ( !v27 )
  {
    v63 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL);
    if ( (v63 & 0x8000000) != 0 || (v63 & 0x80000) != 0 )
    {
      v11 = RootHub_ForceU0AndWait(v3, v130);
      if ( v11 < 0 )
      {
LABEL_95:
        *(_DWORD *)(v7 + 4) = -1073741820;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 v140,
                 (unsigned int)v11);
      }
      v16 = *(_QWORD *)v132;
    }
    v64 = v129;
    DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
    *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 6) = 0;
    v65 = XilRegister_ReadUlong(v5, v16);
    LOBYTE(v66) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v66,
      11,
      131,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v65);
    if ( (v65 & 2) == 0 || (v65 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        3u,
        0xBu,
        0x84u,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    v68 = v65 & 0xE00C200 | 0x10060;
    LOBYTE(v67) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v67,
      11,
      133,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v68);
    XilRegister_WriteUlong(v5, v16, v68);
    DynamicLock_Release(*(_QWORD *)(v64 + *(_QWORD *)(v3 + 48) + 16));
    LOBYTE(v41) = XilRegister_ReadUlong(v5, v16);
    v43 = 134;
    goto LABEL_119;
  }
  v28 = v27 - 2;
  if ( !v28 )
  {
    v52 = v129;
    DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
    if ( *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 8) )
    {
      v53 = XilRegister_ReadUlong(v5, v16 + 4);
      LOBYTE(v54) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v54,
        11,
        124,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v53);
      v53 &= 0xFFFE0007;
      LOBYTE(v55) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v55,
        11,
        125,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v53);
      XilRegister_WriteUlong(v5, v16 + 4, v53);
      v56 = XilRegister_ReadUlong(v5, v16 + 12);
      LOBYTE(v57) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v57,
        11,
        126,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v56);
      v56 &= 0xFFFFC000;
      LOBYTE(v58) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v58,
        11,
        127,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v56);
      XilRegister_WriteUlong(v5, v16 + 12, v56);
      *(_BYTE *)(v129 + *(_QWORD *)(v3 + 48) + 8) = 0;
    }
    v59 = XilRegister_ReadUlong(v5, v16);
    LOBYTE(v60) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v60,
      11,
      128,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v59);
    v61 = v59 & 0xE00C200 | 0x10;
    LOBYTE(v62) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v62,
      11,
      129,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v61);
    XilRegister_WriteUlong(v5, v16, v61);
    DynamicLock_Release(*(_QWORD *)(v52 + *(_QWORD *)(v3 + 48) + 16));
    LOBYTE(v41) = XilRegister_ReadUlong(v5, v16);
    v43 = 130;
LABEL_119:
    LOBYTE(v42) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v42,
      11,
      v43,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v41);
LABEL_120:
    v11 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v140,
             (unsigned int)v11);
  }
  v29 = v28 - 4;
  if ( !v29 )
  {
    _mm_lfence();
    v44 = v129;
    v45 = *(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16);
    if ( *(_DWORD *)v45 == 1 )
    {
      if ( KeGetCurrentIrql() )
        Debug_FreAssertMsg(
          "Code Path Requires Passive Level",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
          88LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(v45 + 8),
        0LL);
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        *(_QWORD *)(v45 + 8));
    }
    if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(v5, v16, 2, 1, &v135);
      v47 = v135;
    }
    else
    {
      v47 = *(_DWORD *)v16;
    }
    LOBYTE(v46) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v46,
      11,
      135,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v47);
    v48 = v47 & 0xE00C000 | 0x200;
    LOBYTE(v49) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v49,
      11,
      136,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v48);
    v50 = *(_QWORD *)(v5 + 8);
    v136 = v48;
    if ( *(_BYTE *)(v50 + 441) )
    {
      Register_WriteSecureMmio(v5, v16, 2LL, &v136);
    }
    else
    {
      *(_DWORD *)v16 = v48;
      _InterlockedOr(v119, 0);
    }
    v51 = *(_QWORD *)(v44 + *(_QWORD *)(v3 + 48) + 16);
    if ( *(_DWORD *)v51 == 1 )
    {
      if ( KeGetCurrentIrql() )
        Debug_FreAssertMsg(
          "Code Path Requires Passive Level",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
          107LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(v51 + 8));
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        *(_QWORD *)(v51 + 8));
    }
    if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(v5, v16, 2, 1, &v131);
      LOBYTE(v41) = v131;
    }
    else
    {
      v41 = *(_DWORD *)v16;
    }
    v43 = 137;
    goto LABEL_119;
  }
  v30 = v29 - 13;
  if ( !v30 )
  {
    if ( v15 > 5 )
    {
      v19 = 138;
      goto LABEL_22;
    }
    v37 = XilRegister_ReadUlong(v5, v133);
    LOBYTE(v38) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v38,
      11,
      139,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v37);
    v39 = (v15 << 28) | v37 & 0xFFFFFFF;
    LOBYTE(v40) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v40,
      11,
      140,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v39);
    XilRegister_WriteUlong(v5, v133, v39);
    LOBYTE(v41) = XilRegister_ReadUlong(v5, v133);
    v43 = 141;
    goto LABEL_119;
  }
  if ( v30 != 1 )
  {
    v19 = 146;
    goto LABEL_22;
  }
  if ( v15 > 3 )
  {
    v19 = 142;
    goto LABEL_22;
  }
  v11 = 0;
  if ( v15 == 3 )
    LOBYTE(v15) = 0;
  DynamicLock_Acquire(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
  v31 = XilRegister_ReadUlong(v5, *(_QWORD *)v132);
  LOBYTE(v32) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v32,
    11,
    143,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v31);
  v33 = v31 & 0xE000200 | ((v15 & 3) << 14);
  LOBYTE(v34) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v34,
    11,
    144,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v33);
  XilRegister_WriteUlong(v5, *(_QWORD *)v132, v33);
  DynamicLock_Release(*(_QWORD *)(v129 + *(_QWORD *)(v3 + 48) + 16));
  v35 = XilRegister_ReadUlong(v5, *(_QWORD *)v132);
  LOBYTE(v36) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v36,
    11,
    145,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v35);
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v140,
           (unsigned int)v11);
}
