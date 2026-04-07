/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800108AC
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800030EC (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x1800109C0 (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180005FA4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccent::_CleanupNonStaticsResources(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  unsigned int v10; // edi
  CBaseObject **v11; // rbx

  if ( (*((_BYTE *)this + 284) & 4) != 0 )
    CDesktopManager::SetBackStop(0LL);
  VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
  v2 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 40) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 41) = 0LL;
  }
  v4 = *((_QWORD *)this + 45);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 45) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 42) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 43) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 49) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 50) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 51) = 0LL;
  }
  v10 = 0;
  v11 = (CBaseObject **)((char *)this + 416);
  do
  {
    if ( *v11 )
    {
      CBaseObject::Release(*v11);
      *v11 = 0LL;
    }
    ++v10;
    ++v11;
  }
  while ( v10 < 0x16 );
}
