/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001714C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?_Reallocate@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C044C (-_Reallocate@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800C0B88 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801AE740 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AE848 (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B3B40 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x180088900 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18008B9A8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801CF588 (-NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  unsigned int v1; // eax
  int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  const struct CD3DDeviceLevel1 *Device; // rax
  void *v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 1) )
  {
    if ( v3 != v1 && v1 )
    {
      v4 = 0LL;
      v5 = v1;
      do
      {
        v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          Device = CAtlasTexture::GetDevice(*(CAtlasTexture **)v6);
          *(_QWORD *)v6 = 0LL;
          *(_DWORD *)(v6 + 16) = -1;
          CAtlasEntry::NotifyOwner((CAtlasEntry *)v6, Device);
        }
        v4 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>((_QWORD *)this + 1, &v9);
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v9 + 32LL))(v9, this);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
}
