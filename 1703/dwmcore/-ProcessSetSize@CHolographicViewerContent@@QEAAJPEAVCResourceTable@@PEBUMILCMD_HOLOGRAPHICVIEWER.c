/*
 * XREFs of ?ProcessSetSize@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_SETSIZE@@@Z @ 0x18012E968
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CHolographicViewerContent::ProcessSetSize(
        CHolographicViewerContent *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICVIEWERCONTENT_SETSIZE *a3)
{
  int v3; // esi
  RTL_SRWLOCK *v4; // rbx
  int v7; // r14d

  v3 = (int)*((float *)this + 28);
  v4 = (RTL_SRWLOCK *)((char *)this + 136);
  v7 = (int)*((float *)this + 29);
  AcquireSRWLockExclusive((PSRWLOCK)this + 17);
  *((float *)this + 28) = (float)*((int *)a3 + 2);
  *((float *)this + 29) = (float)*((int *)a3 + 3);
  ReleaseSRWLockExclusive(v4);
  if ( *((float *)this + 28) != (float)v3 || *((float *)this + 26) != (float)v7 )
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
