/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x180191384
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191328 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_BASICSTATEUPDATE *a3)
{
  unsigned int v3; // esi
  char *v4; // r15
  __int64 v6; // rdx
  float *v7; // rax
  double *v8; // rcx
  double v9; // xmm0_8
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  __int64 v12; // r14
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v14; // rbx
  struct ID2D1Ink *v16; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = (char *)this + 184;
  v16 = 0LL;
  v17 = 0LL;
  v6 = 6LL;
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 6) != 0;
  v7 = (float *)((char *)this + 184);
  v8 = (double *)((char *)a3 + 28);
  do
  {
    v9 = *v8++;
    *v7++ = v9;
    --v6;
  }
  while ( v6 );
  v10 = 0;
  v11 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  if ( v11 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v12 + *((_QWORD *)this + 9)), &v16, &v17);
      v3 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v14 = v17;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v17 + 48LL))(
        v17,
        *((unsigned int *)this + 45));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v14 + 32LL))(v14, v4);
      ReleaseInterface<IBitmapLock>((__int64 *)&v16);
      ReleaseInterface<IBitmapLock>((__int64 *)&v17);
      ++v10;
      v12 += 8LL;
      if ( v10 >= v11 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x4Cu);
  }
  else
  {
LABEL_7:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v16);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v17);
  return v3;
}
