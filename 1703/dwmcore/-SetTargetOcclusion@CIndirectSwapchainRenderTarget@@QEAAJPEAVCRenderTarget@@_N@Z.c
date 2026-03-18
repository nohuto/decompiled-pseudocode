/*
 * XREFs of ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1801491B8
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18006B3AC (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B428C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18014793C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::SetTargetOcclusion(
        CIndirectSwapchainRenderTarget *this,
        struct CRenderTarget *a2,
        char a3)
{
  int v3; // ebx
  char *v5; // r10
  unsigned int v6; // ecx
  struct CRenderTarget **v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CRenderTarget *v14; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+18h]

  v3 = 0;
  v14 = a2;
  if ( a3 )
  {
    v5 = (char *)this + 376;
    v6 = 0;
    v7 = *(struct CRenderTarget ***)v5;
    if ( *((_DWORD *)v5 + 6) )
    {
      while ( a2 != *v7 )
      {
        ++v6;
        ++v7;
        if ( v6 >= *((_DWORD *)v5 + 6) )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v8 = *((unsigned int *)v5 + 6);
      v9 = v15;
      v10 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v9 = v8 + 1;
      v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v5 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8u, 1, &v14);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8 * v8) = v14;
        *((_DWORD *)v5 + 6) = v9;
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x144u);
      }
      else
      {
        *((_BYTE *)this + 456) |= 2u;
        v12 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x146u);
      }
    }
  }
  else
  {
    DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 47, (__int64 *)&v14);
  }
  return (unsigned int)v3;
}
