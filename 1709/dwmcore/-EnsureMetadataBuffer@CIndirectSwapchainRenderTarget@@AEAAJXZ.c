/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013715C
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180137960 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137A2C (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180137A74 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180136E50 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rax
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 424;
  *((_DWORD *)this + 112) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 424, 1u);
  v3 = *((_QWORD *)this + 2);
  v12 = 3;
  v13[0] = *(_QWORD *)(v3 + 472);
  v13[1] = g_qpcFrequency.QuadPart;
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x22Eu);
  }
  else
  {
    v6 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, v13, 0x10u);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x22Fu);
    }
    else if ( *((_BYTE *)this + 211)
           && (v12 = 4, v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v7, v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x235u);
    }
    else if ( (*((_BYTE *)this + 456) & 4) != 0
           || (v12 = 2, v8 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v8, v8 >= 0) )
    {
      if ( (*((_BYTE *)this + 456) & 2) != 0
        && (v12 = 1, v9 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u), v5 = v9, v9 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x241u);
      }
      else if ( (*((_BYTE *)this + 456) & 1) != 0 )
      {
        v12 = 0;
        v10 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v12, 4u);
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x247u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x23Bu);
    }
  }
  return v5;
}
