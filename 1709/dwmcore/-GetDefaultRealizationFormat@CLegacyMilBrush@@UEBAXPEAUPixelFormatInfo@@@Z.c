/*
 * XREFs of ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180146F80
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007CBB0 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrush::GetDefaultRealizationFormat(CLegacyMilBrush *this, struct PixelFormatInfo *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(CLegacyMilBrush *))(*(_QWORD *)this + 184LL))(this) )
  {
    *(_DWORD *)a2 = 88;
    *((_DWORD *)a2 + 1) = 3;
  }
  else
  {
    *(_DWORD *)a2 = 87;
    *((_DWORD *)a2 + 1) = 1;
  }
  *((_DWORD *)a2 + 2) = 0;
}
