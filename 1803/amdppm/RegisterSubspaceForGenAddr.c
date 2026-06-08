/*
 * XREFs of RegisterSubspaceForGenAddr @ 0x1C0021388
 * Callers:
 *     InitAcpiCpc @ 0x1C0021E94 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001470 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 */

__int64 __fastcall RegisterSubspaceForGenAddr(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  int v4; // r14d
  _DWORD *PoolWithTag; // rax
  int v7; // ebx
  __int64 v8; // rax
  PWDF_DRIVER_GLOBALS v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rsi
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  _DWORD *v16; // [rsp+68h] [rbp+10h]

  v2 = (_DWORD *)qword_1C0011918;
  v4 = *(unsigned __int8 *)(a2 + 3);
  if ( qword_1C0011918 )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x98uLL);
  v8 = WdfFunctions_01015;
  v9 = WdfDriverGlobals;
  v2[8] = v4;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v8 + 1632))(v9, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v10,
         &GUID_PCC_INTERFACE_STANDARD,
         v2,
         128,
         1,
         0LL);
  if ( v7 < 0 )
    goto LABEL_7;
  if ( (unsigned int)(v2[17] - 1) > 0x26 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
            WdfDriverGlobals,
            0LL,
            v2 + 32);
    v7 = v12;
    if ( v12 < 0 )
    {
      LODWORD(v14) = v12;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xBu,
        (__int64)&WPP_2c93596d227b365fe96486fd941e48d7_Traceguids,
        v14);
      goto LABEL_7;
    }
    qword_1C0011918 = (__int64)v2;
LABEL_11:
    v7 = 0;
    v11 = v2;
    v2 = 0LL;
    goto LABEL_12;
  }
  LODWORD(v15) = 40;
  LODWORD(v14) = v2[17];
  WPP_RECORDER_SF_DD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    0xAu,
    (__int64)&WPP_2c93596d227b365fe96486fd941e48d7_Traceguids,
    v14,
    v15);
  v7 = -1073741823;
LABEL_7:
  v11 = v16;
LABEL_12:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v7 >= 0 )
  {
    if ( v11[8] == v4 )
    {
      v7 = 0;
      if ( *(_QWORD *)(a2 + 4) > (__int64)(unsigned int)v11[20] )
        return (unsigned int)-1073741811;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v7;
}
