/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180191644
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191328 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
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
  unsigned int v14; // r13d
  __int64 v15; // r14
  int ID2D1InkAndInkStyle; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  bool v19; // cf
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int128 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v27; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v28; // [rsp+A8h] [rbp+48h] BYREF

  v28 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0LL;
  v9 = *((_QWORD *)this + 17);
  v10 = 0;
  v27 = 0LL;
  DWORD2(v24) = v3;
  v12 = 9 * v7;
  LODWORD(v24) = v5;
  DWORD1(v24) = *((_DWORD *)a3 + 4);
  HIDWORD(v24) = *((_DWORD *)a3 + 6);
  DWORD1(v25) = *((_DWORD *)a3 + 8);
  v26 = *((_DWORD *)a3 + 11);
  LODWORD(v25) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v25) = *((_DWORD *)a3 + 10);
  v28 = 0LL;
  DWORD2(v25) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v24;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v25;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v26;
  v14 = *((_DWORD *)this + 24);
  if ( v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v15 + *((_QWORD *)this + 9)), &v28, &v27);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v8 = v28;
      v17 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v28 + 80LL))(v28);
      v18 = *((unsigned int *)a3 + 2);
      v19 = (unsigned int)v18 < v17;
      v20 = *(_QWORD *)v8;
      if ( v19 )
      {
        v21 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(v20 + 64))(
                v8,
                v18,
                *((_QWORD *)this + 17) + 36 * v18,
                1LL);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xD7u);
          goto LABEL_12;
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v20 + 48))(
                v8,
                *((_QWORD *)this + 17) + 36 * v18,
                1LL);
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xDEu);
          goto LABEL_12;
        }
      }
      ReleaseInterface<IBitmapLock>((__int64 *)&v28);
      ReleaseInterface<IBitmapLock>((__int64 *)&v27);
      ++v10;
      v15 += 8LL;
      if ( v10 >= v14 )
      {
        v8 = v28;
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v8 = v28;
  }
  else
  {
LABEL_11:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
LABEL_12:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v27);
  return v6;
}
