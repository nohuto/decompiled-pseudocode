/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180096934
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18011A1A0 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CRgnGeometry::ProcessUpdate(
        CRgnGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RGNGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  SIZE_T v5; // rdi
  void **v6; // r14
  void *v9; // rcx
  signed int v10; // ebx
  LPVOID v11; // rax

  v5 = *((unsigned int *)a3 + 2);
  v6 = (void **)((char *)this + 112);
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    WPF::ProcessHeapImpl::Free(v9);
    *v6 = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_11;
  if ( (unsigned int)v5 > a5 || (v5 & 0xF) != 0 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x6C2u);
    goto LABEL_16;
  }
  v10 = 0;
  if ( v6 )
  {
    v11 = HeapAlloc(WPF::g_processHeap, 0, v5);
    *v6 = v11;
    if ( !v11 )
      v10 = -2147024882;
  }
  else
  {
    v10 = -2147024809;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x6C8u);
LABEL_16:
    CRgnGeometry::UnRegisterNotifiers(this);
    goto LABEL_12;
  }
  memcpy_0(*v6, a4, v5);
  *((_DWORD *)this + 26) = v5;
LABEL_11:
  v10 = 0;
LABEL_12:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
