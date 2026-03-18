/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180001AA8
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

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTUPDATE *a3)
{
  int v3; // xmm0_4
  int v5; // xmm1_4
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct ID2D1Ink *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v12; // rdx
  int v13; // xmm1_4
  unsigned int v14; // r12d
  __int64 v16; // rsi
  int ID2D1InkAndInkStyle; // eax
  __int64 v18; // rbx
  bool v19; // cf
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int128 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v26; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v27; // [rsp+A8h] [rbp+48h] BYREF

  v27 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0LL;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  v26 = 0LL;
  DWORD2(v23) = v3;
  v12 = 9 * v7;
  LODWORD(v23) = v5;
  DWORD1(v23) = *((_DWORD *)a3 + 4);
  HIDWORD(v23) = *((_DWORD *)a3 + 6);
  DWORD1(v24) = *((_DWORD *)a3 + 8);
  v25 = *((_DWORD *)a3 + 11);
  LODWORD(v24) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v24) = *((_DWORD *)a3 + 10);
  v27 = 0LL;
  DWORD2(v24) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v23;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v24;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v25;
  v14 = *((_DWORD *)this + 24);
  if ( v14 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v16 + *((_QWORD *)this + 9)), &v27, &v26);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v8 = v27;
      v18 = *((unsigned int *)a3 + 2);
      v19 = (unsigned int)v18 < (*(unsigned int (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v27 + 80LL))(v27);
      v20 = *((_QWORD *)this + 19);
      if ( v19 )
      {
        v21 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 64LL))(
                v8,
                (unsigned int)v18,
                v20 + 36 * v18,
                1LL);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xD7u);
          goto LABEL_3;
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(*(_QWORD *)v8 + 48LL))(
                v8,
                v20 + 36 * v18,
                1LL);
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xDEu);
          goto LABEL_3;
        }
      }
      ReleaseInterface<IBitmapLock>(&v27);
      ReleaseInterface<IBitmapLock>(&v26);
      ++v10;
      v16 += 8LL;
      if ( v10 >= v14 )
      {
        v8 = v27;
        goto LABEL_2;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v8 = v27;
  }
  else
  {
LABEL_2:
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
LABEL_3:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v8);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v26);
  return v6;
}
