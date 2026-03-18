/*
 * XREFs of ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0074630
 * Callers:
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00747E8 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rbx
  bool v4; // zf
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 32;
  while ( 1 )
  {
    v4 = *(_QWORD *)v3 == (_QWORD)v3;
    if ( *(char **)v3 == v3 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return *(_QWORD *)v3 == (_QWORD)v3;
    v6 = *(_QWORD **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    v8 = v9;
    *(_DWORD *)v9 = 16;
    v8[1] = 263;
    *((_QWORD *)v8 + 1) = v6[2];
    Win32FreePool((__int64)v6);
  }
  return v4;
}
