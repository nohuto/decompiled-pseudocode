/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0016278
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C0015374 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1C0015FD8 (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        PRKEVENT *a3,
        enum DirectComposition::CBatch::DeferReason *a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // ebx

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v10 = 1;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 257LL) )
  {
    v10 = 2;
  }
  else
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 && a2 && v7 - a2 > 0 )
    {
      v10 = 3;
    }
    else
    {
      if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
      {
        v10 = 4;
        goto LABEL_14;
      }
      if ( !DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(this) )
      {
        v8 = *((_QWORD *)this + 12);
        if ( !v8 || *(_BYTE *)(v8 + 33) && *(int *)(v8 + 36) <= 0 )
          return 0;
        v10 = 6;
        if ( a3 && !*(_BYTE *)(v8 + 33) )
          goto LABEL_19;
        goto LABEL_14;
      }
      v10 = 5;
    }
  }
  if ( a3 )
LABEL_19:
    KeSetEvent(a3[1], 1, 0);
LABEL_14:
  if ( a4 )
    *(_DWORD *)a4 = v10;
  return 1;
}
