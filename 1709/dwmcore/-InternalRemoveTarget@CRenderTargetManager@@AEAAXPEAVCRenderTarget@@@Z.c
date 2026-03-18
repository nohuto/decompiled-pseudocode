/*
 * XREFs of ?InternalRemoveTarget@CRenderTargetManager@@AEAAXPEAVCRenderTarget@@@Z @ 0x18001B2AC
 * Callers:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18001B260 (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z @ 0x18007BAF8 (-Remove@-$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::InternalRemoveTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v4; // si
  __int64 v5; // rcx
  struct CRenderTarget *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 0;
  DynArray<CRenderTarget *,1>::Remove((char *)this + 24, &v7);
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 70LL) )
  {
    --*((_DWORD *)this + 24);
    v4 = 1;
    CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(this, a2, 0);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    if ( (*((_DWORD *)this + 25))-- == 1 )
      DwmGenerateMoveData(0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 73LL) )
    --*((_DWORD *)this + 26);
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 65LL) )
    --*((_DWORD *)this + 27);
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
    if ( v5 )
      *(_BYTE *)(v5 + 28) = 1;
  }
}
