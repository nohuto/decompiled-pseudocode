/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C001D540
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
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned int v5; // ebx
  __int64 v6; // rcx
  void *v7; // r12
  size_t v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rdx
  char v14; // r8
  int Ulong; // eax
  int v16; // eax
  unsigned __int16 v18; // r9
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  _QWORD v23[5]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  v21 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  memset(v23, 0, sizeof(v23));
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v23);
  v4 = v23[1];
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 8);
  v7 = *(void **)(v23[1] + 40LL);
  v8 = *(unsigned int *)(v23[1] + 36LL);
  if ( *(_BYTE *)(v6 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3184);
    v6 = *(_QWORD *)(v3 + 8);
  }
  if ( !Controller_IsControllerAccessible(v6) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0xB7u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    v9 = *(_QWORD *)(v3 + 8);
    if ( !*(_DWORD *)(v9 + 392) && *(_DWORD *)(v9 + 416) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v9 + 408));
    *(_BYTE *)(v3 + 57) = 0;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_31;
  memset(v7, 0, v8);
  v10 = 255;
  if ( (unsigned int)v8 <= 0x20 )
    v10 = 8 * v8 - 1;
  v11 = *(_DWORD *)(v3 + 16);
  v12 = 1;
  if ( v10 <= v11 )
    v11 = v10;
  if ( !v11 )
  {
LABEL_31:
    *(_DWORD *)(v4 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v5);
  }
  while ( 1 )
  {
    v13 = v12 - 1;
    v14 = *(_BYTE *)((v13 << 6) + *(_QWORD *)(v3 + 48) + 1);
    if ( v14 != 2 )
      break;
    Ulong = XilRegister_ReadUlong(v21, (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v13));
    if ( Ulong == -1 )
    {
      v18 = 184;
      goto LABEL_34;
    }
    if ( (Ulong & 0x1E0) == 0x1E0 )
      Ulong &= ~0x400000u;
    if ( (Ulong & 0x760000) != 0 )
    {
      *((_BYTE *)v7 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      LODWORD(v20) = Ulong;
      LODWORD(v19) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xB9u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v19,
        v20);
    }
LABEL_30:
    if ( ++v12 > v11 )
      goto LABEL_31;
  }
  if ( v14 != 3 )
    goto LABEL_30;
  v16 = XilRegister_ReadUlong(v21, (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v13));
  if ( v16 != -1 )
  {
    if ( (v16 & 0xFA0000) != 0 )
    {
      LODWORD(v20) = v16;
      LODWORD(v19) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xBBu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v19,
        v20);
      if ( RootHub_HideInvalidDebugPortStatusAndChange(v3, v12) )
      {
        LODWORD(v19) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xBCu,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v19);
      }
      else
      {
        *((_BYTE *)v7 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      }
    }
    goto LABEL_30;
  }
  v18 = 186;
LABEL_34:
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    0xBu,
    v18,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), 1);
LABEL_6:
  *(_DWORD *)(v4 + 4) = -1073713152;
  v5 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v5);
}
