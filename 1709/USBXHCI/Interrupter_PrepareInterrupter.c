/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x1C005C93C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchPrintfA @ 0x1C000E0D8 (RtlStringCchPrintfA.c)
 *     XilCommonBuffer_AcquireBuffer @ 0x1C000FE04 (XilCommonBuffer_AcquireBuffer.c)
 *     XilCommonBuffer_AcquireBuffers @ 0x1C000FE4C (XilCommonBuffer_AcquireBuffers.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000FE78 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilCommonBuffer_ReleaseBuffers @ 0x1C000FE8C (XilCommonBuffer_ReleaseBuffers.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001EFB4 (WPP_RECORDER_SF_qdd.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x1C005BF18 (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v5; // r14
  void *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  struct _DEVICE_OBJECT *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  _DWORD v28[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+5Ch] [rbp-3Ch]
  char pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 160);
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(void **)(v2 + 120);
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_DWORD *)(a1 + 96) ^= (*(_DWORD *)(a1 + 96) ^ a2) & 1;
  Interrupter_DetermineSegmentSizeAndCount(a1);
  v8 = XilCommonBuffer_AcquireBuffer(v6, 16 * *(_DWORD *)(v7 + 108), v7, 829713993);
  *(_QWORD *)(a1 + 152) = v8;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      9u,
      0x14u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
    v9 = -1073741670;
LABEL_15:
    v22 = *(_DWORD **)(a1 + 152);
    if ( v22 )
    {
      XilCommonBuffer_ReleaseBuffer((__int64)v6, v22);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( (_QWORD *)*v3 != v3 )
      XilCommonBuffer_ReleaseBuffers((__int64)v6, (__int64)v3);
    return (unsigned int)v9;
  }
  v10 = XilCommonBuffer_AcquireBuffers(
          (KSPIN_LOCK *)v6,
          *(_DWORD *)(a1 + 108),
          *(_DWORD *)(a1 + 104),
          (int)v3,
          a1,
          846491209);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)(v5 + 40);
    v13 = 32LL * *(unsigned int *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v12 + v13 + 32;
    *(_DWORD *)(v13 + v12 + 40) = 0;
    _InterlockedOr(v24, 0);
    v14 = 0LL;
    v15 = (_QWORD *)*v3;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL);
    while ( v3 != v15 )
    {
      v17 = 2LL * (unsigned int)v14;
      v14 = (unsigned int)(v14 + 1);
      *(_QWORD *)(v16 + 8 * v17) = v15[3];
      *(_WORD *)(v16 + 8 * v17 + 8) = *(_WORD *)(a1 + 116);
      v15 = (_QWORD *)*v15;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    {
      v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       **(_QWORD **)(a1 + 8),
                                       v14,
                                       v16);
      *(_QWORD *)(a1 + 200) = IoAllocateWorkItem(v18);
      KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 1u);
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v19 = *(_QWORD *)(a1 + 8);
    v29 = 0LL;
    v28[1] = 0;
    v20 = *(_DWORD *)(a1 + 32);
    v28[0] = 48;
    pszDest[0] = 0;
    v31 = 16;
    v30 = 0;
    v28[2] = 1024;
    v28[3] = 200;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v19 + 176), v20);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v28, a1 + 16) < 0 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    v21 = *(_QWORD *)(a1 + 8);
    LODWORD(v27) = *(_DWORD *)(a1 + 108);
    LODWORD(v26) = *(_DWORD *)(a1 + 104);
    WPP_RECORDER_SF_qdd(
      *(_QWORD *)(v21 + 72),
      4u,
      9u,
      0x16u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      *(_QWORD *)(a1 + 24),
      v26,
      v27);
    v9 = 0;
    *(_DWORD *)(a1 + 100) = 1;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    LODWORD(v25) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 72),
      2u,
      9u,
      0x15u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      v25);
  }
  if ( v9 < 0 )
    goto LABEL_15;
  return (unsigned int)v9;
}
