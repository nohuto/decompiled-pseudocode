/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002BD10
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18002D55C (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18008FE70 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18017FC54 (-FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( (struct CChannelContext *)v4 == a2 )
  {
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 68);
    else
      v5 = 0;
    if ( v5 )
    {
      v6 = *((unsigned int *)this + 14);
      if ( (_DWORD)v6 )
      {
        if ( v4 )
          v7 = *(unsigned int *)(v4 + 68);
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1312LL) + 40LL);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v7, v6, 0LL);
        v4 = *((_QWORD *)this + 6);
      }
    }
    *((_DWORD *)this + 14) = 0;
  }
  if ( a2 == (struct CChannelContext *)v4 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
    {
      CAnimationLoggingManager::FreeCommentForResource(*(CAnimationLoggingManager **)(v4 + 56), this);
      *((_DWORD *)this + 8) &= ~0x10u;
    }
    *((_QWORD *)this + 6) = 0LL;
  }
}
