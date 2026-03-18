/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x180001978
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  struct ID2D1Ink *v5; // rdi
  int v6; // r15d
  int v9; // eax
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  __int64 v13; // r14
  int ID2D1InkAndInkStyle; // eax
  int v15; // eax
  struct ID2D1InkStyle *v16; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  v6 = v3 - *((_DWORD *)this + 44);
  v17 = 0LL;
  if ( v6 >= 0 )
  {
    v9 = DynArrayImpl<0>::Grow((int)this + 152, 36, v6, 0, 0LL);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA3u);
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v11 = *((_DWORD *)this + 24);
  v12 = 0;
  if ( !v11 )
  {
LABEL_3:
    *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    goto LABEL_4;
  }
  v13 = 0LL;
  while ( 1 )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v13 + *((_QWORD *)this + 9)), &v17, &v16);
    v4 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
      break;
    v5 = v17;
    v15 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, (unsigned int)-v6);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x9Bu);
      goto LABEL_4;
    }
    ReleaseInterface<IBitmapLock>(&v17);
    ReleaseInterface<IBitmapLock>(&v16);
    ++v12;
    v13 += 8LL;
    if ( v12 >= v11 )
    {
      v5 = v17;
      goto LABEL_3;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x99u);
  v5 = v17;
LABEL_4:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v5);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v16);
  return v4;
}
