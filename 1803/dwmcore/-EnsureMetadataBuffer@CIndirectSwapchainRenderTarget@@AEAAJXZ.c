/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801595E4
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180159DF0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159EC0 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180159F04 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801592F4 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 480;
  *((_DWORD *)this + 126) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
  v3 = *((_QWORD *)this + 2);
  v12 = 3;
  v13[0] = *(_QWORD *)(v3 + 496);
  v13[1] = g_qpcFrequency.QuadPart;
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x21Eu);
  }
  else
  {
    v6 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, v13, 0x10u);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x21Fu);
    }
    else if ( *((_BYTE *)this + 267)
           && (v12 = 4, v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v7, v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x225u);
    }
    else if ( *((_BYTE *)this + 514)
           || (v12 = 2, v8 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v8, v8 >= 0) )
    {
      if ( *((_BYTE *)this + 513)
        && (v12 = 1, v9 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v9, v9 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x231u);
      }
      else if ( *((_BYTE *)this + 512) )
      {
        v12 = 0;
        v10 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u);
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x237u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x22Bu);
    }
  }
  return v5;
}
