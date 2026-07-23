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
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v6; // bp
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *Blink; // rcx

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(ULONG_PTR))result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    Flink = ViAdapterList.Flink;
    v6 = v4;
    while ( 1 )
    {
      if ( &ViAdapterList == Flink )
        goto LABEL_27;
      if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
        break;
      Flink = Flink->Flink;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1) < 0 )
    {
      ViHalPreprocessOptions(
        byte_140359A70,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140359A70);
    }
    ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
    if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
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
        (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
        (__int64)Flink,
        byte_140359A74);
    }
    if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
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
        (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
        (__int64)Flink,
        byte_140359A68);
    }
    if ( LODWORD(Flink[10].Flink) )
    {
      ViHalPreprocessOptions(
        byte_140359A6C,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        a1);
      VfReportIssueWithOptions(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (__int64)Flink, byte_140359A6C);
    }
    if ( LODWORD(Flink[10].Blink) )
    {
      ViHalPreprocessOptions(
        byte_140359A64,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        a1);
      VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (__int64)Flink, byte_140359A64);
    }
    if ( !Flink[1].Blink )
    {
      v7 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
LABEL_20:
      Blink->Flink = v7;
      v7->Blink = Blink;
      goto LABEL_27;
    }
    if ( BYTE2(Flink[2].Flink) )
    {
      v7 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      goto LABEL_20;
    }
    Flink = 0LL;
LABEL_27:
    KxReleaseSpinLock(&Lock);
    __writecr8(v6);
    if ( Flink )
      ViReleaseDmaAdapter((ULONG_PTR)Flink);
    return v3(a1);
  }
  return result;
}
