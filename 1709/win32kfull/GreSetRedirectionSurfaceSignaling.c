/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C01099D0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C008A630 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008EADC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  unsigned int v14; // edi
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3472) )
      {
        v10 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v11 = HmgShareLockCheck(a2, v9), (v10 = v11) != 0) )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)(v11 + 264));
          v12 = *(_QWORD *)(v10 + 192);
          if ( v12 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v10) )
          {
            v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3472))(
                   v12,
                   a3,
                   a2,
                   *(_QWORD *)(v12 + 32)) )
            {
              *(_DWORD *)(v10 + 248) ^= (*(_DWORD *)(v10 + 248) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v10 + 200) = *(_QWORD *)(v13 + 496);
            *(_QWORD *)(v10 + 208) = *(_QWORD *)(v13 + 504);
            *(_DWORD *)(v10 + 216) = *(_DWORD *)(v13 + 512);
            if ( (*(_DWORD *)(v13 + 116) & 0x400) != 0 )
              *(_DWORD *)(v10 + 248) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v10 + 200) = a3;
            *(_QWORD *)(v10 + 208) = a4;
          }
          v14 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
        }
        else
        {
          v14 = -1073741811;
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
      }
      else
      {
        v14 = -1073741822;
      }
    }
    else
    {
      v14 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v14;
}
