/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18004C8A8
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18004BFC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18004C180 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004C1D0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18000AC34 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // rbp
  CMILCOMBase *v10; // rdi
  __int64 v11; // rax
  struct IWarpPrivateAPI *v12; // r12
  struct IUnknown **v13; // rdx
  int v14; // eax
  __m128i v15; // xmm0
  unsigned int v16; // ecx
  struct IDXGIResource *v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  *v5 = 0LL;
  if ( !*((_BYTE *)this + 261) || *((_BYTE *)this + 260) )
  {
    v18 = 0LL;
    v10 = 0LL;
    v11 = *((_QWORD *)this + 3);
    a5 = 0LL;
    v12 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(v11 + 24) + 632LL);
    *((_WORD *)this + 130) = 256;
    if ( v12
      && (***((int (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 17))(
           *((_QWORD *)this + 17),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v18) >= 0 )
    {
      if ( (int)CWarpLockSubresource::Create(
                  *(struct CD3DDeviceLevel1 **)(*((_QWORD *)this + 3) + 24LL),
                  v12,
                  v18,
                  *((_DWORD *)this + 64),
                  (struct CWarpLockSubresource **)&a5) < 0 )
      {
        v10 = (CMILCOMBase *)a5;
      }
      else
      {
        v13 = a5;
        v14 = *((_DWORD *)this + 43);
        *v5 = (struct IUnknown *)a5;
        v15 = *((__m128i *)v13 + 3);
        *((_BYTE *)this + 260) = 1;
        *a2 = (unsigned __int8 *)v15.m128i_i64[0];
        v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
        *a3 = v16;
        *a4 = v16 * v14;
      }
    }
    ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v18);
    if ( v10 )
      CMILCOMBase::InternalRelease(v10);
  }
  return *((_BYTE *)this + 260);
}
