/*
 * XREFs of XilCoreDeviceSlot_Initialize @ 0x1C0006BC4
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_Initialize @ 0x1C00164D8 (DeviceSlot_Initialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong64 @ 0x1C0006C4C (XilRegister_WriteUlong64.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilCoreDeviceSlot_Initialize(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp
  _DWORD *v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v6 = (_DWORD *)(v5 + 56);
    v7 = (unsigned __int8)*(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v4 + 8);
    v11 = v7;
    if ( *(_BYTE *)(v8 + 441) )
    {
      Register_WriteSecureMmio(v4, v6, 2LL, &v11);
    }
    else
    {
      *v6 = v7;
      _InterlockedOr(v10, 0);
    }
    XilRegister_WriteUlong64(v4, v5 + 48, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 0xAu, 0x12u, (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids);
    return (unsigned int)-1073741436;
  }
  return v2;
}
