/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x18018ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CGenericInkTipPointSource *__fastcall CGenericInkTipPointSource::`scalar deleting destructor'(
        CGenericInkTipPointSource *this,
        char a2)
{
  void *v4; // rcx
  CMILCOMBase *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    operator delete(v4);
  v5 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CMILCOMBase::InternalRelease(v5);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
