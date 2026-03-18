/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0046D34
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0045FF0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C009F810 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        PRKEVENT *a3,
        enum DirectComposition::CBatch::DeferReason *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // rax
  void *v12; // rcx
  DirectComposition::CEvent *v13; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v9 = 1;
    goto LABEL_14;
  }
  if ( *(char *)(*((_QWORD *)this + 1) + 240LL) < 0 )
  {
    v9 = 2;
  }
  else
  {
    v7 = *((_QWORD *)this + 8);
    if ( !v7 || !a2 || v7 - a2 <= 0 )
    {
      if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
      {
        v9 = 4;
        goto LABEL_14;
      }
      v8 = *((_QWORD *)this + 13);
      v9 = 6;
      while ( v8 )
      {
        v12 = *(void **)(v8 + 8);
        Timeout.QuadPart = 0LL;
        if ( KeWaitForSingleObject(v12, UserRequest, 0, 0, &Timeout) )
        {
          v9 = 5;
          goto LABEL_12;
        }
        v13 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
        v8 = *(_QWORD *)v13;
        if ( v13 )
          DirectComposition::CEvent::`scalar deleting destructor'(v13);
        *((_QWORD *)this + 13) = v8;
      }
      v10 = *((_QWORD *)this + 12);
      if ( !v10 || *(_BYTE *)(v10 + 33) && *(int *)(v10 + 36) <= 0 )
        return 0;
      if ( a3 && !*(_BYTE *)(v10 + 33) )
        goto LABEL_13;
      goto LABEL_14;
    }
    v9 = 3;
  }
LABEL_12:
  if ( a3 )
LABEL_13:
    KeSetEvent(a3[1], 1, 0);
LABEL_14:
  if ( a4 )
    *(_DWORD *)a4 = v9;
  return 1;
}
