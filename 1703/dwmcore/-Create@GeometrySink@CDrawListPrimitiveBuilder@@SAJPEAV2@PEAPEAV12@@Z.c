/*
 * XREFs of ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x18015BA64
 * Callers:
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::GeometrySink::Create(
        struct CDrawListPrimitiveBuilder *a1,
        struct CDrawListPrimitiveBuilder::GeometrySink **a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  struct CDrawListPrimitiveBuilder::GeometrySink *v6; // rbx

  v4 = 0;
  v5 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  v6 = (struct CDrawListPrimitiveBuilder::GeometrySink *)v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 3) = a1;
    *(_QWORD *)v5 = &CDrawListPrimitiveBuilder::GeometrySink::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v5 + 2) = &CDrawListPrimitiveBuilder::GeometrySink::`vftable'{for `ID2D1SimplifiedGeometrySink'};
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
    (*(void (__fastcall **)(struct CDrawListPrimitiveBuilder::GeometrySink *))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Fu);
  }
  return v4;
}
