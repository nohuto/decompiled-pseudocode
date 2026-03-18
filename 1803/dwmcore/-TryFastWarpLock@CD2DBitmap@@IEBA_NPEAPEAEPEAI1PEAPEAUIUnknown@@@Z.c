/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800188EC
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180018A40 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018BE0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180018D70 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180018DF0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // r12
  char *v6; // rax
  char *v11; // rsi
  __int64 v12; // rax
  CMILCOMBase *v13; // rbx
  struct IWarpPrivateAPI *v14; // r13
  struct IUnknown **v15; // rdx
  int v16; // eax
  __m128i v17; // xmm0
  unsigned int v18; // ecx
  struct IDXGIResource *v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v6 = (char *)this + 260;
  *a3 = 0;
  *v5 = 0LL;
  *a2 = 0LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 261) || *v6 )
  {
    v11 = (char *)this + 260;
    v20 = 0LL;
    v12 = *((_QWORD *)this + 3);
    v13 = 0LL;
    a5 = 0LL;
    v14 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(v12 + 24) + 632LL);
    *((_BYTE *)this + 261) = 1;
    *((_BYTE *)this + 260) = 0;
    if ( v14
      && (***((int (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 17))(
           *((_QWORD *)this + 17),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v20) >= 0 )
    {
      if ( (int)CWarpLockSubresource::Create(
                  *(struct CD3DDeviceLevel1 **)(*((_QWORD *)this + 3) + 24LL),
                  v14,
                  v20,
                  *((_DWORD *)this + 64),
                  (struct CWarpLockSubresource **)&a5) < 0 )
      {
        v13 = (CMILCOMBase *)a5;
      }
      else
      {
        v15 = a5;
        v16 = *((_DWORD *)this + 43);
        *v5 = (struct IUnknown *)a5;
        v17 = *((__m128i *)v15 + 3);
        *v11 = 1;
        *a2 = (unsigned __int8 *)v17.m128i_i64[0];
        v18 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
        *a3 = v18;
        *a4 = v18 * v16;
      }
    }
    ReleaseInterfaceNoNULL<IWICBitmap>(v20);
    v6 = v11;
    if ( v13 )
    {
      CMILCOMBase::InternalRelease(v13);
      v6 = v11;
    }
  }
  return *v6;
}
