/*
 * XREFs of ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002ADE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002AC10 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CRgnGeometry::ProcessUpdate(
        CRgnGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RGNGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  SIZE_T v5; // rsi
  void **v6; // r14
  void *v9; // rcx
  int v10; // ebx
  LPVOID v11; // rax
  unsigned int v13; // eax

  v5 = *((unsigned int *)a3 + 2);
  v6 = (void **)((char *)this + 144);
  v9 = (void *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    operator delete(v9);
    *v6 = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_11;
  if ( (unsigned int)v5 > a5 || (v5 & 0xF) != 0 )
  {
    v10 = -2003303421;
    v13 = 1746;
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
    v13 = 1752;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
    CRgnGeometry::UnRegisterNotifiers(this);
    goto LABEL_12;
  }
  memcpy_0(*v6, a4, v5);
  *((_DWORD *)this + 34) = v5;
LABEL_11:
  v10 = 0;
LABEL_12:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
