/*
 * XREFs of ?ProcessSetStretch@CViewBox@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VIEWBOX_SETSTRETCH@@@Z @ 0x1801A6DD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CViewBox::ProcessSetStretch(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct MILCMD_VIEWBOX_SETSTRETCH *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 60) != v3 )
  {
    *((_DWORD *)this + 60) = v3;
    CResource::NotifyOnChanged(this, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))2, this);
  }
  return 0LL;
}
