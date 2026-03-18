/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001171C
 * Callers:
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180011640 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001184C (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180013648 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@@Z @ 0x180013760 (--$emplace_back@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@@-$v.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801EC04C (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasManager *this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // esi
  __int64 i; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // eax
  CAtlasTexture *v13; // rbx
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  void *v16; // rcx
  CAtlasTexture *v17; // rcx
  void *v18; // rcx
  _QWORD *v19; // rbx
  CAtlasTexture *v20; // rcx
  void *v21; // rcx
  struct CAtlasTexture *v22; // [rsp+38h] [rbp-18h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+18h]
  void *lpMem; // [rsp+70h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (__int64)this + 304;
  if ( !this )
    v5 = 888LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x12u);
  }
  else
  {
    for ( i = *(_QWORD *)this; i != *((_QWORD *)this + 1); i += 8LL )
    {
      v8 = *(_DWORD **)i;
      if ( *(_DWORD *)(*(_QWORD *)i + 28LL) )
      {
        if ( v8 )
          goto LABEL_8;
        break;
      }
      v15 = v8[6];
      if ( v4 > v15 )
        v15 = v4;
      v4 = v15;
    }
    lpMem = 0LL;
    v22 = 0LL;
    v23 = 1;
    v12 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v6 = CAtlasTexture::Create((CAtlasManager *)((char *)this - 584), v12, &v22);
    if ( v23 )
    {
      v13 = (CAtlasTexture *)lpMem;
      lpMem = v22;
      if ( v13 )
      {
        *(_QWORD *)v13 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v13);
        v16 = (void *)*((_QWORD *)v13 + 2);
        if ( v16 )
          operator delete(v16);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v13 + 8);
        operator delete(v13);
      }
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x27u);
      v19 = lpMem;
      if ( lpMem )
      {
        v20 = (CAtlasTexture *)lpMem;
        *(_QWORD *)lpMem = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v20);
        v21 = (void *)v19[2];
        if ( v21 )
          operator delete(v21);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v19 + 1);
        operator delete(v19);
      }
      return (unsigned int)v6;
    }
    v8 = lpMem;
    std::vector<std::unique_ptr<CAtlasTexture>>::emplace_back<std::unique_ptr<CAtlasTexture>>(this, &lpMem);
    v14 = lpMem;
    if ( lpMem )
    {
      v17 = (CAtlasTexture *)lpMem;
      *(_QWORD *)lpMem = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v17);
      v18 = (void *)v14[2];
      if ( v18 )
        operator delete(v18);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v14 + 1);
      operator delete(v14);
    }
LABEL_8:
    v9 = 0LL;
    if ( !v8[6] )
LABEL_31:
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    v10 = *((_QWORD *)v8 + 2);
    while ( *(_QWORD *)(v10 + 8 * v9) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8[6] )
        goto LABEL_31;
    }
    --v8[7];
    *(_QWORD *)(v10 + 8 * v9) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = v9 + 1;
  }
  return (unsigned int)v6;
}
