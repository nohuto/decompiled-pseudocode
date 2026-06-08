/*
 * XREFs of InitPepPerfStates @ 0x1C0032E54
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000829C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0027C08 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C002E018 (InitPepProcessorDomain.c)
 *     PepNotifyQueryDiscretePerfStates @ 0x1C00333F4 (PepNotifyQueryDiscretePerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0033468 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0033554 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rsi
  _DWORD *v3; // r15
  unsigned __int16 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned int *v18; // r13
  unsigned int *v19; // r12
  unsigned int v20; // ecx
  unsigned __int8 v21; // al
  unsigned int v22; // ebx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  char v25; // r10
  char v26; // r11
  char v27; // bl
  char v28; // r12
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned __int16 v33; // r9
  unsigned __int16 v34; // r9
  unsigned __int16 v35; // r9
  unsigned int v36; // ecx
  int v37; // r8d
  int v38; // edx
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  int v42; // [rsp+88h] [rbp+10h] BYREF
  int v43; // [rsp+90h] [rbp+18h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)(a1 + 1105) )
  {
    v4 = 10;
LABEL_3:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v4,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids);
    v5 = -1073741823;
    goto LABEL_81;
  }
  v6 = *(_DWORD *)(a1 + 1096);
  if ( !v6 )
  {
    v4 = 11;
    goto LABEL_3;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1152) = WorkItem;
  if ( !WorkItem )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xCu,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids);
LABEL_8:
    v5 = -1073741670;
    goto LABEL_81;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 56, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_8;
  memset(PoolWithTag, 0, 8 * v6 + 56);
  v9 = v2 + 14;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v6, v2 + 14);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 13;
LABEL_12:
    v12 = 3;
LABEL_13:
    LODWORD(v40) = FeedbackCounters;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3u,
      v11,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v40);
    goto LABEL_81;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  do
  {
    if ( !v9[1] )
    {
      v35 = 14;
LABEL_77:
      LODWORD(v40) = v13;
LABEL_78:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v35,
        (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
        v40);
      goto LABEL_79;
    }
    v16 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      v34 = 15;
LABEL_74:
      LODWORD(v41) = (*v9 >> 1) & 3;
      LODWORD(v40) = v13;
LABEL_75:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v34,
        (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
        v40,
        v41);
      goto LABEL_79;
    }
    v17 = (v16 >> 3) & 0xF;
    if ( v17 > 1 )
    {
      v34 = 16;
      goto LABEL_74;
    }
    if ( (v16 & 0x81) == 0x80 )
    {
      v35 = 17;
      goto LABEL_77;
    }
    if ( v16 >= 0x100 )
    {
      v35 = 18;
      goto LABEL_77;
    }
    if ( !v17 )
    {
      if ( v15 != -1 )
        goto LABEL_26;
      v15 = v13;
    }
    if ( v17 == 1 && v14 == -1 )
      v14 = v13;
LABEL_26:
    ++v13;
    v9 += 2;
  }
  while ( v13 < v6 );
  if ( v15 == -1 )
  {
    v5 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids);
    goto LABEL_81;
  }
  v18 = v2 + 1;
  v19 = v2 + 3;
  v2[4] = v2[2 * v15 + 15];
  v2[13] = v14;
  v2[12] = v15;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v43,
                       (__int64)&v42);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 20;
    goto LABEL_12;
  }
  if ( *v2 < *v18 || (v20 = v2[2], *v18 < v20) || v20 < *v19 || !*v19 )
  {
    v33 = 21;
    goto LABEL_67;
  }
  v21 = *(_BYTE *)(a1 + 1104);
  if ( !v21 )
    goto LABEL_62;
  v22 = 24 * v21;
  v23 = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x72637250u);
  v3 = v23;
  if ( !v23 )
    goto LABEL_8;
  memset(v23, 0, v22);
  LOBYTE(v24) = *(_BYTE *)(a1 + 1104);
  FeedbackCounters = PepNotifyQueryDiscretePerfStates(a1, v24, v3);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 22;
    goto LABEL_12;
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0LL;
  if ( !*(_BYTE *)(a1 + 1104) )
  {
LABEL_66:
    v33 = 26;
LABEL_67:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v33,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids);
LABEL_79:
    v5 = -1073741811;
    goto LABEL_81;
  }
  do
  {
    v3[6 * v29 + 2] = 100 * v3[6 * v29] / *v18;
    v30 = v2[3];
    v31 = v3[6 * v29];
    if ( v31 < v30 || v31 > *v2 )
    {
      v35 = 23;
      goto LABEL_65;
    }
    if ( (_DWORD)v29 && v31 >= v3[6 * (unsigned int)(v29 - 1)] )
    {
      v34 = 24;
      LODWORD(v41) = v29 - 1;
      LODWORD(v40) = v29;
      goto LABEL_75;
    }
    v18 = v2 + 1;
    if ( v31 == *v2 )
      v25 = 1;
    if ( v31 == v30 )
      v26 = 1;
    if ( v31 == v2[2] )
      v27 = 1;
    if ( v31 == *v18 )
    {
      v28 = 1;
      if ( v3[6 * v29 + 1] != v2[4] )
      {
        v35 = 25;
LABEL_65:
        LODWORD(v40) = v29;
        goto LABEL_78;
      }
    }
    v32 = *(unsigned __int8 *)(a1 + 1104);
    v29 = (unsigned int)(v29 + 1);
  }
  while ( (unsigned int)v29 < v32 );
  if ( !v25 )
    goto LABEL_66;
  if ( !v26 )
  {
    v33 = 27;
    goto LABEL_67;
  }
  if ( !v27 )
  {
    v33 = 28;
    goto LABEL_67;
  }
  if ( !v28 )
  {
    v33 = 29;
    goto LABEL_67;
  }
  *((_BYTE *)v2 + 32) = v32;
  v19 = v2 + 3;
  *((_QWORD *)v2 + 5) = v3;
LABEL_62:
  v36 = *v18;
  v37 = v42;
  v2[5] = 100 * *v2 / *v18;
  v2[6] = 100 * v2[2] / v36;
  v38 = v43;
  v2[7] = 100 * *v19 / v36;
  FeedbackCounters = InitPepProcessorDomain(a1, v38, v37);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 30;
    v12 = 2;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1160) = v2;
  v3 = 0LL;
  v2 = 0LL;
  v5 = 0;
  ProcLibTracePepPerfCapabilities(a1, 0);
LABEL_81:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return v5;
}
