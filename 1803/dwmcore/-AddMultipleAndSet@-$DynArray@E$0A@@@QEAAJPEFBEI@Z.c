/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801592F4
 * Callers:
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801595E4 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x18018F6E4 (-ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESU.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18018F7B8 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall DynArray<unsigned char,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3 < v3 ? 0x80070216 : 0;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 1u, a3, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
