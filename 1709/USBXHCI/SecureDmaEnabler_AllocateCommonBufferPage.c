/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005FDBC
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0060218 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPage(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int16 v12; // cx
  __int64 v13; // r8
  __int64 v15; // [rsp+28h] [rbp-58h]
  _QWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h] BYREF

  v17 = 0LL;
  memset(v16, 0, 0x38uLL);
  v16[3] = 0x100000001LL;
  v16[6] = off_1C004E458;
  v16[5] = a2 + 120;
  v16[4] = *a1;
  v16[1] = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  LODWORD(v16[0]) = 56;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v16,
         *(&WPP_MAIN_CB.AlignmentRequirement + 1),
         1229146200LL,
         4096LL,
         &v17,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0x12u,
      0x14u,
      (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
      v15);
    goto LABEL_5;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v17,
          off_1C004E458);
  *(_QWORD *)(v10 + 16) = v17;
  *(_QWORD *)(v10 + 24) = a1;
  v11 = v18;
  v12 = v18;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_WORD *)(v10 + 42) = 0;
  *(_DWORD *)(v10 + 72) = 4096;
  *(_WORD *)(v10 + 40) = 8 * ((((unsigned __int64)(v12 & 0xFFF) + 0x1FFF) >> 12) + 6);
  *(_QWORD *)(v10 + 64) = v11 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v10 + 76) = v11 & 0xFFF;
  MmBuildMdlForNonPagedPool((PMDL)(v10 + 32));
  v9 = SecureDmaEnabler_MapMemory(a1, v10 + 32, v13, v10 + 88);
  if ( v9 >= 0 )
  {
    *(_QWORD *)v10 = v18;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v10 + 88);
    *a4 = v10 + 120;
    *a3 = v10;
LABEL_5:
    if ( v9 >= 0 )
      return (unsigned int)v9;
  }
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v9;
}
