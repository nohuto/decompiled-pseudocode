/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C0002D70
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
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0021A70 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r14
  int v8; // edx
  int v9; // eax
  unsigned __int8 v10; // cl
  unsigned int v11; // r12d
  int v12; // ebx
  unsigned int v13; // ebp
  unsigned __int64 v14; // rsi
  int *v15; // r15
  char v16; // cl
  __int64 v17; // rbx
  int v18; // edx
  int v19; // ebx
  int v20; // ebx
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // edx
  int v25; // eax
  int v26; // r9d
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // edx
  unsigned int v31; // r8d
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  int v34; // ebx
  int v35; // esi
  int v36; // ebp
  int v37; // r10d
  int v38; // r11d
  int Ulong; // ebx
  int v40; // edx
  int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // ebx
  int v44; // r9d
  unsigned int v45; // ebx
  int v46; // edx
  int v47; // edx
  unsigned __int16 v48; // bp
  int v49; // eax
  unsigned int v50; // ebx
  char v51; // al
  int v52; // edx
  __int64 v53; // rcx
  unsigned int v54; // ebx
  int v55; // edx
  int v56; // edx
  unsigned int v57; // ebx
  int v58; // edx
  int v59; // edx
  int v60; // ebx
  int v61; // edx
  unsigned int v62; // ebx
  int v63; // edx
  int v64; // ebx
  int v65; // edx
  unsigned int v66; // ebx
  int v67; // edx
  int v68; // ebx
  int v69; // edx
  unsigned int v70; // ebx
  int v71; // edx
  int v72; // ebx
  int v73; // edx
  unsigned int v74; // ebx
  int v75; // edx
  int v76; // ebx
  int v77; // edx
  unsigned int v78; // ebx
  int v79; // edx
  unsigned int v80; // ebx
  int v81; // edx
  int v82; // edx
  int v83; // ebx
  int v84; // edx
  unsigned int v85; // ebx
  int v86; // edx
  int v87; // ebx
  int v88; // edx
  unsigned int v89; // ebx
  int v90; // edx
  int v91; // ebx
  int v92; // edx
  unsigned int v93; // ebx
  int v94; // edx
  int v95; // ebx
  int v96; // edx
  unsigned int v97; // ebx
  int v98; // edx
  int v99; // ebx
  int v100; // edx
  unsigned int v101; // ebx
  int v102; // edx
  unsigned int v103; // ebx
  int v104; // edx
  int v105; // edx
  int v106; // r10d
  char v107; // al
  __int64 v108; // rcx
  signed __int32 v109[8]; // [rsp+0h] [rbp-F8h] BYREF
  void *v110; // [rsp+20h] [rbp-D8h]
  int v111; // [rsp+28h] [rbp-D0h]
  int v112; // [rsp+30h] [rbp-C8h]
  int v113; // [rsp+38h] [rbp-C0h]
  unsigned int v114; // [rsp+40h] [rbp-B8h]
  unsigned int v115; // [rsp+48h] [rbp-B0h]
  unsigned int v116; // [rsp+50h] [rbp-A8h]
  int v117; // [rsp+58h] [rbp-A0h]
  int v118; // [rsp+60h] [rbp-98h]
  unsigned int v119; // [rsp+70h] [rbp-88h] BYREF
  int v120; // [rsp+78h] [rbp-80h] BYREF
  int v121; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v122; // [rsp+80h] [rbp-78h] BYREF
  __int64 v123; // [rsp+88h] [rbp-70h]
  _QWORD v124[5]; // [rsp+90h] [rbp-68h] BYREF

  v123 = a2;
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
      995LL);
  memset(v124, 0, sizeof(v124));
  LOWORD(v124[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v124);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = v124[1];
  v8 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 88) + 16LL);
  if ( !(_BYTE)v8 || *(_BYTE *)(v6 + 333) )
  {
    v107 = *(_BYTE *)(v6 + 333);
    v108 = *(_QWORD *)(v6 + 72);
    v8 = (unsigned __int8)v8;
    LOBYTE(v111) = v8;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_DD(v108, v8, 4, 221, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v111, v107);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x26u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    goto LABEL_90;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v5, *(_DWORD *)(v3 + 32) + 4, 2, 1, &v120);
    v9 = v120;
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
      0x27u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    LOBYTE(v28) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v28);
