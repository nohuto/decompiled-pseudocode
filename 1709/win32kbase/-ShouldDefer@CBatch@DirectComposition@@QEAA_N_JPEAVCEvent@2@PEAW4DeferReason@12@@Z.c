/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0034BA4
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C003424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C00DB5B4 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        PRKEVENT *a3,
        enum DirectComposition::CBatch::DeferReason *a4)
{
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  DirectComposition::CEvent *v13; // rcx
  __int64 v14; // rbp
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v8 = 1;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 241LL) )
  {
    v8 = 2;
  }
  else
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 && a2 && v7 - a2 > 0 )
    {
      v8 = 3;
    }
    else
    {
      if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
      {
        v8 = 4;
        goto LABEL_21;
      }
      v8 = 6;
      if ( !*((_QWORD *)this + 13) )
      {
LABEL_6:
        v9 = *((_QWORD *)this + 12);
        if ( !v9 || *(_BYTE *)(v9 + 33) && *(int *)(v9 + 36) <= 0 )
          return 0;
        if ( a3 && !*(_BYTE *)(v9 + 33) )
          goto LABEL_12;
        goto LABEL_21;
      }
      while ( 1 )
      {
        v11 = *((_QWORD *)this + 13);
        Timeout.QuadPart = 0LL;
        if ( KeWaitForSingleObject(*(PVOID *)(v11 + 8), UserRequest, 0, 0, &Timeout) )
          break;
        v13 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
        v14 = *(_QWORD *)v13;
        if ( v13 )
          DirectComposition::CEvent::`scalar deleting destructor'(v13, v12);
        *((_QWORD *)this + 13) = v14;
        if ( !v14 )
          goto LABEL_6;
      }
      v8 = 5;
    }
  }
  if ( a3 )
LABEL_12:
    KeSetEvent(a3[1], 1, 0);
LABEL_21:
  if ( a4 )
    *(_DWORD *)a4 = v8;
  return 1;
}
