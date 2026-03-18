/*
 * XREFs of ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007DA1C
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18007B9B0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetBrushRealizationNoRef(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int v3; // edi
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = 0;
  if ( (*((_BYTE *)this + 32) & 1) == 0
    && !(*(unsigned int (__fastcall **)(CLegacyMilBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
LABEL_5:
    v8 = *((_QWORD *)this + 8);
    if ( v8 && (*((_DWORD *)a2 + 53) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8)) )
    {
      v9 = *((_QWORD *)this + 8);
      *(_QWORD *)(v9 + 8) = *((_QWORD *)a2 + 27);
      *(_DWORD *)(v9 + 16) = *((_DWORD *)a2 + 56);
      *a3 = (struct CMILBrush *)*((_QWORD *)this + 8);
    }
    else
    {
      *a3 = 0LL;
    }
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(CLegacyMilBrush *, const struct LegacyMilBrushContext *, char *))(*(_QWORD *)this
                                                                                                  + 208LL))(
         this,
         a2,
         (char *)this + 64);
  v3 = v7;
  if ( v7 >= 0 )
  {
    *((_DWORD *)this + 8) &= ~1u;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x60u);
LABEL_9:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    *((_DWORD *)this + 8) |= 1u;
  }
  return (unsigned int)v3;
}
