/*
 * XREFs of ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007CBB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180146F80 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::GetDefaultRealizationFormat(
        CImageLegacyMilBrush *this,
        struct PixelFormatInfo *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 66);
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v2 + 24LL))(*((_QWORD *)this + 66), v5);
    *(_QWORD *)a2 = *(_QWORD *)v4;
    *((_DWORD *)a2 + 2) = *(_DWORD *)(v4 + 8);
  }
  else
  {
    CLegacyMilBrush::GetDefaultRealizationFormat(this, a2);
  }
}
