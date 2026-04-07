/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x18003A83C
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x180039EA0 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180039F54 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18003ABB0 (--_GCWindowData@@QEAAPEAXI@Z.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(CTopLevelWindow **this)
{
  unsigned int v2; // edx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject **v8; // rcx

  *this = (CTopLevelWindow *)&CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources(this);
  v3 = this[11];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[13];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[14];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[12];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[3];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject **)this[10];
  if ( v8 )
  {
    if ( v8[49] )
    {
      CBaseObject::Release(v8[49]);
      v8 = (CBaseObject **)this[10];
    }
    if ( v8 )
    {
      CWindowData::`scalar deleting destructor'((CWindowData *)v8, v2);
      this[10] = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 4));
  *this = (CTopLevelWindow *)&CBaseObject::`vftable';
}
