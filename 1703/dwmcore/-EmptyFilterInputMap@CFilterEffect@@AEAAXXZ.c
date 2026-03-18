/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1800033B0
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1800033F0 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180129F70 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18016EEB4 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  unsigned int v4; // edx
  InternalFilterInput *v5; // rcx

  v1 = *((int *)this + 42);
  for ( i = 0LL; i < v1; ++i )
  {
    CResource::UnRegisterNotifierInternal(
      this,
      *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 20) + 8 * i) + 24LL));
    v5 = *(InternalFilterInput **)(*((_QWORD *)this + 20) + 8 * i);
    if ( v5 )
      InternalFilterInput::`scalar deleting destructor'(v5, v4);
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 152);
}
