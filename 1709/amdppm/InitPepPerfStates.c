/*
 * XREFs of InitPepPerfStates @ 0x1C002C5E8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001F1C (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00220C0 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002CC38 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002CD24 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // r14
  _DWORD *v3; // r12
  unsigned __int16 v4; // r9
  int v5; // ebx
  unsigned int v6; // edi
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  int v14; // r10d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int *v18; // r13
  unsigned int *v19; // rdi
  unsigned __int16 v20; // r9
  unsigned int v21; // ecx
  unsigned __int8 v22; // al
  unsigned int v23; // ebx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  char v27; // cl
  char v28; // r10
  char v29; // r11
  char v30; // bl
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned __int16 v35; // r9
  unsigned __int16 v36; // r9
  unsigned int v37; // r8d
  _DWORD *v38; // rax
  __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  _QWORD v42[11]; // [rsp+40h] [rbp-58h] BYREF
  char v43; // [rsp+A0h] [rbp+8h]
  int v44; // [rsp+B0h] [rbp+18h] BYREF
  int v45; // [rsp+B8h] [rbp+20h] BYREF

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
    goto LABEL_86;
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
    goto LABEL_86;
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
    LODWORD(v40) = FeedbackCounters;
LABEL_13:
    v12 = 3;
LABEL_14:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3u,
      v11,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v40);
    goto LABEL_86;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  do
  {
    if ( !v9[1] )
    {
      v20 = 14;
LABEL_82:
      LODWORD(v40) = v13;
LABEL_83:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v20,
        (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
        v40);
      goto LABEL_84;
    }
    v16 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      v36 = 15;
LABEL_79:
      LODWORD(v41) = (*v9 >> 1) & 3;
      LODWORD(v40) = v13;
LABEL_80:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v36,
        (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
        v40,
        v41);
      goto LABEL_84;
    }
    v17 = (v16 >> 3) & 0xF;
    if ( v17 > 1 )
    {
      v36 = 16;
      goto LABEL_79;
    }
    if ( (v16 & 0x80u) != 0 && (v16 & 1) == 0 )
    {
      v20 = 17;
      goto LABEL_82;
    }
    if ( v16 >= 0x100 )
    {
      v20 = 18;
      goto LABEL_82;
    }
    if ( !v17 && v15 == -1 )
      v15 = v13;
    if ( (v16 & 0x78) == 8 && v14 == -1 )
      v14 = v13;
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
    goto LABEL_86;
  }
  v18 = v2 + 1;
  v19 = v2 + 3;
  v2[4] = v2[2 * v15 + 15];
  v2[12] = v15;
  v2[13] = v14;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v44,
                       (__int64)&v45);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 20;
    goto LABEL_12;
  }
  if ( *v2 < *v18 || (v21 = v2[2], *v18 < v21) || v21 < *v19 || !*v19 )
  {
    v35 = 21;
    goto LABEL_73;
  }
  v22 = *(_BYTE *)(a1 + 1104);
  if ( !v22 )
    goto LABEL_68;
  v23 = 24 * v22;
  v24 = ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x72637250u);
  v3 = v24;
  if ( !v24 )
    goto LABEL_8;
  memset(v24, 0, v23);
  v25 = *(_QWORD *)(a1 + 1088);
  v42[1] = v3;
  v42[0] = 0LL;
  LODWORD(v42[0]) = *(unsigned __int8 *)(a1 + 1104);
  v26 = PoFxProcessorNotification(v25, 41LL, v42);
  v5 = v26;
  if ( v26 < 0 )
  {
    LODWORD(v40) = v26;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x22u,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v40);
  }
  if ( v5 < 0 )
  {
    v11 = 22;
    LODWORD(v40) = v5;
    goto LABEL_13;
  }
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v43 = 0;
  v30 = 0;
  v31 = 0LL;
  if ( !*(_BYTE *)(a1 + 1104) )
  {
LABEL_72:
    v35 = 26;
LABEL_73:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v35,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids);
LABEL_84:
    v5 = -1073741811;
    goto LABEL_86;
  }
  do
  {
    v3[6 * v31 + 2] = 100 * v3[6 * v31] / *v18;
    v32 = v2[3];
    v33 = v3[6 * v31];
    if ( v33 < v32 || v33 > *v2 )
    {
      v20 = 23;
      goto LABEL_71;
    }
    if ( (_DWORD)v31 )
    {
      if ( v33 >= v3[6 * (unsigned int)(v31 - 1)] )
      {
        v36 = 24;
        LODWORD(v41) = v31 - 1;
        LODWORD(v40) = v31;
        goto LABEL_80;
      }
      v27 = v43;
    }
    v18 = v2 + 1;
    if ( v33 == *v2 )
      v28 = 1;
    if ( v33 == v32 )
      v29 = 1;
    if ( v33 == v2[2] )
      v30 = 1;
    if ( v33 == *v18 )
    {
      v27 = 1;
      v43 = 1;
      if ( v3[6 * v31 + 1] != v2[4] )
      {
        v20 = 25;
LABEL_71:
        LODWORD(v40) = v31;
        goto LABEL_83;
      }
    }
    v34 = *(unsigned __int8 *)(a1 + 1104);
    v31 = (unsigned int)(v31 + 1);
  }
  while ( (unsigned int)v31 < v34 );
  if ( !v28 )
    goto LABEL_72;
  if ( !v29 )
  {
    v35 = 27;
    goto LABEL_73;
  }
  if ( !v30 )
  {
    v35 = 28;
    goto LABEL_73;
  }
  if ( !v27 )
  {
    v35 = 29;
    goto LABEL_73;
  }
  *((_BYTE *)v2 + 32) = v34;
  *((_QWORD *)v2 + 5) = v3;
LABEL_68:
  v37 = *v18;
  v2[5] = 100 * *v2 / *v18;
  v2[6] = 100 * v2[2] / v37;
  v2[7] = 100 * v2[3] / v37;
  v38 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
  if ( !v38 )
  {
    v5 = -1073741670;
    v11 = 30;
    LODWORD(v40) = -1073741670;
    v12 = 2;
    goto LABEL_14;
  }
  *v38 = 1;
  v38[2] = 0;
  v38[1] = 5;
  v38[3] = v44;
  v38[5] = v45;
  v38[4] = 1;
  *(_QWORD *)(a1 + 1176) = v38;
  *(_QWORD *)(a1 + 1160) = v2;
  v3 = 0LL;
  v2 = 0LL;
  v5 = 0;
  ProcLibTracePepPerfCapabilities(a1, 0);
LABEL_86:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
