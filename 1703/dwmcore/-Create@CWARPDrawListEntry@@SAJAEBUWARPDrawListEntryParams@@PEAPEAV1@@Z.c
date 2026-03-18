/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18015EACC
 * Callers:
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x18015E798 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018610C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
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
  if ( v6 || (v6 = (CWARPDrawListEntry *)HeapAlloc(WPF::g_processHeap, 0, 0x188uLL)) != 0LL )
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v4;
}
