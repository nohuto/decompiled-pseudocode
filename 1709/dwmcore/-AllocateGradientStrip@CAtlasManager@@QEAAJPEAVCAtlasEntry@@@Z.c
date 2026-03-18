/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001714C
 * Callers:
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800727E4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800BC530 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?_Reserve@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C0518 (-_Reserve@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800C0B88 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(struct CAtlasTexture ***this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // r14d
  struct CAtlasTexture **i; // rax
  struct CAtlasTexture *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // eax
  struct CAtlasTexture *v13; // rsi
  struct CAtlasTexture **v14; // rax
  struct CAtlasTexture *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  struct CAtlasTexture *lpMem; // [rsp+80h] [rbp+30h]

  v4 = 0;
  v5 = (__int64)(this + 38);
  if ( !this )
    v5 = 888LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x12u);
  }
  else
  {
    for ( i = *this; i != this[1]; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 7) )
      {
        if ( v8 )
          goto LABEL_8;
        break;
      }
      if ( v4 <= *((_DWORD *)v8 + 6) )
        v4 = *((_DWORD *)v8 + 6);
    }
    lpMem = 0LL;
    v15 = 0LL;
    v16 = 1;
    v12 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v6 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)(this - 73), v12, &v15);
    if ( v16 && v15 )
      lpMem = v15;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x27u);
      if ( lpMem )
      {
        *(_QWORD *)lpMem = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(lpMem);
        WPF::ProcessHeapImpl::Free(*((void **)lpMem + 2));
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)lpMem + 1);
        WPF::ProcessHeapImpl::Free(lpMem);
      }
      return (unsigned int)v6;
    }
    v13 = lpMem;
    v8 = lpMem;
    if ( this[1] == this[2] )
    {
      std::vector<std::unique_ptr<CAtlasTexture>>::_Reserve(this);
      v13 = lpMem;
    }
    v14 = this[1];
    if ( v14 )
    {
      *v14 = v13;
      v13 = 0LL;
    }
    ++this[1];
    if ( v13 )
    {
      *(_QWORD *)v13 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v13);
      WPF::ProcessHeapImpl::Free(*((void **)v13 + 2));
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v13 + 1);
      WPF::ProcessHeapImpl::Free(v13);
    }
LABEL_8:
    v9 = 0LL;
    if ( !*((_DWORD *)v8 + 6) )
LABEL_30:
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    v10 = *((_QWORD *)v8 + 2);
    while ( *(_QWORD *)(v10 + 8 * v9) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)v8 + 6) )
        goto LABEL_30;
    }
    --*((_DWORD *)v8 + 7);
    *(_QWORD *)(v10 + 8 * v9) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = v9 + 1;
  }
  return (unsigned int)v6;
}
