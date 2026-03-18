/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x1800583C4
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x1801298C0 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CRgnGeometry::ProcessUpdate(
        CRgnGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RGNGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  SIZE_T v5; // rbx
  void **v6; // rsi
  void *v9; // rcx
  SIZE_T v10; // r8
  int v11; // ebx
  LPVOID v12; // rax

  v5 = *((unsigned int *)a3 + 2);
  v6 = (void **)((char *)this + 112);
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    WPF::ProcessHeapImpl::Free(v9);
    *v6 = 0LL;
  }
  *((_DWORD *)this + 26) = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_11;
  if ( (unsigned int)v5 > a5 || (v5 & 0xF) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE4Bu);
    goto LABEL_16;
  }
  v10 = v5;
  v11 = 0;
  if ( v6 )
  {
    v12 = HeapAlloc(WPF::g_processHeap, 0, v10);
    *v6 = v12;
    if ( !v12 )
      v11 = -2147024882;
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xE53u);
LABEL_16:
    CRgnGeometry::UnRegisterNotifiers(this);
    goto LABEL_12;
  }
  memcpy_0(*v6, a4, *((unsigned int *)this + 26));
LABEL_11:
  v11 = 0;
LABEL_12:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v11;
}
