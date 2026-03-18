/*
 * XREFs of ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801B0418
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1801C22C0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetBrushRealizationNoRef(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int v3; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct CMILBrush *v10; // rax

  v3 = 0;
  if ( (*((_BYTE *)this + 32) & 1) != 0
    || (*(unsigned int (__fastcall **)(CLegacyMilBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    v7 = (*(__int64 (__fastcall **)(CLegacyMilBrush *, const struct LegacyMilBrushContext *, char *))(*(_QWORD *)this + 208LL))(
           this,
           a2,
           (char *)this + 64);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x60u);
      goto LABEL_12;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 && (*((_DWORD *)a2 + 53) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8)) )
  {
    v9 = *((_QWORD *)this + 8);
    *(_QWORD *)(v9 + 8) = *((_QWORD *)a2 + 27);
    *(_DWORD *)(v9 + 16) = *((_DWORD *)a2 + 56);
    v10 = (struct CMILBrush *)*((_QWORD *)this + 8);
  }
  else
  {
    v10 = 0LL;
  }
  *a3 = v10;
LABEL_12:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    *((_DWORD *)this + 8) |= 1u;
  }
  return (unsigned int)v3;
}
