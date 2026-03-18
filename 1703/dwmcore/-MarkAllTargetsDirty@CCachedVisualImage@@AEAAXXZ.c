/*
 * XREFs of ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180047FFC
 * Callers:
 *     ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180047740 (-OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800488D8 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180165BAC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180046654 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180046CD0 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7D50 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

void __fastcall CCachedVisualImage::MarkAllTargetsDirty(
        CCachedVisualImage *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  CCachedVisualImage::RenderTargetBitmapInfo *v7; // rdi

  v4 = *((_DWORD *)this + 52);
  if ( v4 > 0 )
  {
    v5 = (_QWORD *)((char *)this + 184);
    do
    {
      v6 = (unsigned int)(v4 - 1);
      v7 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v5 + 48 * v6);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v7, a2, a3, a4) )
      {
        *((_BYTE *)v7 + 44) = 1;
      }
      else
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v7);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v5, (unsigned int)v6);
      }
      --v4;
    }
    while ( v4 > 0 );
  }
}
