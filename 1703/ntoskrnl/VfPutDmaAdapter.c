/*
 * XREFs of VfPutDmaAdapter @ 0x14076AA90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1402505F8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(struct _LIST_ENTRY *); // rsi
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v6; // bp
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Blink; // rax

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(struct _LIST_ENTRY *))result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    Flink = ViAdapterList.Flink;
    v6 = v4;
    while ( 1 )
    {
      if ( &ViAdapterList == Flink )
        goto LABEL_27;
      if ( a1 == Flink[1].Flink )
        break;
      Flink = Flink->Flink;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1) < 0 )
    {
      ViHalPreprocessOptions(
        byte_1403413E0,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 24, (int)a1, (int)Flink, 0LL, byte_1403413E0);
    }
    ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
    if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
    {
      ViHalPreprocessOptions(
        byte_1403413D8,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        0xE6u,
        8,
        (int)a1,
        HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink),
        (__int64)Flink,
        byte_1403413D8);
    }
    if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
    {
      ViHalPreprocessOptions(
        byte_1403413DC,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        0xE6u,
        7,
        (int)a1,
        HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink),
        (__int64)Flink,
        byte_1403413DC);
    }
    if ( LODWORD(Flink[10].Flink) )
    {
      ViHalPreprocessOptions(
        byte_1403413D0,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        (_DWORD)a1);
      VfReportIssueWithOptions(0xE6u, 9, (int)a1, (int)Flink[10].Flink, (__int64)Flink, byte_1403413D0);
    }
    if ( LODWORD(Flink[10].Blink) )
    {
      ViHalPreprocessOptions(
        byte_1403413D4,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        (_DWORD)a1);
      VfReportIssueWithOptions(0xE6u, 10, (int)a1, (int)Flink[10].Blink, (__int64)Flink, byte_1403413D4);
    }
    if ( !Flink[1].Blink )
    {
      v7 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
LABEL_24:
      Blink->Flink = v7;
      v7->Blink = Blink;
      goto LABEL_27;
    }
    if ( BYTE2(Flink[2].Flink) )
    {
      v7 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      goto LABEL_24;
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
