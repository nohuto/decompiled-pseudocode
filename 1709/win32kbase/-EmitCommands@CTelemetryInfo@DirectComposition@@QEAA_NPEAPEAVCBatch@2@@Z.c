/*
 * XREFs of ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00747E8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0074630 (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00746B8 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007475C (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rbx
  char v5; // si
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v5 = 0;
  while ( 1 )
  {
    if ( *(char **)v3 == v3 )
      goto LABEL_3;
    v7 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v8 = *(_QWORD *)v7, *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *(_QWORD *)v3 = v8;
    *(_QWORD *)(v8 + 8) = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *(unsigned int *)(v7 + 16), &v10) )
      break;
    memmove(v10, (const void *)(v7 + 20), *(unsigned int *)(v7 + 16));
    Win32FreePool(v7);
  }
  v9 = *(_QWORD *)v3;
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *(_QWORD *)v7 = v9;
  *(_QWORD *)(v7 + 8) = v3;
  *(_QWORD *)(v9 + 8) = v7;
  *(_QWORD *)v3 = v7;
  if ( (char *)v7 == v3 )
  {
LABEL_3:
    if ( DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(this, a2)
      && DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(this, a2)
      && DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(this, a2) )
    {
      return 1;
    }
  }
  return v5;
}
