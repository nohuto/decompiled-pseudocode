/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007475C
 * Callers:
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00747E8 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CTelemetryInfo *v4; // rbx
  __int64 v6; // rax
  DirectComposition::CTelemetryInfo *v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      break;
    if ( *((DirectComposition::CTelemetryInfo **)v4 + 1) != this
      || (v6 = *(_QWORD *)v4, *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v4 + 8LL) != v4) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v6;
    *(_QWORD *)(v6 + 8) = this;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v4 + 4), &v8) )
    {
      v7 = *(DirectComposition::CTelemetryInfo **)this;
      if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this )
        __fastfail(3u);
      *(_QWORD *)v4 = v7;
      *((_QWORD *)v4 + 1) = this;
      *((_QWORD *)v7 + 1) = v4;
      *(_QWORD *)this = v4;
      return *(_QWORD *)this == (_QWORD)this;
    }
    memmove(v8, (char *)v4 + 20, *((unsigned int *)v4 + 4));
    Win32FreePool((__int64)v4);
  }
  return *(_QWORD *)this == (_QWORD)this;
}
