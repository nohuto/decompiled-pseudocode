/*
 * XREFs of ?Release@KeyframeValue@@UEAAKXZ @ 0x180040B00
 * Callers:
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ??_GKeyframeValue@@EEAAPEAXI@Z @ 0x180040AD0 (--_GKeyframeValue@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyframeValue::Release(KeyframeValue *this)
{
  unsigned __int32 v1; // ebx
  KeyframeValue *(__fastcall *v2)(KeyframeValue *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(KeyframeValue *(__fastcall **)(KeyframeValue *, char))(*(_QWORD *)this + 16LL);
    if ( v2 == KeyframeValue::`scalar deleting destructor' )
      KeyframeValue::`scalar deleting destructor'(this, 1);
    else
      v2(this, 1);
  }
  return v1;
}
