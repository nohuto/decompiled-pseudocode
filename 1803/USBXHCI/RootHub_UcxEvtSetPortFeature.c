/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C001D970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C001A260 (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F320 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r8
  int Ulong; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 v12; // r11
  int v13; // r12d
  char v14; // cl
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  unsigned __int16 v25; // r9
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  __int64 v34; // rax
  int v35; // eax
  int v36; // ebx
  int v37; // ebx
  int v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  unsigned int v48; // ebx
  int v49; // eax
  __int16 v50; // bx
  int v51; // edi
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // ebx
  int v61; // ebx
  int v62; // ebx
  __int64 v63; // r8
  int v64; // eax
  int v65; // ebx
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v69; // [rsp+28h] [rbp-E0h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  __int64 v71; // [rsp+28h] [rbp-E0h]
  __int64 v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+28h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+28h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-E0h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+28h] [rbp-E0h]
  __int64 v89; // [rsp+28h] [rbp-E0h]
  __int64 v90; // [rsp+28h] [rbp-E0h]
  unsigned int *v91; // [rsp+70h] [rbp-98h]
  unsigned __int64 v92; // [rsp+78h] [rbp-90h]
  unsigned int *v93; // [rsp+88h] [rbp-80h]
  unsigned int *v94; // [rsp+90h] [rbp-78h]
  _QWORD v96[5]; // [rsp+A0h] [rbp-68h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      2257);
  memset(v96, 0, sizeof(v96));
  LOWORD(v96[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v96);
  v6 = v96[1];
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
    if ( Ulong == -1 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x77u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), 1);
      goto LABEL_6;
    }
    if ( (Ulong & 1) != 0 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x78u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
      v7 = 3221225666LL;
      *(_DWORD *)(v6 + 4) = -1073741807;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v7);
    }
    v9 = *(unsigned __int16 *)(v6 + 130);
    v10 = *(unsigned __int8 *)(v6 + 132);
    v11 = *(unsigned __int8 *)(v6 + 133);
    if ( *(_BYTE *)(v6 + 128) != 35
      || *(_BYTE *)(v6 + 129) != 3
      || !*(_BYTE *)(v6 + 132)
      || v10 > *(_DWORD *)(v3 + 16)
      || *(_WORD *)(v6 + 134) )
    {
      v15 = 121;
      v16 = *(unsigned __int8 *)(v6 + 134);
      v17 = BYTE1(v9);
      goto LABEL_88;
    }
    v12 = *(_QWORD *)(v3 + 8);
    v13 = 2;
    v91 = (unsigned int *)(16LL * (v10 - 1) + *(_QWORD *)(v3 + 40));
    v92 = (unsigned __int64)(v10 - 1) << 6;
    v94 = v91 + 3;
    v93 = v91 + 1;
    v14 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 1);
    if ( v14 == 2 )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v12 + 72),
        4u,
        0xBu,
        0x7Au,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      if ( v9 - 21 > 1 && v11 )
      {
        v15 = 123;
LABEL_20:
        v16 = *(unsigned __int8 *)(v6 + 134);
        v17 = *(unsigned __int8 *)(v6 + 133);
LABEL_88:
        v67 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
        goto LABEL_89;
      }
      v18 = v9 - 2;
      if ( v18 )
      {
        v19 = v18 - 2;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            v21 = v20 - 13;
            if ( v21 )
            {
              if ( v21 != 1 )
              {
                v15 = 146;
                goto LABEL_20;
              }
              if ( v11 > 3 )
              {
                v15 = 142;
                goto LABEL_20;
              }
              if ( v11 == 3 )
                LOBYTE(v11) = 0;
              DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
              v22 = XilRegister_ReadUlong(v5, v91);
              LODWORD(v69) = v22;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x8Fu,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v69);
              v23 = v22 & 0xE000200 | ((v11 & 3) << 14);
              LODWORD(v70) = v23;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x90u,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v70);
              XilRegister_WriteUlong(v5, v91, v23);
              DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
              v24 = XilRegister_ReadUlong(v5, v91);
              v25 = 145;
            }
            else
            {
              if ( v11 > 5 )
              {
                v15 = 138;
                goto LABEL_20;
              }
              v26 = XilRegister_ReadUlong(v5, v93);
              LODWORD(v69) = v26;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x8Bu,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v69);
              v27 = (v11 << 28) | v26 & 0xFFFFFFF;
              LODWORD(v72) = v27;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x8Cu,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v72);
              XilRegister_WriteUlong(v5, v93, v27);
              v24 = XilRegister_ReadUlong(v5, v93);
              v25 = 141;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
            v28 = XilRegister_ReadUlong(v5, v91);
            LODWORD(v69) = v28;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x87u,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v69);
            v29 = v28 & 0xE00C000 | 0x200;
            LODWORD(v73) = v29;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x88u,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v73);
            XilRegister_WriteUlong(v5, v91, v29);
            DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
            v24 = XilRegister_ReadUlong(v5, v91);
            v25 = 137;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
          if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 8) )
          {
            v30 = XilRegister_ReadUlong(v5, v93);
            LODWORD(v69) = v30;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Cu,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v69);
            v30 &= 0xFFFE0007;
            LODWORD(v74) = v30;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Du,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v74);
            XilRegister_WriteUlong(v5, v93, v30);
            v31 = XilRegister_ReadUlong(v5, v94);
            LODWORD(v75) = v31;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Eu,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v75);
            v31 &= 0xFFFFC000;
            LODWORD(v76) = v31;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Fu,
              (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
              v76);
            XilRegister_WriteUlong(v5, v94, v31);
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 8) = 0;
          }
          v32 = XilRegister_ReadUlong(v5, v91);
          LODWORD(v69) = v32;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x80u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v69);
          v33 = v32 & 0xE00C200 | 0x10;
          LODWORD(v77) = v33;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x81u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v77);
          XilRegister_WriteUlong(v5, v91, v33);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
          v24 = XilRegister_ReadUlong(v5, v91);
          v25 = 130;
        }
      }
      else
      {
        v34 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL);
        if ( (v34 & 0x8000000) != 0 || (v34 & 0x80000) != 0 )
        {
          v35 = RootHub_ForceU0AndWait((_QWORD *)v3, v10);
          v7 = (unsigned int)v35;
          if ( v35 < 0 )
            goto LABEL_90;
        }
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 6) = 0;
        v36 = XilRegister_ReadUlong(v5, v91);
        LODWORD(v69) = v36;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x83u,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v69);
        if ( (v36 & 2) == 0 || (v36 & 0x1E0u) >= 0x60 )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            3u,
            0xBu,
            0x84u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
        v37 = v36 & 0xE00C200 | 0x10060;
        LODWORD(v78) = v37;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x85u,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v78);
        XilRegister_WriteUlong(v5, v91, v37);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
        v24 = XilRegister_ReadUlong(v5, v91);
        v25 = 134;
      }
      goto LABEL_84;
    }
    if ( v14 != 3 )
    {
      v15 = 177;
      v16 = BYTE1(v9);
      v67 = *(_QWORD *)(v12 + 72);
      v17 = (unsigned __int8)v9;
LABEL_89:
      WPP_RECORDER_SF_DDDDDDDD(v67, v16, v17, v15);
      v7 = 3221225473LL;
      goto LABEL_90;
    }
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v12 + 72),
      4u,
      0xBu,
      0x93u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      *(unsigned __int8 *)(v6 + 132),
      *(unsigned __int16 *)(v6 + 130),
      *(unsigned __int8 *)(v6 + 133));
    if ( v9 > 0x1B || (v38 = 159383584, !_bittest(&v38, v9)) )
    {
      if ( v11 )
      {
        v15 = 148;
        goto LABEL_20;
      }
    }
    v39 = v9 - 4;
    if ( !v39 )
    {
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      v65 = XilRegister_ReadUlong(v5, v91);
      LODWORD(v79) = v65;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x95u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v79);
      v66 = v65 & 0xE00C200 | 0x10;
      LODWORD(v90) = v66;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x96u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v90);
      XilRegister_WriteUlong(v5, v91, v66);
      DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      v24 = XilRegister_ReadUlong(v5, v91);
      v25 = 151;
      goto LABEL_84;
    }
    v40 = v39 - 1;
    if ( v40 )
    {
      v41 = v40 - 3;
      if ( v41 )
      {
        v42 = v41 - 15;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 3;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                if ( v45 != 2 )
                {
                  v15 = 176;
                  goto LABEL_20;
                }
                v46 = XilRegister_ReadUlong(v5, v93);
                LODWORD(v79) = v46;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0xADu,
                  (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                  v79);
                v46 |= 0x10000u;
                LODWORD(v80) = v46;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0xAEu,
                  (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                  v80);
                XilRegister_WriteUlong(v5, v93, v46);
                v24 = XilRegister_ReadUlong(v5, v93);
                v25 = 175;
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
                v47 = XilRegister_ReadUlong(v5, v91);
                LODWORD(v79) = v47;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x98u,
                  (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                  v79);
                v48 = v47 & 0xE00C200 | 0x80000000;
                LODWORD(v81) = v48;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x99u,
                  (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                  v81);
                XilRegister_WriteUlong(v5, v91, v48);
                DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
                v24 = XilRegister_ReadUlong(v5, v91);
                v25 = 154;
              }
            }
            else
            {
              if ( (unsigned __int8)v11 >= 8u )
              {
                v15 = 169;
                goto LABEL_20;
              }
              DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
              v49 = XilRegister_ReadUlong(v5, v91);
              v50 = v49;
              LODWORD(v79) = v49;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0xAAu,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v79);
              v51 = v50 & 0xC200 | ((v11 & 7) << 25);
              LODWORD(v82) = v51;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0xABu,
                (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                v82);
              XilRegister_WriteUlong(v5, v91, v51);
              DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
              v24 = XilRegister_ReadUlong(v5, v91);
              v25 = 172;
            }
            goto LABEL_84;
          }
          v52 = XilRegister_ReadUlong(v5, v93);
          LODWORD(v79) = v52;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA2u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v79);
          v53 = ((unsigned __int16)v52 ^ (unsigned __int16)((_WORD)v11 << 8)) & 0xFF00 ^ v52;
          LODWORD(v83) = v53;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA3u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v83);
          XilRegister_WriteUlong(v5, v93, v53);
          LODWORD(v84) = XilRegister_ReadUlong(v5, v93);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA4u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v84);
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 10) = v11;
        }
        else
        {
          v54 = XilRegister_ReadUlong(v5, v93);
          LODWORD(v79) = v54;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x9Fu,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v79);
          v55 = (unsigned __int8)(v11 ^ v54) ^ v54;
          LODWORD(v85) = v55;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA0u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v85);
          XilRegister_WriteUlong(v5, v93, v55);
          LODWORD(v86) = XilRegister_ReadUlong(v5, v93);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA1u,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v86);
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 9) = v11;
        }
