/*
 * XREFs of GreNotifyDirtySprite @ 0x1C009CFC4
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009CF00 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

struct DwmState *__fastcall GreNotifyDirtySprite(HWND a1)
{
  struct DwmState *result; // rax
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  struct SFMLOGICALSURFACE *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = g_pDwmState;
  v2 = 0LL;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)(v7 + 120));
      v5 = *(struct SFMLOGICALSURFACE **)(v4 + 192);
      v6 = *((_QWORD *)v5 + 24);
      if ( v6 )
        v2 = *(_QWORD *)(v6 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v4, v5, 1u, v2);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
      DEC_SHARE_REF_CNT(v4);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
