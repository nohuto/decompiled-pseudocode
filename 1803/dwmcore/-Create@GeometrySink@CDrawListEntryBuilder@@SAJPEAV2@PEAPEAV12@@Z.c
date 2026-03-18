/*
 * XREFs of ?Create@GeometrySink@CDrawListEntryBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x18017A9F0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListEntryBuilder::GeometrySink::Create(
        struct CDrawListEntryBuilder *a1,
        struct CDrawListEntryBuilder::GeometrySink **a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  struct CDrawListEntryBuilder::GeometrySink *v6; // rbx

  v4 = 0;
  v5 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  v6 = (struct CDrawListEntryBuilder::GeometrySink *)v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 3) = a1;
    *(_QWORD *)v5 = &CDrawListEntryBuilder::GeometrySink::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v5 + 2) = &CDrawListEntryBuilder::GeometrySink::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    *((_DWORD *)v5 + 8) = 0;
    *((_QWORD *)v5 + 5) = v5 + 72;
    *((_QWORD *)v5 + 6) = v5 + 72;
    *((_DWORD *)v5 + 14) = 8;
    *(_QWORD *)(v5 + 60) = 8LL;
    *((_QWORD *)v5 + 17) = v5 + 168;
    *((_QWORD *)v5 + 18) = v5 + 168;
    *((_DWORD *)v5 + 38) = 8;
    *(_QWORD *)(v5 + 156) = 8LL;
    *((_QWORD *)v5 + 25) = 0LL;
    *((_QWORD *)v5 + 26) = 1LL;
    *((_WORD *)v5 + 116) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CDrawListEntryBuilder::GeometrySink *))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x89u);
  }
  return v4;
}
