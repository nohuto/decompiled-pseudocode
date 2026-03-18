/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x1C003F594
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, __int64 **a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *, _QWORD *, __int64 *); // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-58h]
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF

  memset(v17, 0, 0x38uLL);
  v8 = *a1;
  v17[3] = 0x100000001LL;
  v17[6] = off_1C004E070;
  v17[5] = a2 + 24;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3064);
  LODWORD(v17[0]) = 56;
  LODWORD(v19) = 8;
  v10 = v9(WdfDriverGlobals, v8, 4096LL, &v19, v17, &v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v18,
                       off_1C004E070);
    v12[2] = v18;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 176))(WdfDriverGlobals, v18);
    v14 = WdfFunctions_01015;
    *v12 = v13;
    v12[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v14 + 184))(WdfDriverGlobals, v18);
    *a4 = v12 + 3;
    *a3 = v12;
  }
  else
  {
    LODWORD(v16) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72),
      3u,
      0x12u,
      0xCu,
      (__int64)&WPP_f100b2456a7c3ee2bcfb539d179273cb_Traceguids,
      v16);
  }
  return v11;
}
