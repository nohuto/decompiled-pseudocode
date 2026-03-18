/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C001061C (ACPIWakeEnableDisablePciDevice.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C005ACD4 (WPP_RECORDER_SF_LsLLqss.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
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
  char v17; // r11
  void *v18; // r10
  __int64 v19; // rax
  char v20; // r9
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  const char *v24; // rax
  int v25; // eax
  char v26; // cl
  unsigned int v27; // ebx
  const char *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-A8h]
  char v32; // [rsp+60h] [rbp-68h]
  void *v33; // [rsp+68h] [rbp-60h]
  _BYTE *Entry; // [rsp+70h] [rbp-58h]
  _QWORD v35[10]; // [rsp+78h] [rbp-50h] BYREF
  KIRQL v39; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = (const char *)&unk_1C0067B08;
  LOBYTE(v6) = 0;
  v32 = 0;
  v8 = 0;
  Entry = 0LL;
  v9 = (const char *)&unk_1C0067B08;
  v10 = (const char *)&unk_1C0067B08;
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
  v39 = v12;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v15 = (void **)a4[1], *v15 != a4) )
    __fastfail(3u);
  *v15 = v13;
  v13[1] = v15;
  if ( a2 < 0 )
  {
    v33 = &unk_1C0067B08;
    v17 = 0;
    v18 = &unk_1C0067B08;
    if ( v4 )
    {
      v19 = *(_QWORD *)(v4 + 8);
      v17 = v4;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v33 = *(void **)(v4 + 560);
        if ( (v19 & 0x400000000000LL) != 0 )
          v18 = *(void **)(v4 + 568);
      }
    }
    v20 = *((_BYTE *)a4 + 24);
    v21 = *(_DWORD *)(v4 + 504);
    v22 = *((_DWORD *)a4 + 7);
    if ( v20 )
      v23 = v21 - v22;
    else
      v23 = v22 + v21;
    v24 = "-";
    if ( !v20 )
      v24 = "+";
    WPP_RECORDER_SF_LsLLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      v23,
      (_DWORD)v33,
      v31,
      v21,
      (__int64)v24,
      v22,
      v23,
      v17,
      (__int64)v33,
      (__int64)v18);
    v25 = *((_DWORD *)a4 + 7);
    v14 = v39;
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 504) -= v25;
    else
      *(_DWORD *)(v4 + 504) += v25;
  }
  v16 = (_QWORD *)(v4 + 512);
  if ( (_QWORD *)*v16 != v16 )
  {
    Entry = (_BYTE *)*v16;
    v32 = 1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v14);
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
    ACPIWakeEnableDisablePciDevice(v4, 1);
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v32 )
  {
    memset(v35, 0, 0x28uLL);
    WORD1(v35[0]) = 1;
    v26 = Entry[24];
    v35[2] = v26 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v26 )
      ACPIWakeEnableDisablePciDevice(v4, 0);
    v27 = AMLIAsyncEvalObject(a1, 0LL, 1u, v35, ACPIWakeEnableDisableAsyncCallBack, Entry);
    v28 = (const char *)&unk_1C0067B08;
    v29 = *((_QWORD *)Entry + 2);
    if ( v29 )
    {
      v6 = *((_QWORD *)Entry + 2);
      v30 = *(_QWORD *)(v29 + 8);
      if ( (v30 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(v6 + 560);
        if ( (v30 & 0x400000000000LL) != 0 )
          v28 = *(const char **)(v6 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x16u,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v27,
      v6,
      v5,
      v28);
    if ( v27 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v27, 0LL, Entry);
  }
}
