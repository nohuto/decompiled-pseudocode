/*
 * XREFs of ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0027040
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00316B4 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0027238 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int a3)
{
  int v3; // ebx
  unsigned __int64 v7; // rax
  size_t v8; // r8
  void *Src; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v7 = *((_QWORD *)this + 3);
  if ( a3 > v7 )
  {
    v3 = DirectComposition::CDCompDynamicArrayBase::Grow(this, a3 - v7, 0x746C4344u);
    goto LABEL_7;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 4) * (a3 - 1) + *(_QWORD *)this) )
  {
    v3 = -1073741790;
LABEL_7:
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  v8 = *((_QWORD *)this + 4);
  Src = a2;
  memmove((void *)(*(_QWORD *)this + v8 * (a3 - 1)), &Src, v8);
  ++*((_QWORD *)this + 5);
  return (unsigned int)v3;
}
