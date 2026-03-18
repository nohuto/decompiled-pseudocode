/*
 * XREFs of ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x180029BD0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetIsCenterHollow(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *a3)
{
  char v3; // al
  void (__fastcall *v4)(CNineGridBrush *, __int64, CNineGridBrush *); // rax

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 112) != v3 )
  {
    *((_BYTE *)this + 112) = v3;
    v4 = *(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 64LL);
    if ( (char *)v4 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 6LL, this);
    else
      v4(this, 6LL, this);
  }
  return 0LL;
}
