/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C002FCB0
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002EB38 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0023C5C (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Stage_Acquire @ 0x1C0030108 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C0031200 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C003144C (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_Initialize @ 0x1C00314E0 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x1C0031698 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C00316F0 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C00324F0 (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0032964 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0032BF4 (WPP_RECORDER_SF_DDDqq.c)
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
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  PWDF_DRIVER_GLOBALS v24; // rcx
  int v25; // r8d
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 *v34; // rax
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
        (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
        v37,
        v39,
        v41,
        v43);
    }
    goto LABEL_4;
  }
  v9 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v9 == v9 || (v10 = *(_DWORD **)(a1 + 376), v11 = v10[26], v10[28] >= v11) )
  {
LABEL_10:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v44);
      if ( v4 < 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v28 = *(_QWORD *)(a1 + 56);
          LODWORD(v42) = v4;
          LODWORD(v40) = *(_DWORD *)(a1 + 64);
          LODWORD(v38) = *(_DWORD *)(v28 + 144);
          LODWORD(v36) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDDd(
            *(_QWORD *)(v28 + 80),
            5u,
            v27,
            0x17u,
            (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
            v36,
            v38,
            v40,
            v42);
        }
        return v4 >= 0;
      }
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v44,
              off_1C004E098);
      Bulk_TransferData_Initialize(a1, v17, v44);
      Bulk_TransferData_DetermineTransferMechanism(v17);
      v18 = Bulk_TransferData_ConfigureBuffer(v17);
      if ( v18 >= 0 )
      {
        v22 = WdfFunctions_01015;
        v23 = *(_QWORD *)(v17 + 24);
        v24 = WdfDriverGlobals;
        *(_DWORD *)(v17 + 64) = 1;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v22 + 3144))(
               v24,
               v23,
               Bulk_WdfEvtRequestCancel);
        if ( v4 >= 0 )
        {
          v30 = Bulk_Stage_Acquire(v17);
          *(_QWORD *)(a1 + 360) = v30;
          if ( !*(_DWORD *)(a1 + 348) )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
            if ( *(_DWORD *)(v31 + 24) > 1u )
            {
              v32 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 64LL);
              if ( (unsigned int)v32 < *(_DWORD *)(v31 + 48) )
                v1 = *(_WORD *)(*(_QWORD *)(v31 + 56) + 2 * v32);
            }
            *(_WORD *)(a1 + 112) = v1;
          }
          v33 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v33) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v33, v30, 26);
          *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
          v34 = *(__int64 **)(a1 + 376);
          if ( (_QWORD *)*v34 != v9 )
            __fastfail(3u);
          *(_QWORD *)v17 = v9;
          *(_QWORD *)(v17 + 8) = v34;
          *v34 = v17;
          *(_QWORD *)(a1 + 376) = v17;
          goto LABEL_4;
        }
        v26 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v26,
          v25,
          25,
          v35,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          *(_QWORD *)(v17 + 24),
          v4);
        v21 = 3221291008LL;
        *(_DWORD *)(v17 + 64) = 3;
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(unsigned __int8 *)(v19 + 135);
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v19,
          v20,
          24,
          v35,
          v20,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          v44,
          v18);
        v21 = 3221229568LL;
      }
      Bulk_Transfer_Complete(a1, v17, v21);
    }
  }
  if ( *(_DWORD *)(a1 + 332) != 3 )
  {
    v12 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
    *(_QWORD *)(a1 + 360) = v12;
    if ( v12 )
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(unsigned __int8 *)(v14 + 135);
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v14, v15, 21);
    }
    else
    {
      v4 = -1073741823;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v13, 22);
      }
    }
    goto LABEL_4;
  }
  if ( v10[30] == v10[29] )
  {
    LOBYTE(v6) = 1;
    Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 376), 3221229568LL, v6);
    goto LABEL_10;
  }
  v10[28] = v11;
LABEL_4:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
