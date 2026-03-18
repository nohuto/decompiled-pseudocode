/*
 * XREFs of ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180137A74
 * Callers:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18001B260 (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013715C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::SetTargetOcclusion(
        CIndirectSwapchainRenderTarget *this,
        struct CRenderTarget *a2,
        char a3)
{
  char *v4; // rcx
  signed int v5; // ebx
  __int64 v6; // r8
  unsigned int v7; // r9d
  struct CRenderTarget **v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  signed int v12; // eax
  struct CRenderTarget *v14; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+18h]

  v14 = a2;
  v4 = (char *)this + 376;
  v5 = 0;
  if ( a3 )
  {
    v6 = *((unsigned int *)v4 + 6);
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      v8 = *(struct CRenderTarget ***)v4;
      while ( a2 != *v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= (unsigned int)v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v9 = v15;
      v10 = v6 + 1;
      if ( (int)v6 + 1 >= (unsigned int)v6 )
        v9 = v6 + 1;
      v5 = v10 < (unsigned int)v6 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v4 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v14);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v6) = v14;
        *((_DWORD *)v4 + 6) = v9;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x156u);
      }
      else
      {
        *((_BYTE *)this + 456) |= 2u;
        v12 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x158u);
      }
    }
  }
  else
  {
    DynArray<CBaseExpression *,1>::Remove(v4, &v14);
  }
  return (unsigned int)v5;
}
