/*
 * XREFs of ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DEA8
 * Callers:
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0015690 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001B154 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B3B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int *a3)
{
  int v4; // esi
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 i; // rax
  size_t v10; // r8
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 4);
  if ( *((_QWORD *)this + 6) >= v5 )
  {
    v8 = v5;
    v4 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1uLL, 0x746C4344u);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  else
  {
    v8 = *((_QWORD *)this + 7);
    for ( i = v8 * *((_QWORD *)this + 5); *(_QWORD *)(i + *((_QWORD *)this + 1)); i = v8 * *((_QWORD *)this + 5) )
      v8 = (v8 + 1) % v5;
    *((_QWORD *)this + 7) = (v8 + 1) % v5;
  }
  v10 = *((_QWORD *)this + 5);
  Src = a2;
  memmove((void *)(*((_QWORD *)this + 1) + v8 * v10), &Src, v10);
  *a3 = v8 + 1;
  ++*((_QWORD *)this + 6);
  return (unsigned int)v4;
}