LABEL_85:
        *(_DWORD *)(v6 + 4) = 0;
        v7 = 0LL;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v7);
      }
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      v56 = XilRegister_ReadUlong(v5, v91);
      LODWORD(v79) = v56;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x9Bu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v79);
      v57 = v56 & 0xE00C000 | 0x200;
      LODWORD(v87) = v57;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x9Cu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v87);
      XilRegister_WriteUlong(v5, v91, v57);
      DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      v24 = XilRegister_ReadUlong(v5, v91);
      v25 = 157;
LABEL_84:
      LODWORD(v71) = v24;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        v25,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v71);
      goto LABEL_85;
    }
    if ( v11 > 5 )
    {
      v15 = 165;
      goto LABEL_20;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x80000LL) != 0 )
    {
      if ( !v11 )
        goto LABEL_74;
      v58 = RootHub_ForceU0AndWait((_QWORD *)v3, v10);
      v7 = (unsigned int)v58;
      if ( v58 < 0 )
        goto LABEL_90;
    }
    if ( v11 )
      goto LABEL_75;
LABEL_74:
    v59 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL);
    v7 = (unsigned int)v59;
    if ( v59 >= 0 )
    {
LABEL_75:
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      if ( v11 == 3 )
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v92 + 6) = 0;
      v60 = XilRegister_ReadUlong(v5, v91);
      LODWORD(v79) = v60;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xA6u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v79);
      v61 = v60 & 0xE00C200;
      if ( v11 != 4 )
        v13 = 32 * (v11 & 0xF | 0x800);
      v62 = v13 | v61;
      LODWORD(v88) = v62;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xA7u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v88);
      XilRegister_WriteUlong(v5, v91, v62);
      DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v92 + 16));
      LODWORD(v89) = XilRegister_ReadUlong(v5, v91);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xA8u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v89);
      if ( v11 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x4000000LL) != 0 )
      {
        LOBYTE(v63) = 1;
        v64 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, v63);
        v7 = (unsigned int)v64;
        if ( v64 < 0 )
          goto LABEL_90;
      }
      goto LABEL_85;
    }
LABEL_90:
    *(_DWORD *)(v6 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v7);
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    0xBu,
    0x76u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
LABEL_6:
  *(_DWORD *)(v6 + 4) = -1073713152;
  v7 = 3221225486LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v7);
}
