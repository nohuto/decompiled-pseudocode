/*
 * XREFs of VfPutDmaAdapter @ 0x1407AC760
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140276E58 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407AA42C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1407AE128 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x1407AEA94 (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(ULONG_PTR a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(ULONG_PTR); // rsi
  KIRQL v4; // al
  ULONG_PTR v5; // rbx
  KIRQL v6; // bp
  ULONG_PTR v7; // rax
  ULONG_PTR *v8; // rcx

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(ULONG_PTR))result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    v5 = ViAdapterList;
    v6 = v4;
    while ( 1 )
    {
      if ( &ViAdapterList == (ULONG_PTR *)v5 )
        goto LABEL_27;
      if ( a1 == *(_QWORD *)(v5 + 16) )
        break;
      v5 = *(_QWORD *)v5;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 36)) < 0 )
    {
      ViHalPreprocessOptions(
        byte_140359A70,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, v5, 0LL, byte_140359A70);
    }
    ViFlushZeroMapRegisterBaseWcbs(v5);
    if ( *(_DWORD *)(v5 + 180) != *(_DWORD *)(v5 + 184) )
    {
      ViHalPreprocessOptions(
        byte_140359A74,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        a1);
      VfReportIssueWithOptions(
        0xE6u,
        8uLL,
        a1,
        (unsigned int)(*(_DWORD *)(v5 + 180) - *(_DWORD *)(v5 + 184)),
        v5,
        byte_140359A74);
    }
    if ( *(_DWORD *)(v5 + 172) != *(_DWORD *)(v5 + 176) )
    {
      ViHalPreprocessOptions(
        byte_140359A68,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        a1);
      VfReportIssueWithOptions(
        0xE6u,
        7uLL,
        a1,
        (unsigned int)(*(_DWORD *)(v5 + 172) - *(_DWORD *)(v5 + 176)),
        v5,
        byte_140359A68);
    }
    if ( *(_DWORD *)(v5 + 160) )
    {
      ViHalPreprocessOptions(
        byte_140359A6C,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        a1);
      VfReportIssueWithOptions(0xE6u, 9uLL, a1, *(int *)(v5 + 160), v5, byte_140359A6C);
    }
    if ( *(_DWORD *)(v5 + 168) )
    {
      ViHalPreprocessOptions(
        byte_140359A64,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        a1);
      VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, *(int *)(v5 + 168), v5, byte_140359A64);
    }
    if ( !*(_QWORD *)(v5 + 24) )
    {
      v7 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *(ULONG_PTR **)(v5 + 8), *v8 != v5) )
        __fastfail(3u);
LABEL_20:
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(v5 + 34) )
    {
      v7 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *(ULONG_PTR **)(v5 + 8), *v8 != v5) )
        __fastfail(3u);
      goto LABEL_20;
    }
    v5 = 0LL;
LABEL_27:
    KxReleaseSpinLock(&Lock);
    __writecr8(v6);
    if ( v5 )
      ViReleaseDmaAdapter(v5);
    return v3(a1);
  }
  return result;
}
