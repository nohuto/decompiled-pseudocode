/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x1800031F4
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180003044 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A3144 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180003364 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800104E0 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  bool v6; // zf
  unsigned int v7; // edx
  __int128 v8; // xmm0
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 312) )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 45);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( *((_QWORD *)this + 40) )
    {
      VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 40));
      if ( *((_QWORD *)this + 40) )
        CBaseObject::Release(*((CBaseObject **)this + 40));
    }
    v4 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 40) = v4;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = (CBaseObject *)*((_QWORD *)this + 41);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *((_QWORD *)this + 41) = 0LL;
      }
    }
    v6 = (*((_BYTE *)this + 300) & 1) == 0;
    v7 = *((_DWORD *)this + 76);
    *((_DWORD *)this + 89) = v7;
    if ( !v6 )
      CAccent::_UpdateAccentBackground(this, v7);
    v8 = *(_OWORD *)((char *)this + 296);
    *((_BYTE *)this + 312) = 0;
    *((_DWORD *)this + 74) = 5;
    *(_OWORD *)((char *)this + 280) = v8;
    *((_DWORD *)this + 73) = 0;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2EFu);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return v1;
}
