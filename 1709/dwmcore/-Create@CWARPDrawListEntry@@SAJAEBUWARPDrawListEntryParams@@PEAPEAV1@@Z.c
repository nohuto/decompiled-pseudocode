/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x180154C1C
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801549C8 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018EEB4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPDrawListEntryParams *a1, struct CWARPDrawListEntry **a2)
{
  unsigned int v4; // ebx
  struct CObjectCache *ObjectCache; // rax
  CWARPDrawListEntry *v6; // rcx
  int v7; // r9d
  volatile signed __int32 *v8; // rax

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v6 = 0LL;
  v7 = *((_DWORD *)ObjectCache + 1);
  if ( v7 )
  {
    v6 = (CWARPDrawListEntry *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
    *((_DWORD *)ObjectCache + 1) = v7 - 1;
  }
  if ( v6 || (v6 = (CWARPDrawListEntry *)HeapAlloc(WPF::g_processHeap, 0, 0x150uLL)) != 0LL )
    v8 = (volatile signed __int32 *)CWARPDrawListEntry::CWARPDrawListEntry(v6, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    *a2 = (struct CWARPDrawListEntry *)v8;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x13u);
  }
  return v4;
}
