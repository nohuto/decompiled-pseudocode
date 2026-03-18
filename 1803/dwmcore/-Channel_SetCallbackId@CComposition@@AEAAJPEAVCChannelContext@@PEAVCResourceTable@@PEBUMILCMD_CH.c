/*
 * XREFs of ?Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCALLBACKID@@@Z @ 0x18002DC68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Channel_SetCallbackId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SETCALLBACKID *a4)
{
  unsigned int v5; // ebx

  v5 = *((_DWORD *)a4 + 1);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 164) + 48LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 164) + 48LL),
          v5,
          *((unsigned int *)a4 + 3)) )
  {
    if ( *((_DWORD *)a4 + 2) )
      *((_DWORD *)a2 + 18) = v5;
    else
      *((_DWORD *)a2 + 17) = v5;
  }
  return 0LL;
}
