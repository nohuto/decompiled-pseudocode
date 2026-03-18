/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C002D78C
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002C608 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00215EC (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Stage_Acquire @ 0x1C002DBF0 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C002ECC0 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C002EF10 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_Initialize @ 0x1C002EFA4 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x1C002F15C (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002F1B4 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002FFC0 (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0030434 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C00306C4 (WPP_RECORDER_SF_DDDqq.c)
 */

bool __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // si
  KSPIN_LOCK *v2; // r15
  int v4; // edi
  KIRQL v5; // al
  __int64 v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  _QWORD *v9; // r13
  _DWORD *v10; // rbp
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdx
  PWDF_DRIVER_GLOBALS v25; // rcx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  __int64 *v32; // rax
  __int64 v33; // rcx
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  int v41; // [rsp+38h] [rbp-40h]
  __int64 v42; // [rsp+40h] [rbp-38h]
  int v43; // [rsp+40h] [rbp-38h]
  __int64 v44; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 360) = 0LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v5;
  if ( *(_DWORD *)(a1 + 348) == v7 )
  {
    v4 = -1073741823;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = *(_QWORD *)(a1 + 56);
      v43 = v7;
      v41 = *(_DWORD *)(a1 + 64);
      v39 = *(_DWORD *)(v8 + 144);
      v37 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v8 + 80),
        5u,
        0xEu,
        0x14u,
        (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
        v37,
        v39,
        v41,
        v43);
    }
    goto LABEL_4;
  }
  v9 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v9 != v9 )
  {
    v10 = *(_DWORD **)(a1 + 376);
    v11 = v10[26];
    if ( v10[28] < v11 )
    {
      if ( *(_DWORD *)(a1 + 332) != 3 )
      {
        v18 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
        *(_QWORD *)(a1 + 360) = v18;
        if ( v18 )
        {
          v20 = *(_QWORD *)(a1 + 48);
          v21 = *(unsigned __int8 *)(v20 + 135);
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v20, v21, 21);
        }
        else
        {
          v4 = -1073741823;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v22 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v22) = 5;
            WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v22, v19, 22);
          }
        }
        goto LABEL_4;
      }
      if ( v10[30] != v10[29] )
      {
        v10[28] = v11;
LABEL_4:
        KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
        return v4 >= 0;
      }
      LOBYTE(v6) = 1;
      Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 376), 3221229568LL, v6);
    }
  }
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v44);
    if ( v4 < 0 )
      break;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v44,
            off_1C004B098);
    Bulk_TransferData_Initialize(a1, v13, v44);
    Bulk_TransferData_DetermineTransferMechanism(v13);
    v14 = Bulk_TransferData_ConfigureBuffer(v13);
    if ( v14 >= 0 )
    {
      v23 = WdfFunctions_01023;
      v24 = *(_QWORD *)(v13 + 24);
      v25 = WdfDriverGlobals;
      *(_DWORD *)(v13 + 64) = 1;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v23 + 3144))(
             v25,
             v24,
             Bulk_WdfEvtRequestCancel);
      if ( v4 >= 0 )
      {
        v28 = Bulk_Stage_Acquire(v13);
        *(_QWORD *)(a1 + 360) = v28;
        if ( !*(_DWORD *)(a1 + 348) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
          if ( *(_DWORD *)(v29 + 24) > 1u )
          {
            v30 = *(unsigned int *)(*(_QWORD *)(v13 + 48) + 64LL);
            if ( (unsigned int)v30 < *(_DWORD *)(v29 + 48) )
              v1 = *(_WORD *)(*(_QWORD *)(v29 + 56) + 2 * v30);
          }
          *(_WORD *)(a1 + 112) = v1;
        }
        v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v31, v28, 26);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
        v32 = *(__int64 **)(a1 + 376);
        if ( (_QWORD *)*v32 != v9 )
          __fastfail(3u);
        *(_QWORD *)v13 = v9;
        *(_QWORD *)(v13 + 8) = v32;
        *v32 = v13;
        *(_QWORD *)(a1 + 376) = v13;
        goto LABEL_4;
      }
      v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v27) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v27,
        v26,
        25,
        v35,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(v13 + 24),
        v4);
      v17 = 3221291008LL;
      *(_DWORD *)(v13 + 64) = 3;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 48);
      v16 = *(unsigned __int8 *)(v15 + 135);
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v15,
        v16,
        24,
        v35,
        v16,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v44,
        v14);
      v17 = 3221229568LL;
    }
    Bulk_Transfer_Complete(a1, v13, v17);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v33 = *(_QWORD *)(a1 + 56);
    LODWORD(v42) = v4;
    LODWORD(v40) = *(_DWORD *)(a1 + 64);
    LODWORD(v38) = *(_DWORD *)(v33 + 144);
    LODWORD(v36) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(v33 + 80),
      5u,
      v12,
      0x17u,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
      v36,
      v38,
      v40,
      v42);
  }
  return v4 >= 0;
}
