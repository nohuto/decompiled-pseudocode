/*
 * XREFs of ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B4F00
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::UpdateAttributes(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _DWORD *v4; // rdx

  if ( *((_BYTE *)this + 452) && (unsigned int)HasAlphaChannel(*((_DWORD *)this + 110)) )
  {
    if ( *v4 != *((_DWORD *)this + 30) )
    {
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
      ReleaseInterface<IBitmapLock>((__int64 *)this + 57);
    }
    *((_BYTE *)this + 452) = 0;
  }
  CBitmapRealization::UpdateAttributes(this, a2);
}
