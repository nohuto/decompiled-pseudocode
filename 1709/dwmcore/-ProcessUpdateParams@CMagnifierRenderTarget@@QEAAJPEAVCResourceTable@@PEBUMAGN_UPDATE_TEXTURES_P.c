/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801389A8
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800B4CAC (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CMatrixTransform *v8; // rcx
  __int64 v9; // xmm0_8
  struct CResourceTable *v10; // rdx
  signed int v11; // eax
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[4]; // [rsp+34h] [rbp-44h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v4 = (char *)this + 552;
  v6 = 0;
  if ( memcmp_0((char *)this + 552, a3, 0x28uLL) )
  {
    v7 = *((_QWORD *)this + 16);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 35) = (float)*(int *)a3;
    *((float *)this + 36) = (float)*((int *)a3 + 1);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 89LL) )
      {
        v13 = 404;
        memset_0(v14, 0, 0x34uLL);
        v8 = (CMatrixTransform *)*((_QWORD *)this + 16);
        v9 = *((_QWORD *)a3 + 1);
        v16 = *((_OWORD *)a3 + 1);
        v17 = *((_QWORD *)a3 + 4);
        v15 = v9;
        v11 = CMatrixTransform::ProcessUpdate(v8, v10, (const struct MILCMD_MATRIXTRANSFORM *)&v13);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x11Eu);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x114u);
      }
    }
  }
  return v6;
}
