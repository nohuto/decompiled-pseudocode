/*
 * XREFs of ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18006B7AC
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x18006975C (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180069C00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLivePreview::_ReleasePerMonitorResources(CLivePreview *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  for ( i = 0; i < *((_DWORD *)this + 98); ++i )
  {
    v3 = 136LL * i;
    v4 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 16);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 16) = 0LL;
    }
    v5 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 24);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 24) = 0LL;
    }
    v6 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 32);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 32) = 0LL;
    }
    v7 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 56);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 56) = 0LL;
    }
    v8 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 64);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 64) = 0LL;
    }
    v9 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 72);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 72) = 0LL;
    }
    v10 = *(CBaseObject **)(v3 + *((_QWORD *)this + 46) + 104);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 104) = 0LL;
    }
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 368, 0x88u);
}
