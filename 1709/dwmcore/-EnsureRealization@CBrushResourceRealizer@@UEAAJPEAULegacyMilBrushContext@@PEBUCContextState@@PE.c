/*
 * XREFs of ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18007B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18007D7E0 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007DA1C (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushResourceRealizer::EnsureRealization(
        CBrushResourceRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  bool v5; // zf
  const struct PixelFormatInfo *v7; // rdi
  __int64 v8; // rcx
  signed int BrushRealizationNoRef; // eax
  unsigned int v10; // ebp
  struct CMILBrush *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = *(_BYTE *)a2 == 0;
  *((_DWORD *)a2 + 53) = *((_DWORD *)a3 + 52);
  if ( v5 )
  {
    *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)a3 + 212);
    *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)a3 + 228);
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)a3 + 244);
    *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)a3 + 260);
    *((_DWORD *)a2 + 17) = *((_DWORD *)a3 + 69);
    *((_OWORD *)a2 + 11) = *(_OWORD *)((char *)a3 + 76);
  }
  v7 = (struct LegacyMilBrushContext *)((char *)a2 + 216);
  if ( a4 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a4;
    *((_DWORD *)a2 + 56) = *((_DWORD *)a4 + 2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 168LL))(
      *((_QWORD *)this + 12),
      (char *)a2 + 216);
  }
  *((_BYTE *)a2 + 140) = 0;
  *((_WORD *)a2 + 68) = 32085;
  *(_OWORD *)((char *)a2 + 72) = _xmm;
  *(_OWORD *)((char *)a2 + 88) = _xmm;
  *(_OWORD *)((char *)a2 + 104) = _xmm;
  *(_OWORD *)((char *)a2 + 120) = _xmm;
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 11) = 0LL;
  }
  BrushRealizationNoRef = CLegacyMilBrush::GetBrushRealizationNoRef(*((CLegacyMilBrush **)this + 12), a2, &v12);
  v10 = BrushRealizationNoRef;
  if ( BrushRealizationNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BrushRealizationNoRef, 0x92u);
  }
  else
  {
    CLegacyMilBrushRealizer::SetRealizedBrush(this, v12, v7);
    if ( !*(_BYTE *)a2 && *((_BYTE *)a2 + 140) )
      CMILMatrix::Multiply(
        (struct LegacyMilBrushContext *)((char *)a2 + 4),
        (struct LegacyMilBrushContext *)((char *)a2 + 72));
  }
  return v10;
}
