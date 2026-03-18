/*
 * XREFs of ?GetReservedPlaneInfo@CPlaneCaptureRenderTargetEngine@@QEAAJPEAUReservedPlaneInfo@COverlayContext@@@Z @ 0x18015BEC0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::GetReservedPlaneInfo(
        CPlaneCaptureRenderTargetEngine *this,
        struct COverlayContext::ReservedPlaneInfo *a2)
{
  int v4; // r8d
  int v5; // edx
  int v6; // eax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 result; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // [rsp+28h] [rbp-29h] BYREF
  __int128 v17; // [rsp+38h] [rbp-19h]
  __int128 v18; // [rsp+48h] [rbp-9h]
  __int128 v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+68h] [rbp+17h]
  __int128 v21; // [rsp+78h] [rbp+27h]
  __int128 v22; // [rsp+88h] [rbp+37h]

  memset_0(&v16, 0, 0x70uLL);
  if ( !*((_BYTE *)this + 266) || IsEmpty((const struct D2D_RECT_F *)((char *)this + 436)) )
    return 2291674884LL;
  memset_0(a2, 0, 0x90uLL);
  v4 = *((_DWORD *)this + 103);
  v5 = *((_DWORD *)this + 102);
  HIDWORD(v20) = *((_DWORD *)this + 94);
  HIDWORD(v16) = *((_DWORD *)this + 90);
  LODWORD(v17) = *((_DWORD *)this + 91);
  v6 = (int)*((float *)this + 105);
  DWORD1(v19) = 1;
  LODWORD(v22) = 2;
  DWORD1(v17) = v6;
  DWORD2(v17) = (int)*((float *)this + 106);
  HIDWORD(v17) = (int)*((float *)this + 107);
  v7 = v17;
  LODWORD(v18) = (int)*((float *)this + 108);
  DWORD1(v18) = (int)*((float *)this + 109);
  DWORD2(v18) = (int)*((float *)this + 110);
  HIDWORD(v18) = (int)*((float *)this + 111);
  LODWORD(v19) = (int)*((float *)this + 112);
  v8 = *(_QWORD *)(*((_QWORD *)this + 15) + 24LL);
  v9 = *((_QWORD *)this + 50);
  *((_OWORD *)a2 + 1) = v16;
  *((_QWORD *)a2 + 16) = v9;
  v10 = v18;
  *((_OWORD *)a2 + 2) = v7;
  *((_BYTE *)a2 + 140) = v4 != 0;
  result = 0LL;
  v12 = v19;
  *((_OWORD *)a2 + 3) = v10;
  *(_QWORD *)a2 = this;
  v13 = v20;
  *((_OWORD *)a2 + 4) = v12;
  *((_QWORD *)a2 + 1) = v8;
  v14 = v21;
  *((_OWORD *)a2 + 5) = v13;
  *((_DWORD *)a2 + 34) = v5;
  v15 = v22;
  *((_OWORD *)a2 + 6) = v14;
  *((_OWORD *)a2 + 7) = v15;
  return result;
}
