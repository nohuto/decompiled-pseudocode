/*
 * XREFs of ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0001728
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0087230 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_dqqss @ 0x1C00460A8 (WPP_RECORDER_SF_dqqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryRemovalRelations(ULONG_PTR a1, PVOID *a2)
{
  __int64 DeviceExtension; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rsi
  int v10; // edx
  __int64 v12; // rax
  void *v13; // rsi
  int v14; // edx
  void *v15; // rcx
  _QWORD **v16; // r12
  int v17; // eax
  _QWORD *v18; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v20; // r14
  unsigned int *v21; // r15
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // rcx
  int v25; // r9d
  _QWORD *i; // r15
  void *v27; // r8
  __int64 v28; // rdx
  void *v29; // rcx
  void *v30; // r13
  __int64 v31; // rcx
  void *v32; // rax
  int v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  SIZE_T Size; // [rsp+A8h] [rbp+20h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v7 = v5[113];
    NewIrql = v6;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 72);
    else
      v8 = 0LL;
    v9 = &unk_1C0067B08;
    if ( v8 )
    {
      v16 = (_QWORD **)(v8 + 48);
      v17 = 0;
      v18 = *(_QWORD **)(v8 + 48);
      while ( v18 != v16 )
      {
        v18 = (_QWORD *)*v18;
        ++v17;
      }
      if ( *a2 )
        v17 += *(_DWORD *)*a2;
      Size = 8LL * (unsigned int)(v17 - 1) + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x44706341u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
      {
        v21 = (unsigned int *)*a2;
        if ( v21 )
        {
          memmove(PoolWithTag + 2, v21 + 2, 8LL * *v21);
          *v20 = *v21;
        }
        else
        {
          memset(PoolWithTag, 0, Size);
        }
        v22 = v5[1];
        v23 = &unk_1C0067B08;
        v24 = &unk_1C0067B08;
        if ( (v22 & 0x200000000000LL) != 0 )
        {
          v23 = (void *)v5[70];
          if ( (v22 & 0x400000000000LL) != 0 )
            v24 = (void *)v5[71];
        }
        v34 = (__int64)v23;
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v23,
          12,
          19,
          (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
          (char)v5,
          v34,
          (__int64)v24);
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
        {
          v27 = &unk_1C0067B08;
          v28 = v5[1];
          v29 = &unk_1C0067B08;
          v30 = *(void **)(*(i - 1) + 736LL);
          if ( (v28 & 0x200000000000LL) != 0 )
          {
            v27 = (void *)v5[70];
            if ( (v28 & 0x400000000000LL) != 0 )
              v29 = (void *)v5[71];
          }
          WPP_RECORDER_SF_dqqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v28,
            (_DWORD)v27,
            v25,
            v33,
            *v20,
            (char)v30,
            (char)v5,
            (__int64)v27,
            (__int64)v29);
          if ( v30 && ObReferenceObjectByPointer(v30, 0, 0LL, 0) >= 0 )
            *(_QWORD *)&v20[2 * (*v20)++ + 2] = v30;
        }
        if ( *a2 )
          ExFreePoolWithTag(*a2, 0);
        *a2 = v20;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
    {
      v31 = v5[1];
      v32 = &unk_1C0067B08;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v9 = (void *)v5[70];
        if ( (v31 & 0x400000000000LL) != 0 )
          v32 = (void *)v5[71];
      }
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        12,
        21,
        (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
        v4,
        (char)v5,
        (__int64)v9,
        (__int64)v32);
    }
    return v4;
  }
  else
  {
    v12 = *(_QWORD *)(DeviceExtension + 8);
    v13 = &unk_1C0067B08;
    v14 = 0;
    v15 = &unk_1C0067B08;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = (void *)v5[70];
      if ( (v12 & 0x400000000000LL) != 0 )
        v15 = (void *)v5[71];
    }
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      12,
      18,
      (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      0,
      (char)v5,
      (__int64)v13,
      (__int64)v15);
    return 3221225485LL;
  }
}
