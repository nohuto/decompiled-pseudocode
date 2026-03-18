/*
 * XREFs of ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801BF2FC
 * Callers:
 *     ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB7CC (-GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Create(struct CD3DDeviceLevel1 *a1, struct CWARPCallbackRenderer **a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx

  v4 = (volatile signed __int32 *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = &CMILRefCountBase::`vftable';
    *((_DWORD *)v4 + 4) = 0;
    *(_QWORD *)v4 = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
    *((_QWORD *)v4 + 1) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
    *((_QWORD *)v4 + 3) = a1;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    *((_BYTE *)v4 + 68) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 4);
    v7 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 624LL);
    *((_QWORD *)v5 + 4) = v7;
    v6 = v7 == 0 ? 0x80004002 : 0;
    if ( v7 )
    {
      *a2 = (struct CWARPCallbackRenderer *)v5;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x57u);
      CMILRefCountBase::Release((CMILRefCountBase *)(v5 + 2));
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x54u);
  }
  return v6;
}
