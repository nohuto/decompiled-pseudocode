/*
 * XREFs of ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801D55A4
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801A94FC (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D56F8 (-InternalRelease@-$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801D810C (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextWARPCallbackRenderer(
        CCallbackRendererManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CWARPCallbackRenderer **a3)
{
  DWORD v3; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  struct CWARPCallbackRenderer *v17; // [rsp+50h] [rbp+8h] BYREF
  struct CWARPCallbackRenderer *v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 22) )
    goto LABEL_13;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
  v7 = CWARPCallbackRenderer::Create(a2, &v17);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xE9u);
    goto LABEL_19;
  }
  v8 = *((unsigned int *)this + 22);
  v9 = (unsigned int)v17;
  v18 = v17;
  v10 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
    v9 = v8 + 1;
  v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( v10 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 21) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v18);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v8) = v18;
    *((_DWORD *)this + 22) = v9;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xEAu);
LABEL_19:
    Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
    return v3;
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v17);
LABEL_13:
  v12 = (unsigned int)(*((_DWORD *)this + 22) - 1);
  *a3 = *(struct CWARPCallbackRenderer **)(*((_QWORD *)this + 8) + 8 * v12);
  v13 = *((_DWORD *)this + 31);
  v14 = *((_DWORD *)this + 6);
  if ( (unsigned int)v12 < v13 )
    v13 = v12;
  *((_DWORD *)this + 22) = v12;
  ++*((_DWORD *)this + 26);
  *((_DWORD *)this + 31) = v13;
  v15 = (__int64)*a3;
  *(_DWORD *)(v15 + 40) = v14;
  *(_DWORD *)(v15 + 44) = v14;
  return v3;
}
