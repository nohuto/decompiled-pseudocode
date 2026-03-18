/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x180001A1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // ebp
  char *v4; // r14
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v9; // rsi
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v11; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_DWORD *)this + 24);
  v4 = (char *)this + 184;
  v5 = 0;
  v6 = 0;
  v12 = 0LL;
  v11 = 0LL;
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 3);
  if ( v3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v9 + *((_QWORD *)this + 9)), &v12, &v11);
      v5 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v12 + 32LL))(v12, v4);
      ReleaseInterface<IBitmapLock>(&v12);
      ReleaseInterface<IBitmapLock>(&v11);
      ++v6;
      v9 += 8LL;
      if ( v6 >= v3 )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x72u);
  }
  else
  {
LABEL_2:
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v12);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v11);
  return v5;
}
