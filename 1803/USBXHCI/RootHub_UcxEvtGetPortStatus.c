/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C001CD00
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
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001AA4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F320 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int16 v8; // cx
  int v9; // edx
  unsigned int v10; // r13d
  int v11; // r8d
  unsigned int Ulong; // ebx
  char v13; // cl
  unsigned __int16 v14; // r9
  unsigned __int16 *v15; // r15
  int v16; // r8d
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // dx
  int v19; // ecx
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  __int16 v23; // cx
  unsigned __int16 v24; // ax
  __int64 v25; // r15
  unsigned __int16 v26; // ax
  int v27; // edx
  int v28; // eax
  __int16 v29; // cx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // r9d
  __int64 v36; // [rsp+28h] [rbp-D0h]
  __int64 v37; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+28h] [rbp-D0h]
  __int64 v39; // [rsp+28h] [rbp-D0h]
  __int64 v40; // [rsp+30h] [rbp-C8h]
  __int64 v41; // [rsp+30h] [rbp-C8h]
  __int64 v42; // [rsp+78h] [rbp-80h]
  __int64 v43; // [rsp+80h] [rbp-78h]
  unsigned __int64 v44; // [rsp+88h] [rbp-70h]
  _QWORD v46[5]; // [rsp+98h] [rbp-60h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  v43 = v6;
  if ( *(_BYTE *)(v5 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      1803);
  memset(v46, 0, sizeof(v46));
  LOWORD(v46[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v46);
  v7 = v46[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0x69u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
LABEL_6:
    *(_DWORD *)(v7 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v8 = *(_WORD *)(v7 + 130);
  v9 = 8;
  v10 = *(unsigned __int16 *)(v7 + 132);
  if ( v8 != 2 )
    v9 = 4;
  LOWORD(v11) = HIBYTE(*(_WORD *)(v7 + 132));
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129)
    || v8 && v8 != 2
    || !*(_WORD *)(v7 + 132)
    || v10 > *(_DWORD *)(v4 + 16)
    || *(unsigned __int16 *)(v7 + 134) != v9 )
  {
    v34 = 106;
    v11 = (unsigned __int8)v11;
    goto LABEL_56;
  }
  v42 = 16LL * (v10 - 1);
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(v42 + *(_QWORD *)(v4 + 40)));
  v44 = (unsigned __int64)(v10 - 1) << 6;
  v13 = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v44 + 1);
  if ( v13 == 2 && !*(_WORD *)(v7 + 130) )
  {
    if ( Ulong == -1 )
    {
      v14 = 107;
LABEL_20:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        v14,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
      Controller_SetControllerGone(*(_QWORD *)(v4 + 8), 1);
      goto LABEL_6;
    }
    v15 = *(unsigned __int16 **)(v7 + 40);
    *(_DWORD *)v15 = 0;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x6Cu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v10,
      Ulong);
    v16 = (Ulong >> 5) & 0xF;
    v17 = *v15 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    *v15 = v17;
    if ( v16 == 2 )
    {
      v17 |= 0x20u;
      *v15 = v17;
      goto LABEL_29;
    }
    if ( ((Ulong >> 5) & 0xF) != 3 )
    {
      if ( ((Ulong >> 5) & 0xF) == 0xB )
      {
        *v15 = v17 | 0x800;
        LODWORD(v36) = v10;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          2u,
          0xBu,
          0x6Du,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v36);
        v17 = *v15;
        v16 = (Ulong >> 5) & 0xF;
LABEL_29:
        v18 = v17 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
        *v15 = v18;
        v19 = (Ulong >> 10) & 0xF;
        if ( v19 == 2 )
        {
          v18 |= 0x200u;
          *v15 = v18;
          v20 = v18;
        }
        else
        {
          v20 = v18;
          if ( v19 == 3 )
          {
            v20 = v18 | 0x400;
            *v15 = v18 | 0x400;
            v18 |= 0x400u;
          }
        }
        if ( (Ulong & 0xC000) != 0 )
        {
          v21 = v20 | 0x1000;
          *v15 = v21;
          v18 = v21;
        }
        v22 = v15[1] & 0xFFFC | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
        v15[1] = v22;
        v23 = v22 & 0xFFFB;
        if ( v16 != 15 )
          v23 |= 4 * ((Ulong >> 22) & 1);
        v24 = v23 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
        v15[1] = v24;
        LODWORD(v40) = v24;
        LODWORD(v36) = v18;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0x6Eu,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v36,
          v40);
        *(_DWORD *)(v7 + 4) = ((Ulong >> 5) & 0xF) == 15;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v3);
      }
      if ( ((Ulong >> 5) & 0xF) != 0xF )
        goto LABEL_29;
    }
    v17 |= 4u;
    *v15 = v17;
    goto LABEL_29;
  }
  if ( v13 != 3 )
  {
    v11 = *(unsigned __int8 *)(v7 + 133);
    v34 = 117;
LABEL_56:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(v7 + 134), v11, v34);
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  if ( Ulong == -1 )
  {
    v14 = 111;
    goto LABEL_20;
  }
  v25 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)v25 = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    4u,
    0xBu,
    0x70u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v10,
    Ulong);
  if ( RootHub_HideInvalidDebugPortStatusAndChange(v4, v10) )
  {
    LODWORD(v37) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x71u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v37);
    v26 = *(_WORD *)v25 & 0xFC04 | 0x2A0;
    *(_WORD *)(v25 + 2) &= 0xFF06u;
    v27 = v26;
    v28 = *(unsigned __int16 *)(v25 + 2);
    *(_WORD *)v25 = v27;
    LODWORD(v41) = v28;
    LODWORD(v38) = v27;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x72u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v38,
      v41);
  }
  else
  {
    v29 = Ulong & 1 | *(_WORD *)v25 & 0xFE04 | (2
                                              * ((Ulong >> 1) & 1 | (4
                                                                   * ((Ulong >> 3) & 1 | (2
                                                                                        * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF))))))));
    *(_WORD *)v25 = v29;
    if ( (v29 & 0x1E0) == 0x1E0 )
    {
      v29 = v29 & 0xFE1F | 0x100;
      *(_WORD *)v25 = v29;
    }
    if ( (Ulong & 0x1000000) != 0 )
    {
      v29 = v29 & 0xFE1F | 0x140;
      *(_WORD *)v25 = v29;
    }
    *(_WORD *)v25 = v29 ^ (v29 ^ Ulong & 0xFE00) & 0x200;
    v30 = *(_WORD *)(v25 + 2) & 0xFF06 | (Ulong >> 17) & 1 | (unsigned __int16)(8
                                                                              * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * ((Ulong >> 22) & 1 | (2 * ((Ulong >> 23) & 1))))))))));
    *(_WORD *)(v25 + 2) = v30;
    LODWORD(v41) = v30;
    LODWORD(v37) = (unsigned __int16)(v29 ^ (v29 ^ Ulong & 0xFE00) & 0x200);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x73u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v37,
      v41);
    if ( *(_WORD *)(v7 + 130) == 2 )
    {
      v31 = XilRegister_ReadUlong(v43, (unsigned int *)(*(_QWORD *)(v4 + 40) + v42 + 8));
      *(_DWORD *)(v25 + 4) = 0;
      if ( *(_WORD *)(*(_QWORD *)(v4 + 48) + v44 + 54) || (Ulong & 0x3C00) != 0x400 )
        v32 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
      else
        v32 = 68;
      v33 = v32 | (v31 >> 8) & 0xFF00;
      *(_DWORD *)(v25 + 4) = v33;
      LODWORD(v39) = v33;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0x74u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v39);
    }
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
