/*
 * XREFs of ??_GCScaleTransform3D@@MEAAPEAXI@Z @ 0x180028D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CScaleTransform3D *__fastcall CScaleTransform3D::`scalar deleting destructor'(CScaleTransform3D *this, char a2)
{
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
