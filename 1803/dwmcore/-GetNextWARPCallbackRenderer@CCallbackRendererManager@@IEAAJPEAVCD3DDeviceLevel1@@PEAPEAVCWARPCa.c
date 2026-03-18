/*
 * XREFs of ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1802186E4
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801E1870 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ @ 0x180218834 (-InternalRelease@-$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18021B438 (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextWARPCallbackRenderer(
        CCallbackRendererManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CWARPCallbackRenderer **a3)
{
  int v4; // ebx
  int v5; // edx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rdx
  bool v13; // cf
  int v14; // ecx
  __int64 v15; // rax
  struct CWARPCallbackRenderer *v17; // [rsp+50h] [rbp+8h] BYREF
  struct CWARPCallbackRenderer *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 22);
  if ( v5 )
    goto LABEL_11;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
  v8 = CWARPCallbackRenderer::Create(a2, &v17);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF0u);
    goto LABEL_17;
  }
  v18 = v17;
  v9 = *((_DWORD *)this + 22);
  v10 = v9 + 1;
  v4 = v9 + 1 < v9 ? 0x80070216 : 0;
  if ( v9 + 1 < v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v10 > *((_DWORD *)this + 21) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v18);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v9) = v18;
    *((_DWORD *)this + 22) = v10;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF1u);
LABEL_17:
    Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
    return (unsigned int)v4;
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
  v5 = *((_DWORD *)this + 22);
LABEL_11:
  v12 = (unsigned int)(v5 - 1);
  *a3 = *(struct CWARPCallbackRenderer **)(*((_QWORD *)this + 8) + 8 * v12);
  v13 = (unsigned int)v12 < *((_DWORD *)this + 31);
  v14 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 22) = v12;
  if ( !v13 )
    LODWORD(v12) = *((_DWORD *)this + 31);
  ++*((_DWORD *)this + 26);
  *((_DWORD *)this + 31) = v12;
  v15 = (__int64)*a3;
  *(_DWORD *)(v15 + 40) = v14;
  *(_DWORD *)(v15 + 44) = v14;
  return (unsigned int)v4;
}
