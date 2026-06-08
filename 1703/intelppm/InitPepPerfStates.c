/*
 * XREFs of InitPepPerfStates @ 0x1C002FC10
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008350 (WPP_RECORDER_SF_d.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00244E0 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C002A788 (InitPepProcessorDomain.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002FF80 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003006C (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rdi
  unsigned __int16 v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  _DWORD *v8; // r15
  int FeedbackCounters; // eax
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int *v16; // r12
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  int v21; // r8d
  int v22; // edx
  __int64 v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0LL;
  if ( !*(_BYTE *)(a1 + 1104) )
  {
    v3 = 10;
LABEL_3:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v3,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
    v4 = -1073741823;
    goto LABEL_40;
  }
  v5 = *(_DWORD *)(a1 + 1096);
  if ( !v5 )
  {
    v3 = 11;
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
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
LABEL_8:
    v4 = -1073741670;
    goto LABEL_40;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v5 + 40, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_8;
  memset(PoolWithTag, 0, 8 * v5 + 40);
  v8 = v2 + 10;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v5, v2 + 10);
  v4 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v10 = 13;
LABEL_12:
    v11 = 3;
LABEL_13:
    LODWORD(v24) = FeedbackCounters;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      3u,
      v10,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
      v24);
    goto LABEL_40;
  }
  v12 = 0;
  v13 = -1;
  v14 = -1;
  do
  {
    if ( *v8 >= 0x80u || !v8[1] || (*v8 & 6u) > 2 || (v15 = *v8 & 0x78, v15 > 8) )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xEu,
        (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
        v12);
      goto LABEL_38;
    }
    if ( !v15 && v14 == -1 )
      v14 = v12;
    if ( v15 == 8 && v13 == -1 )
      v13 = v12;
    ++v12;
    v8 += 2;
  }
  while ( v12 < v5 );
  if ( v14 == -1 )
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xFu,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
    goto LABEL_40;
  }
  v16 = v2 + 3;
  v2[4] = v2[2 * v14 + 11];
  v2[8] = v14;
  v2[9] = v13;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v26,
                       (__int64)&v25);
  v4 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v10 = 16;
    goto LABEL_12;
  }
  v17 = v2[1];
  if ( *v2 < v17 || (v18 = v2[2], v17 < v18) || (v19 = *v16, v18 < *v16) || !v19 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x11u,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
LABEL_38:
    v4 = -1073741811;
    goto LABEL_40;
  }
  v2[5] = 100 * *v2 / v17;
  v2[6] = 100 * v18 / v17;
  v20 = 100 * v19;
  v21 = v25;
  v22 = v26;
  v2[7] = v20 / v17;
  FeedbackCounters = InitPepProcessorDomain(a1, v22, v21);
  v4 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v10 = 18;
    v11 = 2;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1160) = v2;
  v4 = 0;
  v2 = 0LL;
  ProcLibTracePepPerfCapabilities(a1, 0);
LABEL_40:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return v4;
}
