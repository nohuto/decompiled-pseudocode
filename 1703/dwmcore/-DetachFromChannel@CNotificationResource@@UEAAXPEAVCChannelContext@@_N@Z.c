/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18005A080
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18004FEE0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18005BAA0 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  struct CChannelContext *v2; // rax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = (struct CChannelContext *)*((_QWORD *)this + 6);
  if ( v2 == a2 )
  {
    if ( v2 )
      v5 = *((_DWORD *)v2 + 15);
    else
      v5 = 0;
    if ( v5 )
    {
      v6 = *((unsigned int *)this + 14);
      if ( (_DWORD)v6 )
      {
        if ( v2 )
          v7 = *((unsigned int *)v2 + 15);
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1352LL) + 40LL);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, v7, v6, 0LL);
      }
    }
    *((_DWORD *)this + 14) = 0;
  }
  if ( a2 == *((struct CChannelContext **)this + 6) )
    *((_QWORD *)this + 6) = 0LL;
}
