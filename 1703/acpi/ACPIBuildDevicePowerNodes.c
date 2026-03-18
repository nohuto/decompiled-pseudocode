/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0028DBC
 * Callers:
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000B3A0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0028544 (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C00456F0 (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F9D8 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004FB20 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C005AC54 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r13
  unsigned int v8; // r14d
  unsigned int v9; // esi
  char *PoolWithTag; // rax
  char *v12; // r15
  unsigned int i; // r12d
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdx
  volatile signed __int32 *v17; // r15
  __int64 v18; // rax
  char *v19; // r14
  _QWORD **v20; // r9
  _QWORD *j; // r8
  __int64 v22; // rbp
  __int64 v23; // r10
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 **v29; // rdx
  const char *v30; // rax
  const char *v31; // r10
  __int64 v32; // r8
  void *v33; // r8
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  volatile signed __int32 *v35; // [rsp+50h] [rbp-48h] BYREF
  char *v36; // [rsp+58h] [rbp-40h]
  int v39; // [rsp+B8h] [rbp+20h]

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v39 = 0;
  v8 = 0;
  v9 = *v4;
  if ( !a4 )
  {
    if ( v9 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *v4);
    v8 = 2;
    v9 -= 2;
    v39 = 2;
  }
  if ( v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v9, 0x50706341u);
    v36 = PoolWithTag;
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v9);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      BugCheckParameter2[v6 + 45] = v12;
      for ( i = 0; i < v9; ++i )
      {
        v35 = 0LL;
        v14 = 5LL * v8;
        v15 = *(_QWORD *)(a3 + 32);
        if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v15 + 8 * v14 + 40), BugCheckParameter3, &v35) < 0 )
        {
          v33 = &unk_1C0066CD0;
          if ( BugCheckParameter2 )
          {
            v16 = BugCheckParameter2[1];
            if ( (v16 & 0x200000000000LL) != 0 && (v16 & 0x400000000000LL) != 0 )
              v33 = (void *)BugCheckParameter2[71];
          }
          WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v16, (_DWORD)v33, 13);
          KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v17 = v35;
        if ( !v35 || *(_WORD *)(*(_QWORD *)v35 + 66LL) != 11 )
        {
          v30 = (const char *)&unk_1C0066CD0;
          v31 = (const char *)&unk_1C0066CD0;
          if ( BugCheckParameter2 )
          {
            v32 = BugCheckParameter2[1];
            LOBYTE(v5) = (_BYTE)BugCheckParameter2;
            if ( (v32 & 0x200000000000LL) != 0 )
            {
              v30 = (const char *)BugCheckParameter2[70];
              if ( (v32 & 0x400000000000LL) != 0 )
                v31 = (const char *)BugCheckParameter2[71];
            }
          }
          WPP_RECORDER_SF_sqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xAu,
            0xEu,
            BugCheckParameter4,
            *(const char **)(v15 + 8 * v14 + 40),
            v5,
            v30,
            v31);
          KeBugCheckEx(
            0xA5u,
            0x12uLL,
            (ULONG_PTR)BugCheckParameter2,
            BugCheckParameter3,
            *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v18 = *(_QWORD *)(*(_QWORD *)v35 + 104LL);
        v19 = &v36[56 * i];
        *((_QWORD *)v19 + 1) = v18;
        *((_DWORD *)v19 + 4) = *(_DWORD *)(v18 + 44);
        *((_QWORD *)v19 + 4) = BugCheckParameter2;
        *((_DWORD *)v19 + 5) = v6;
        if ( !(_DWORD)v6 )
          v19[24] = 1;
        if ( (_DWORD)v6 == 1 && (BugCheckParameter2[1] & 0x400000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v19 + 1) + 16LL), 0x220uLL);
          v17 = v35;
        }
        v20 = (_QWORD **)(*((_QWORD *)v19 + 1) + 48LL);
        for ( j = *v20; j != v20; j = (_QWORD *)*j )
        {
          v22 = *(j - 1);
          if ( (_QWORD *)v22 != BugCheckParameter2
            && (unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(v22 + 712), BugCheckParameter2[89])
            && ((*(_DWORD *)(v22 + 952) & 0x20000) == 0 || *(_DWORD *)(v22 + 848) == *(_DWORD *)(*(_QWORD *)v23 + 40LL)) )
          {
            ACPIInitRemovePowerNodes(v22);
            if ( (*(_DWORD *)(v22 + 952) & 0x20000) != 0 )
            {
              KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
              v25 = *(_QWORD *)(v22 + 832);
              v26 = *(_QWORD **)(v22 + 840);
              if ( *(_QWORD *)(v25 + 8) != v22 + 832 || *v26 != v22 + 832 )
                __fastfail(3u);
              *v26 = v25;
              *(_QWORD *)(v25 + 8) = v26;
              ACPIInitDereferenceDeviceExtensionLocked(v22);
              KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
            }
            break;
          }
        }
        v27 = (__int64 *)(v19 + 40);
        v28 = *((_QWORD *)v19 + 1) + 48LL;
        v29 = *(__int64 ***)(*((_QWORD *)v19 + 1) + 56LL);
        if ( *v29 != (__int64 *)v28 )
          __fastfail(3u);
        *v27 = v28;
        *((_QWORD *)v19 + 6) = v29;
        *v29 = v27;
        *(_QWORD *)(v28 + 8) = v27;
        if ( i >= v9 - 1 )
          *(_QWORD *)v19 = 0LL;
        else
          *(_QWORD *)v19 = v19 + 56;
        AMLIDereferenceHandleEx(v17, (__int64)v29);
        v8 = ++v39;
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
