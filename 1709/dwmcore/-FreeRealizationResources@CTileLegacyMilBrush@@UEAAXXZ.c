/*
 * XREFs of ?FreeRealizationResources@CTileLegacyMilBrush@@UEAAXXZ @ 0x18011ADC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTileLegacyMilBrush::FreeRealizationResources(CTileLegacyMilBrush *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // eax

  v2 = *((_QWORD *)this + 38);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 38) = 0LL;
  v3 = (*((_DWORD *)this + 56))++ == -1;
  v4 = *((_DWORD *)this + 56);
  if ( v3 )
    v4 = 1;
  *((_DWORD *)this + 56) = v4;
}
