/*
 * XREFs of ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x180183ABC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800CCF9C (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetCreationParams(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS *a3)
{
  int v4; // edx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax

  if ( *((_QWORD *)this + 19) != *((_QWORD *)a3 + 1) )
  {
    *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
    v4 = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 39) = v4;
    v5 = 6 * v4;
    *((_BYTE *)this + 160) = *((_DWORD *)a3 + 4) != 0;
    v6 = DynArrayImpl<1>::Grow((__int64)this + 80, 0x20u, 6 * v4, 1, 0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA2u);
      return v7;
    }
    v8 = *(_QWORD *)this;
    *((_DWORD *)this + 26) = v5;
    (*(void (__fastcall **)(CCompositionCubeMap *, _QWORD, _QWORD))(v8 + 64))(this, 0LL, 0LL);
  }
  return 0;
}
