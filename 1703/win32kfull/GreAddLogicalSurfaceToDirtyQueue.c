/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(UINT64 a1, ULONG a2, UINT_PTR a3)
{
  SFMLOGICALSURFACE *v5; // rbx
  unsigned int v6; // ebx
  SFMLOGICALSURFACE *v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+28h] [rbp-D8h]
  _BYTE v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v12; // [rsp+40h] [rbp-C0h] BYREF

  v12.Token.GdiSysMem.dwDirtyFlags = a2;
  v12.Token.Flip.FenceValue = a1;
  v12.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v12.Token.Flip.dxgContext = a3;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v11, (struct SfmState *)((char *)gpSfmState + 32));
  v8 = 0LL;
  v9 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v8, (HLSURF)a1);
  v5 = v8;
  if ( v8 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v10, (SFMLOGICALSURFACE *)((char *)v8 + 264));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*((_DWORD *)v5 + 62), 2),
      a2,
      v12.Token.Flip.FenceValue,
      v12.Token.Flip.dxgContext);
    if ( __CFSHR__(*((_DWORD *)v5 + 62), 2) )
    {
      v6 = SfmTokenArray::AddNotificationToken(gpSfmState, &v12);
      if ( !v6 )
        SfmSignalTokenEvent();
    }
    else
    {
      v6 = SfmTokenArray::AddNotificationToken((SFMLOGICALSURFACE *)((char *)v5 + 224), &v12);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v10);
  }
  else
  {
    v6 = -1073741816;
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v8);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v11);
  return v6;
}
