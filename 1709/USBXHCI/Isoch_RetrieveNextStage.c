/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C0029D28
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0028A68 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0023D74 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026EBC (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00274F0 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Acquire @ 0x1C002A3B4 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferData_Initialize @ 0x1C002B924 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C002BBAC (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C002BD98 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C002BE74 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002BF2C (Isoch_Transfer_CompleteCancelable.c)
 */

bool __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int16 v3; // si
  int v4; // ebp
  KIRQL v5; // al
  bool v6; // zf
  _QWORD *v7; // r13
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  PWDF_DRIVER_GLOBALS v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+38h] [rbp-40h]
  __int64 v40; // [rsp+40h] [rbp-38h]
  __int64 v41; // [rsp+80h] [rbp+8h] BYREF
  __int64 v42; // [rsp+88h] [rbp+10h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = 0;
  v4 = -1073741823;
  *(_QWORD *)(a1 + 368) = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v6 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x34u,
        (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_4;
  }
  v7 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_16;
  v6 = *(_DWORD *)(a1 + 336) == 3;
  v8 = *(_QWORD *)(a1 + 392);
  v42 = v8;
  if ( v6 )
  {
    if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
    {
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        0xEu,
        0x35u,
        (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, -1, -1073737728, 0, 0);
LABEL_16:
      KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 1264))(
                 WdfDriverGlobals,
                 *(_QWORD *)(a1 + 72),
                 &v41);
          if ( v4 < 0 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v29 = *(_QWORD *)(a1 + 56);
              LODWORD(v39) = v4;
              LODWORD(v38) = *(_DWORD *)(v29 + 144);
              LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(v29 + 80),
                5u,
                0xEu,
                0x39u,
                (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
                v37,
                v38,
                v39);
            }
            if ( !*(_DWORD *)(a1 + 376) )
            {
              v30 = *(_QWORD *)(a1 + 56);
              LODWORD(v38) = *(_DWORD *)(v30 + 144);
              LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(v30 + 80),
                3u,
                0xEu,
                0x3Au,
                (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
                v37,
                v38);
            }
            return v4 >= 0;
          }
          v12 = Isoch_TransferData_Initialize(a1, v41, &v42);
          if ( v12 >= 0 )
            break;
          v13 = *(_QWORD *)(a1 + 56);
          LODWORD(v40) = v12;
          LODWORD(v38) = *(_DWORD *)(v13 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(v13 + 80),
            2u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x3Bu,
            (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
            v37,
            v38,
            v41,
            v40);
          v14 = v42;
          v15 = -1073737728;
LABEL_33:
          v19 = -1;
LABEL_34:
          Isoch_Transfer_Complete(a1, v14, v19, v15, 0);
        }
        v16 = v42;
        v17 = Isoch_TransferUrb_Initialize(a1, v42);
        if ( v17 < 0 )
        {
          v18 = *(_QWORD *)(a1 + 56);
          LODWORD(v40) = v17;
          LODWORD(v38) = *(_DWORD *)(v18 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(v18 + 80),
            2u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x3Cu,
            (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
            v37,
            v38,
            v41,
            v40);
          v15 = -1073739264;
          v19 = -1073414144;
          v14 = v16;
          goto LABEL_34;
        }
        Isoch_TransferUrb_MarkLatePackets(a1, v16);
        if ( *(_DWORD *)(*(_QWORD *)(v16 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v16 + 96) - 1) + 148) == -1073414144 )
        {
          v21 = *(_QWORD *)(a1 + 56);
          LODWORD(v38) = *(_DWORD *)(v21 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(v21 + 80),
            4u,
            0xEu,
            0x3Du,
            (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
            v37,
            v38);
          v22 = 0;
          v23 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v16 + 80) )
          {
            v25 = WdfFunctions_01015;
            v26 = WdfDriverGlobals;
            *(_DWORD *)(v16 + 64) = 1;
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(v25 + 3144))(
                   v26,
                   *(_QWORD *)(v16 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v4 >= 0 )
            {
              v32 = Isoch_Stage_Acquire(v16);
              *(_QWORD *)(a1 + 368) = v32;
              if ( !*(_DWORD *)(a1 + 376) )
              {
                v33 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                if ( *(_DWORD *)(v33 + 24) > 1u )
                {
                  v34 = *(unsigned int *)(*(_QWORD *)(v16 + 48) + 64LL);
                  if ( (unsigned int)v34 < *(_DWORD *)(v33 + 48) )
                    v3 = *(_WORD *)(*(_QWORD *)(v33 + 56) + 2 * v34);
                }
                *(_WORD *)(a1 + 112) = v3;
              }
              v35 = *(_QWORD *)(a1 + 56);
              LODWORD(v38) = *(_DWORD *)(v35 + 144);
              LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(v35 + 80),
                4u,
                v32,
                0x40u,
                (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
                v37,
                v38,
                *(_QWORD *)(v16 + 24),
                v32);
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v1);
              v36 = *(_QWORD **)(a1 + 392);
              if ( (_QWORD *)*v36 != v7 )
                __fastfail(3u);
              *(_QWORD *)v16 = v7;
              *(_QWORD *)(v16 + 8) = v36;
              *v36 = v16;
              *(_QWORD *)(a1 + 392) = v16;
              goto LABEL_4;
            }
            v28 = *(_QWORD *)(a1 + 56);
            LODWORD(v40) = v4;
            LODWORD(v38) = *(_DWORD *)(v28 + 144);
            LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v28 + 80),
              4u,
              v27,
              0x3Fu,
              (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
              v37,
              v38,
              *(_QWORD *)(v16 + 24),
              v40);
            v15 = -1073676288;
            *(_DWORD *)(v16 + 64) = 3;
            v14 = v16;
            goto LABEL_33;
          }
          v24 = *(_QWORD *)(a1 + 56);
          LODWORD(v38) = *(_DWORD *)(v24 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDq(
            *(_QWORD *)(v24 + 80),
            4u,
            v20,
            0x3Eu,
            (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
            v37,
            v38,
            v41);
          v22 = -1;
          v23 = -1;
        }
        Isoch_Transfer_Complete(a1, v16, v23, v22, 1);
      }
    }
    *(_DWORD *)(v8 + 108) = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 104);
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)(v8 + 104) + *(_DWORD *)(v8 + 108)) >= *(_DWORD *)(v8 + 96) )
      goto LABEL_16;
    Isoch_TransferUrb_MarkLatePackets(a1, v8);
    v9 = *(_DWORD *)(v8 + 96);
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 48) + 12LL * (unsigned int)(v9 - 1) + 148) != -1073414144 )
    {
      v10 = Isoch_Stage_Acquire(v8);
      *(_QWORD *)(a1 + 368) = v10;
      if ( v10 )
      {
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x37u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v8 + 24),
          v10);
        v4 = 0;
      }
      else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          v11,
          0x38u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v8 + 24));
      }
      goto LABEL_4;
    }
    if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x36u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, 0, 0, 1, 1);
      goto LABEL_16;
    }
    *(_DWORD *)(v8 + 108) = v9 - *(_DWORD *)(v8 + 104);
  }
LABEL_4:
  KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
