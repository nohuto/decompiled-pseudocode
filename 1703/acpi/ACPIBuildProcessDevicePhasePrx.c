/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C000B3A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dLqss @ 0x1C000DA58 (WPP_RECORDER_SF_dLqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // rbp
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rbx
  int v11; // edi
  KIRQL v12; // dl
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // rax
  ULONG_PTR v16; // rdx
  void *v17; // rdx
  signed __int32 v18; // ecx
  KIRQL v19; // bl
  int v20; // edx

  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0;
  v7 = a1 + 80;
  v8 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v9 = (unsigned int)(v8 + 1);
  *(_DWORD *)(a1 + 32) = 2 * v8 + 20;
  if ( v5[v9 + 51] || v5[v9 + 45] )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_9;
    dword_1C00776F8 = 0;
    pszDest = 0;
LABEL_26:
    FreeDataBuffs(v7, 1LL);
    goto LABEL_9;
  }
  v10 = (__int64 *)v5[89];
  v11 = *(_DWORD *)&aPs0Ps1Ps2[4 * v8];
  v12 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v13 = *v10;
  v14 = *(__int64 **)(*v10 + 24);
  v15 = (__int64 *)(v13 + 24);
  if ( v15 == v14 )
  {
LABEL_6:
    v14 = 0LL;
  }
  else
  {
    while ( v11 != *((_DWORD *)v14 + 10) )
    {
      v14 = (__int64 *)*v14;
      if ( v15 == v14 )
        goto LABEL_6;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v12);
  if ( v14 )
  {
    v14 += 15;
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  v5[v9 + 51] = v14;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_9;
    }
    v6 = ACPIBuildDevicePowerNodes((ULONG_PTR)v5, v16);
    dword_1C00776F8 = 0;
    v7 = a1 + 80;
    pszDest = 0;
    goto LABEL_26;
  }
LABEL_9:
  v17 = &unk_1C0066CD0;
  if ( v5 )
  {
    a3 = v5[1];
    a4 = 0;
    if ( (a3 & 0x200000000000LL) != 0 )
    {
      a4 = 0;
      if ( (a3 & 0x400000000000LL) != 0 )
        v17 = (void *)v5[71];
    }
  }
  WPP_RECORDER_SF_dLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v17, a3, a4);
  v18 = *(_DWORD *)(a1 + 32);
  if ( v6 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon(a1 + 24, 2LL);
  }
  else
  {
    if ( v6 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v6;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v6, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v18, 1);
    v19 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v20 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v20;
    if ( (v20 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v20 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v19);
  }
  return (unsigned int)v6;
}
