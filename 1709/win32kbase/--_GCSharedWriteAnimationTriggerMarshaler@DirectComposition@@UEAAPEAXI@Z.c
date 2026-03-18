/*
 * XREFs of ??_GCSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0004870
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteAnimationTriggerMarshaler *__fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteAnimationTriggerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteAnimationTriggerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