LABEL_90:
    *(_DWORD *)(v7 + 4) = -1073713152;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v123);
  }
  if ( (v9 & 1) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x28u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    *(_DWORD *)(v7 + 4) = -1073741807;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v123);
  }
  v10 = *(_BYTE *)(v7 + 128);
  v11 = *(unsigned __int8 *)(v7 + 133);
  v12 = *(unsigned __int16 *)(v7 + 130);
  v13 = *(unsigned __int8 *)(v7 + 132);
  v119 = v11;
  if ( v10 != 35 || *(_BYTE *)(v7 + 129) != 1 || !v13 || v13 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v7 + 134) )
  {
    v29 = 41;
    v30 = *(unsigned __int8 *)(v7 + 134);
    v31 = *(unsigned __int8 *)(v7 + 131);
    v37 = *(unsigned __int8 *)(v7 + 130);
    v38 = *(unsigned __int8 *)(v7 + 129);
    v118 = *(unsigned __int8 *)(v7 + 135);
    v117 = v30;
    v116 = v11;
    v115 = v13;
    v114 = v31;
    v113 = v37;
    v112 = v38;
    v111 = v10;
    goto LABEL_42;
  }
  v14 = (unsigned __int64)(v13 - 1) << 6;
  v15 = (int *)(16LL * (v13 - 1) + *(_QWORD *)(v3 + 40));
  v16 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 1);
  if ( v16 == 2 )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v8,
      11,
      42,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v13,
      v12,
      v11);
    if ( v12 == 22 || !v119 )
    {
      switch ( v12 )
      {
        case 1:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          Ulong = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v40) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v40,
            11,
            44,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            Ulong);
          v42 = *(_QWORD *)(v3 + 8);
          if ( (*(_QWORD *)(v42 + 272) & 0x2000000LL) != 0 )
          {
            if ( (Ulong & 2) == 0 || (Ulong & 0x1E0u) >= 0x60 )
              WPP_RECORDER_SF_(
                *(_QWORD *)(v42 + 72),
                3u,
                0xBu,
                0x2Du,
                (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
            v43 = Ulong & 0xE00C200 | 0x10060;
            v42 = *(_QWORD *)(v3 + 8);
            v44 = 46;
          }
          else
          {
            v43 = Ulong & 0xE00C200 | 2;
            v44 = 47;
          }
          LOBYTE(v41) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v42 + 72),
            v41,
            11,
            v44,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v43);
          XilRegister_WriteUlong(v5, v15, v43);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 48;
          goto LABEL_28;
        case 2:
          if ( (int)RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v13, 0) < 0 )
          {
            *(_DWORD *)(v7 + 4) = -1073741820;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(
                     WdfDriverGlobals,
                     v123);
          }
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v45 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v46) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v46,
            11,
            49,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v45);
          v48 = 50;
          if ( (v45 & 2) == 0 || (v49 = (v45 >> 5) & 0xF, v49 != 3) && v49 != 15 )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              2u,
              0xBu,
              0x32u,
              (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
          v50 = v45 & 0xE00C200 | 0x101E0;
          LOBYTE(v47) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v47,
            11,
            51,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v50);
          XilRegister_WriteUlong(v5, v15, v50);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v51 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v52) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v52,
            11,
            52,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v51);
          v53 = *(_QWORD *)(v3 + 48);
          if ( *(int *)(v53 + v14 + 48) > 0 )
            v48 = *(_WORD *)(v53 + v14 + 52);
          ExSetTimer(*(_QWORD *)(v53 + v14 + 32), -10000LL * v48, 0LL, 0LL);
          goto LABEL_29;
        case 8:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v54 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v55) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v55,
            11,
            53,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v54);
          v54 &= 0xE00C000u;
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v56,
            11,
            54,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v54);
          XilRegister_WriteUlong(v5, v15, v54);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 55;
          goto LABEL_28;
        case 16:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v60 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v61) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v61,
            11,
            60,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v60);
          v62 = v60 & 0xE00C200 | 0x20000;
          LOBYTE(v63) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v63,
            11,
            61,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v62);
          XilRegister_WriteUlong(v5, v15, v62);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 62;
          goto LABEL_28;
        case 17:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v68 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v69) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v69,
            11,
            66,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v68);
          v70 = v68 & 0xE00C200 | 0x40000;
          LOBYTE(v71) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v71,
            11,
            67,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v70);
          XilRegister_WriteUlong(v5, v15, v70);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 68;
          goto LABEL_28;
        case 18:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v72 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v73) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v73,
            11,
            69,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v72);
          v74 = v72 & 0xE00C200 | 0x400000;
          LOBYTE(v75) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v75,
            11,
            70,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v74);
          XilRegister_WriteUlong(v5, v15, v74);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 71;
          goto LABEL_28;
        case 19:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v76 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v77,
            11,
            72,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v76);
          v78 = v76 & 0xE00C200 | 0x100000;
          LOBYTE(v79) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v79,
            11,
            73,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v78);
          XilRegister_WriteUlong(v5, v15, v78);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 74;
          goto LABEL_28;
        case 20:
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v64 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v65) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v65,
            11,
            63,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v64);
          v66 = v64 & 0xE00C200 | 0x200000;
          LOBYTE(v67) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v67,
            11,
            64,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v66);
          XilRegister_WriteUlong(v5, v15, v66);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 65;
          goto LABEL_28;
        case 22:
          if ( v119 > 3 )
          {
            v29 = 56;
            goto LABEL_40;
          }
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          v57 = XilRegister_ReadUlong(v5, v15);
          LOBYTE(v58) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v58,
            11,
            57,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v57);
          v57 &= 0xE000200u;
          LOBYTE(v59) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v59,
            11,
            58,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v57);
          XilRegister_WriteUlong(v5, v15, v57);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
          LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
          v26 = 59;
          break;
        default:
          v29 = 75;
          goto LABEL_40;
      }
      goto LABEL_28;
    }
    v29 = 43;
    goto LABEL_40;
  }
  if ( v16 != 3 )
  {
    v29 = 103;
    v30 = *(unsigned __int8 *)(v7 + 134);
    v31 = *(unsigned __int8 *)(v7 + 131);
    v106 = *(unsigned __int8 *)(v7 + 130);
    v118 = *(unsigned __int8 *)(v7 + 135);
    v117 = v30;
    v116 = v11;
    v115 = v13;
    v114 = v31;
    v113 = v106;
    v112 = 1;
    v111 = 35;
    goto LABEL_42;
  }
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v8,
    11,
    76,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v13,
    v12,
    v11);
  if ( v119 )
  {
    v29 = 77;
LABEL_40:
    v30 = *(unsigned __int8 *)(v7 + 134);
    v31 = *(unsigned __int8 *)(v7 + 133);
    v32 = *(unsigned __int8 *)(v7 + 132);
    v33 = *(unsigned __int8 *)(v7 + 131);
    v34 = *(unsigned __int8 *)(v7 + 130);
    v35 = *(unsigned __int8 *)(v7 + 129);
    v36 = *(unsigned __int8 *)(v7 + 128);
    v118 = *(unsigned __int8 *)(v7 + 135);
    v117 = v30;
    v116 = v31;
    v115 = v32;
    v114 = v33;
    v113 = v34;
    v112 = v35;
    v111 = v36;
LABEL_42:
    WPP_RECORDER_SF_DDDDDDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v30,
      v31,
      v29,
      (_DWORD)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v123);
  }
  if ( v12 != 29 )
  {
    switch ( v12 )
    {
      case 8:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v80 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v81) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v81,
          11,
          78,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v80);
        v80 &= 0xE00C000u;
        LOBYTE(v82) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v82,
          11,
          79,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v80);
        XilRegister_WriteUlong(v5, v15, v80);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 80;
        goto LABEL_28;
      case 16:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v83 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v84) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v84,
          11,
          81,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v83);
        v85 = v83 & 0xE00C200 | 0x20000;
        LOBYTE(v86) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v86,
          11,
          82,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v85);
        XilRegister_WriteUlong(v5, v15, v85);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 83;
        goto LABEL_28;
      case 19:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v91 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v92) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v92,
          11,
          87,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v91);
        v93 = v91 & 0xE00C200 | 0x100000;
        LOBYTE(v94) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v94,
          11,
          88,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v93);
        XilRegister_WriteUlong(v5, v15, v93);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 89;
        goto LABEL_28;
      case 20:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v87 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v88) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v88,
          11,
          84,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v87);
        v89 = v87 & 0xE00C200 | 0x200000;
        LOBYTE(v90) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v90,
          11,
          85,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v89);
        XilRegister_WriteUlong(v5, v15, v89);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 86;
        goto LABEL_28;
      case 25:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v95 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v96) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v96,
          11,
          90,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v95);
        v97 = v95 & 0xE00C200 | 0x400000;
        LOBYTE(v98) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v98,
          11,
          91,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v97);
        XilRegister_WriteUlong(v5, v15, v97);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 92;
        goto LABEL_28;
      case 26:
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        v99 = XilRegister_ReadUlong(v5, v15);
        LOBYTE(v100) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v100,
          11,
          93,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v99);
        v101 = v99 & 0xE00C200 | 0x800000;
        LOBYTE(v102) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v102,
          11,
          94,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v101);
        XilRegister_WriteUlong(v5, v15, v101);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16));
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15);
        v26 = 95;
        goto LABEL_28;
      case 30:
        v103 = XilRegister_ReadUlong(v5, v15 + 1);
        LOBYTE(v104) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v104,
          11,
          99,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v103);
        v103 &= ~0x10000u;
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          100,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v103);
        XilRegister_WriteUlong(v5, v15 + 1, v103);
        LOBYTE(v25) = XilRegister_ReadUlong(v5, v15 + 1);
        v26 = 101;
        goto LABEL_28;
      default:
        v29 = 102;
        goto LABEL_40;
    }
  }
  _mm_lfence();
  v17 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16);
  if ( *(_DWORD *)v17 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        88LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v17 + 8),
      0LL);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      *(_QWORD *)(v17 + 8));
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v5, (int)v15, 2, 1, &v121);
    v19 = v121;
  }
  else
  {
    v19 = *v15;
  }
  LOBYTE(v18) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v18,
    11,
    96,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v19);
  v20 = v19 & 0xE00C200 | 0x80000;
  LOBYTE(v21) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v21,
    11,
    97,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v20);
  v22 = *(_QWORD *)(v5 + 8);
  v119 = v20;
  if ( *(_BYTE *)(v22 + 441) )
  {
    Register_WriteSecureMmio(v5, v15, 2LL, &v119);
  }
  else
  {
    *v15 = v20;
    _InterlockedOr(v109, 0);
  }
  v23 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + v14 + 16);
  if ( *(_DWORD *)v23 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        107LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v23 + 8));
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      *(_QWORD *)(v23 + 8));
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v5, (int)v15, 2, 1, &v122);
    LOBYTE(v25) = v122;
  }
  else
  {
    v25 = *v15;
  }
  v26 = 98;
LABEL_28:
  LOBYTE(v24) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v24,
    11,
    v26,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v25);
LABEL_29:
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v123);
}
