/*
 * XREFs of DynamicLock_Create @ 0x1C003FC00
 * Callers:
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C0020340 (RootHub_InitializeReadModifyWriteLock.c)
 *     Command_Create @ 0x1C0055148 (Command_Create.c)
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall DynamicLock_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF

  memset(v14, 0, sizeof(v14));
  LODWORD(v14[0]) = 56;
  v14[6] = off_1C004E200;
  v14[3] = 0x100000001LL;
  v14[4] = a1;
  if ( a3 != 1 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 2520))(
            WdfDriverGlobals,
            v14,
            &v13);
    v9 = v11;
    if ( v11 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 1u, 0xBu, (__int64)&WPP_e4002d9c610f32dc6daab52c4879f907_Traceguids, v11);
      return v9;
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v13,
            off_1C004E200);
    *(_DWORD *)v10 = a3;
    *(_QWORD *)(v10 + 8) = v13;
LABEL_8:
    *a4 = v10;
    return v9;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         v14,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v15,
            off_1C004E200);
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = v15;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_d(a2, 2u, 1u, 0xAu, (__int64)&WPP_e4002d9c610f32dc6daab52c4879f907_Traceguids, v8);
  return v9;
}
