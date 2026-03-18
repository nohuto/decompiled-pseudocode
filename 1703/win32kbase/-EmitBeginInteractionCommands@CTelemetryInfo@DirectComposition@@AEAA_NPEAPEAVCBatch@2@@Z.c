/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BEE8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C8E0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si
  DirectComposition::CTelemetryInfo *v5; // rbx
  __int64 v7; // rax
  DirectComposition::CTelemetryInfo *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return 1;
    v7 = *(_QWORD *)v5;
    if ( *((DirectComposition::CTelemetryInfo **)v5 + 1) != this
      || *(DirectComposition::CTelemetryInfo **)(v7 + 8) != v5 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v7;
    *(_QWORD *)(v7 + 8) = this;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v5 + 4), &v9) )
      break;
    memmove(v9, (char *)v5 + 20, *((unsigned int *)v5 + 4));
    Win32FreePool((__int64)v5);
  }
  v8 = *(DirectComposition::CTelemetryInfo **)this;
  if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *(_QWORD *)v5 = v8;
  *((_QWORD *)v5 + 1) = this;
  *((_QWORD *)v8 + 1) = v5;
  *(_QWORD *)this = v5;
  if ( v5 == this )
    return 1;
  return v4;
}
