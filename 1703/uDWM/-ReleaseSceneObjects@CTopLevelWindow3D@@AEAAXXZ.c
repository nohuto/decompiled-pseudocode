/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18002ECE4
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002ED4C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 43) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 44) = 0LL;
  }
  *((_BYTE *)this + 290) = 0;
}
