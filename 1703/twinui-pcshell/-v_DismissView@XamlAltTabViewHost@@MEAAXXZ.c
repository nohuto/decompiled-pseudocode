/*
 * XREFs of ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x18013EB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlAltTabViewHost::v_DismissView(XamlAltTabViewHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v3 = *((_QWORD *)this + 22);
    if ( v3 )
    {
      *((_QWORD *)this + 22) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
}
