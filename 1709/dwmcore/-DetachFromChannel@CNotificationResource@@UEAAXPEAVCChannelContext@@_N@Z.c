/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180084C90
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180098CF0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x1800AAAD8 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180156BC0 (-FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, CAnimationLoggingManager **a2)
{
  CAnimationLoggingManager **v2; // rax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  CAnimationLoggingManager **v9; // rcx

  v2 = (CAnimationLoggingManager **)*((_QWORD *)this + 6);
  if ( v2 == a2 )
  {
    if ( v2 )
      v5 = *((_DWORD *)v2 + 17);
    else
      v5 = 0;
    if ( v5 )
    {
      v6 = *((unsigned int *)this + 14);
      if ( (_DWORD)v6 )
      {
        if ( v2 )
          v7 = *((unsigned int *)v2 + 17);
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1288LL) + 40LL);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, v7, v6, 0LL);
      }
    }
    *((_DWORD *)this + 14) = 0;
  }
  v9 = (CAnimationLoggingManager **)*((_QWORD *)this + 6);
  if ( a2 == v9 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
    {
      CAnimationLoggingManager::FreeCommentForResource(v9[7], this);
      *((_DWORD *)this + 8) &= ~0x10u;
    }
    *((_QWORD *)this + 6) = 0LL;
  }
}
