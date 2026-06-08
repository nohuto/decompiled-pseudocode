/*
 * XREFs of RegisterSubspace @ 0x1C002893C
 * Callers:
 *     RegisterSubspaceForGenAddr @ 0x1C0028AE8 (RegisterSubspaceForGenAddr.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RegisterSubspace(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v3; // rbx
  _DWORD *PoolWithTag; // rax
  int v8; // edi
  __int64 v9; // rax
  PWDF_DRIVER_GLOBALS v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)qword_1C0016298;
  if ( qword_1C0016298 )
  {
LABEL_10:
    v8 = 0;
    *a3 = v3;
    v3 = 0LL;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x98uLL);
  v9 = WdfFunctions_01015;
  v10 = WdfDriverGlobals;
  v3[8] = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v9 + 1632))(v10, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v11,
         &GUID_PCC_INTERFACE_STANDARD,
         v3,
         128,
         1,
         0LL);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)(v3[17] - 1) <= 0x26 )
    {
      LODWORD(v15) = 40;
      LODWORD(v14) = v3[17];
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0xAu,
        (__int64)&WPP_6a9991137bfe36ef1b486751835e3c60_Traceguids,
        v14,
        v15);
      v8 = -1073741823;
      goto LABEL_11;
    }
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
            WdfDriverGlobals,
            0LL,
            v3 + 32);
    v8 = v12;
    if ( v12 < 0 )
    {
      LODWORD(v14) = v12;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xBu,
        (__int64)&WPP_6a9991137bfe36ef1b486751835e3c60_Traceguids,
        v14);
      goto LABEL_11;
    }
    qword_1C0016298 = (__int64)v3;
    goto LABEL_10;
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v8;
}
