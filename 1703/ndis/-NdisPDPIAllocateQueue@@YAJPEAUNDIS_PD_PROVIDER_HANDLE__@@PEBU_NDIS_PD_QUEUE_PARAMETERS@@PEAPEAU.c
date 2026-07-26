/*
 * XREFs of ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00EC8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qddS @ 0x1C0075ABC (WPP_SF_qddS.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00EAFF4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00EB1DC (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00EEAE8 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAllocateQueue(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3)
{
  NDIS_PD_QUEUE_TRACKER *v6; // r14
  const wchar_t *v7; // r9
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  bool v11; // zf
  NDIS_PD_QUEUE_TRACKER *PoolWithTag; // rax
  int v13; // eax
  struct NDIS_PD_COUNTER *v15; // [rsp+20h] [rbp-38h]
  struct _NDIS_PD_QUEUE *v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_SF_qddS(0x22u, (__int64)a2, (__int64)a1, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3), v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
      *(_QWORD *)(*((_QWORD *)*a3 + 3) + 40LL) = a1;
    goto LABEL_33;
  }
  *a3 = 0LL;
  if ( *(_BYTE *)a2 == 0x80
    && *((_BYTE *)a2 + 1) == 1
    && *((_WORD *)a2 + 1) >= 0x38u
    && (*((_DWORD *)a2 + 1) & 0xFFFFFFFE) == 0 )
  {
    v9 = *((_DWORD *)a2 + 2);
    v10 = *((_QWORD *)a2 + 6);
    if ( v9 == 1 )
    {
      if ( !v10 )
      {
LABEL_20:
        PoolWithTag = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
        if ( PoolWithTag )
          v6 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(PoolWithTag);
        if ( !v6 )
        {
          v8 = -1073741670;
          goto LABEL_33;
        }
        if ( v10 )
          *((_QWORD *)a2 + 6) = *(_QWORD *)(v10 + 48);
        v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
                *((_QWORD *)a1 + 9),
                a2,
                &v16);
        v8 = v13;
        if ( v10 )
          *((_QWORD *)a2 + 6) = v10;
        if ( v13 >= 0 )
        {
          ndisSetupPDQTracker(v6, v16, a2, a1, (struct NDIS_PD_COUNTER *)v10, 0, *((_BYTE *)a2 + 4) & 1);
          *a3 = v16;
          goto LABEL_33;
        }
        goto LABEL_31;
      }
      v11 = *(_DWORD *)(v10 + 56) == 1;
    }
    else
    {
      if ( v9 != 2 )
        goto LABEL_16;
      if ( !v10 )
        goto LABEL_20;
      v11 = *(_DWORD *)(v10 + 56) == 2;
    }
    if ( !v11 )
    {
LABEL_16:
      v8 = -1073741811;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
  v8 = -1073741811;
LABEL_31:
  if ( v6 )
    NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'((char *)v6);
LABEL_33:
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    LODWORD(v15) = v8;
    WPP_SF_qqd(0x23u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a3, v15);
  }
  return (unsigned int)v8;
}
