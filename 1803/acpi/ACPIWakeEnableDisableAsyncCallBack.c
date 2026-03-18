/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080
 * Callers:
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00413F8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C00420F0 (WPP_RECORDER_SF_LsLLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 a1, int a2, __int64 a3, _QWORD *a4)
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
  void **v14; // rcx
  char v15; // r11
  void *v16; // r10
  __int64 v17; // rax
  int v18; // r9d
  int v19; // r8d
  char v20; // cl
  const char *v21; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 result; // rax
  char v28; // cl
  unsigned int v29; // ebx
  const char *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-A8h]
  void *v34; // [rsp+60h] [rbp-68h]
  _BYTE *v35; // [rsp+60h] [rbp-68h]
  _BYTE *Entry; // [rsp+68h] [rbp-60h]
  _QWORD v37[11]; // [rsp+70h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = (const char *)&unk_1C005B1F0;
  LOBYTE(v6) = 0;
  v8 = 0;
  v9 = (const char *)&unk_1C005B1F0;
  v10 = (const char *)&unk_1C005B1F0;
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
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x11u,
    0x14u,
    (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
    a2,
    v8,
    v9,
    v10);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = (_QWORD *)*a4;
  NewIrql = v12;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v14 = (void **)a4[1], *v14 != a4) )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
  if ( a2 < 0 )
  {
    v34 = &unk_1C005B1F0;
    v15 = 0;
    v16 = &unk_1C005B1F0;
    if ( v4 )
    {
      v17 = *(_QWORD *)(v4 + 8);
      v15 = v4;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v34 = *(void **)(v4 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v16 = *(void **)(v4 + 568);
      }
    }
    v18 = *(_DWORD *)(v4 + 504);
    v19 = *((_DWORD *)a4 + 7);
    v20 = v18 - v19;
    if ( !*((_BYTE *)a4 + 24) )
      v20 = v19 + v18;
    v21 = "-";
    if ( !*((_BYTE *)a4 + 24) )
      v21 = "+";
    WPP_RECORDER_SF_LsLLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v34,
      v19,
      v18,
      v33,
      v18,
      (__int64)v21,
      v19,
      v20,
      v15,
      (__int64)v34,
      (__int64)v16);
    v22 = *(_DWORD *)(v4 + 504);
    v23 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      v24 = v22 - v23;
    else
      v24 = v23 + v22;
    *(_DWORD *)(v4 + 504) = v24;
  }
  v35 = *(_BYTE **)(v4 + 512);
  v25 = v35;
  if ( v35 == (_BYTE *)(v4 + 512) )
    v25 = 0LL;
  Entry = v25;
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  v26 = 0x800000000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v26) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v26);
  }
  ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  result = v4 + 512;
  if ( v35 != (_BYTE *)(v4 + 512) )
  {
    memset(v37, 0, 0x28uLL);
    WORD1(v37[0]) = 1;
    v28 = Entry[24];
    v37[2] = v28 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v28 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v29 = AMLIAsyncEvalObject(a1, 0LL, 1LL, v37, ACPIWakeEnableDisableAsyncCallBack, Entry);
    v30 = (const char *)&unk_1C005B1F0;
    v31 = *((_QWORD *)Entry + 2);
    if ( v31 )
    {
      v6 = *((_QWORD *)Entry + 2);
      v32 = *(_QWORD *)(v31 + 8);
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(v6 + 560);
        if ( (v32 & 0x400000000000LL) != 0 )
          v30 = *(const char **)(v6 + 568);
      }
    }
    result = WPP_RECORDER_SF_Dqss(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               4u,
               0x11u,
               0x16u,
               (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
               v29,
               v6,
               v5,
               v30);
    if ( v29 != 259 )
      return ACPIWakeEnableDisableAsyncCallBack(a1, v29, 0LL, Entry);
  }
  return result;
}
