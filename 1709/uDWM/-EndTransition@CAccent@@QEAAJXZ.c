/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x1800084A0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800082F4 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009AD38 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180008620 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180012424 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  struct CVisual *v4; // rdx
  CBaseObject *v5; // rcx
  __int64 v6; // rax
  CBaseObject *v7; // rcx
  bool v8; // zf
  unsigned int v9; // edx
  __int128 v10; // xmm0
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 312) )
  {
    v13 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 45);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 45) = 0LL;
    }
    v4 = (struct CVisual *)*((_QWORD *)this + 40);
    if ( v4 )
      VisualCollection::Remove((CAccent *)((char *)this + 32), v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v5 )
      CBaseObject::Release(v5);
    v6 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 40) = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v7 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)this + 41) = 0LL;
    }
    v8 = (*((_BYTE *)this + 300) & 1) == 0;
    v9 = *((_DWORD *)this + 76);
    *((_DWORD *)this + 89) = v9;
    if ( !v8 )
      CAccent::_UpdateAccentBackground(this, v9);
    v10 = *(_OWORD *)((char *)this + 296);
    *((_BYTE *)this + 312) = 0;
    *((_DWORD *)this + 74) = 5;
    *(_OWORD *)((char *)this + 280) = v10;
    *((_DWORD *)this + 73) = 0;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2FDu);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  }
  return v1;
}
