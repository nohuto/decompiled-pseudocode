/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C00BC52C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00BC2B0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(__int64 a1, HLSURF a2)
{
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v4; // rdi
  int v5; // eax
  SFMLOGICALSURFACE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v3 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      v7 = 0LL;
      v8 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v7, a2);
      v4 = v7;
      if ( v7 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (SFMLOGICALSURFACE *)((char *)v7 + 264));
        v5 = *((_DWORD *)v4 + 62);
        if ( (v5 & 8) != 0 )
        {
          if ( (v5 & 0x10) != 0 )
            *((_DWORD *)v4 + 62) = v5 & 0xFFFFFFEF;
          ++*((_DWORD *)v4 + 63);
        }
        else
        {
          v3 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructorWrap(&v7);
    }
    else
    {
      v3 = -1071775733;
    }
  }
  else
  {
    v3 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v3;
}
