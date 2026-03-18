/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002073C (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020A70 (ExFreeToNPagedLookasideList.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002AF08 (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C005A310 (WPP_RECORDER_SF_LsLLqss.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  const char *v5; // rbp
  __int64 v6; // rdi
  char v8; // r11
  const char *v9; // rcx
  const char *v10; // r10
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *v13; // rdx
  KIRQL v14; // r8
  void **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  char v18; // r11
  void *v19; // r10
  __int64 v20; // rax
  char v21; // r9
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  const char *v25; // rax
  int v26; // eax
  char v27; // cl
  unsigned int v28; // ebx
  const char *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-A8h]
  char v33; // [rsp+60h] [rbp-68h]
  void *v34; // [rsp+68h] [rbp-60h]
  _QWORD *v35; // [rsp+70h] [rbp-58h]
  _QWORD v36[10]; // [rsp+78h] [rbp-50h] BYREF
  KIRQL v40; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = (const char *)&unk_1C0066CD0;
  LOBYTE(v6) = 0;
  v33 = 0;
  v8 = 0;
  v35 = 0LL;
  v9 = (const char *)&unk_1C0066CD0;
  v10 = (const char *)&unk_1C0066CD0;
  if ( v4 )
  {
    v11 = *(_QWORD *)(v4 + 8);
    v8 = a4[2];
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v4 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v4 + 568);
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x11u,
    0x14u,
    (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
    a2,
    v8,
    v9,
    v10);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = (_QWORD *)*a4;
  v14 = v12;
  v15 = (void **)a4[1];
  v40 = v12;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || *v15 != a4 )
    __fastfail(3u);
  *v15 = v13;
  v13[1] = v15;
  if ( a2 < 0 )
  {
    v34 = &unk_1C0066CD0;
    v18 = 0;
    v19 = &unk_1C0066CD0;
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 8);
      v18 = v4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v34 = *(void **)(v4 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(void **)(v4 + 568);
      }
    }
    v21 = *((_BYTE *)a4 + 24);
    v22 = *(_DWORD *)(v4 + 504);
    v23 = *((_DWORD *)a4 + 7);
    if ( v21 )
      v24 = v22 - v23;
    else
      v24 = v23 + v22;
    v25 = "-";
    if ( !v21 )
      v25 = "+";
    WPP_RECORDER_SF_LsLLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v23,
      v24,
      (_DWORD)v34,
      v32,
      v22,
      (__int64)v25,
      v23,
      v24,
      v18,
      (__int64)v34,
      (__int64)v19);
    v26 = *((_DWORD *)a4 + 7);
    v14 = v40;
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 504) -= v26;
    else
      *(_DWORD *)(v4 + 504) += v26;
  }
  v16 = (_QWORD *)(v4 + 512);
  if ( (_QWORD *)*v16 != v16 )
  {
    v35 = (_QWORD *)*v16;
    v33 = 1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v14);
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v17) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v17);
  }
  ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v33 )
  {
    memset(v36, 0, 0x28uLL);
    WORD1(v36[0]) = 1;
    v27 = *((_BYTE *)v35 + 24);
    v36[2] = v27 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v27 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v28 = AMLIAsyncEvalObject(a1, 0LL, 1LL, v36, ACPIWakeEnableDisableAsyncCallBack, v35);
    v29 = (const char *)&unk_1C0066CD0;
    v30 = v35[2];
    if ( v30 )
    {
      v6 = v35[2];
      v31 = *(_QWORD *)(v30 + 8);
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(v6 + 560);
        if ( (v31 & 0x400000000000LL) != 0 )
          v29 = *(const char **)(v6 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x16u,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v28,
      v6,
      v5,
      v29);
    if ( v28 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v28, 0LL, v35);
  }
}
