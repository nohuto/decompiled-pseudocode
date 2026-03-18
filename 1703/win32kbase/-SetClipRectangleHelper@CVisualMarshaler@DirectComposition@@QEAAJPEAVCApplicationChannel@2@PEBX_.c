/*
 * XREFs of ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0016E80
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00178B0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C001AF4C (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B3B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v15; // eax
  struct DirectComposition::CResourceMarshaler *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v6 = *((_QWORD *)this + 16);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 72LL)
    || (v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16),
        DirectComposition::CResourceMarshaler::AddRef(v11),
        --*((_DWORD *)v11 + 5),
        *((_DWORD *)v11 + 5) != 1) )
  {
    v7 = 1;
    v15 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x48u, &v16);
    v11 = v16;
    v13 = v15;
    if ( v15 < 0 )
      goto LABEL_10;
  }
  v12 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v11, 0xDu, a3, a4);
  v13 = v12;
  if ( v7 )
  {
    if ( v12 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 168LL))(
        this,
        a2,
        6LL,
        v11,
        a5);
LABEL_10:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
  }
  return v13;
}
