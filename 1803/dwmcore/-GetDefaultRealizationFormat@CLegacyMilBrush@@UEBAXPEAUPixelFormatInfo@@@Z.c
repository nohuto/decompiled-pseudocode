/*
 * XREFs of ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18016F1C0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x1801B2D70 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrush::GetDefaultRealizationFormat(CLegacyMilBrush *this, struct PixelFormatInfo *a2)
{
  int v3; // eax
  int v4; // ecx

  if ( (*(unsigned __int8 (__fastcall **)(CLegacyMilBrush *))(*(_QWORD *)this + 184LL))(this) )
  {
    v3 = 3;
    v4 = 88;
  }
  else
  {
    v3 = 1;
    v4 = 87;
  }
  *(_DWORD *)a2 = v4;
  *((_DWORD *)a2 + 1) = v3;
  *((_DWORD *)a2 + 2) = 0;
}
