/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800789A0
 * Callers:
 *     ?QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE0F0 (-QueryInterface@CHwTextureRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE100 (-QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE110 (-QueryInterface@CHwTextureRenderTarget@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE120 (-QueryInterface@CHwTextureRenderTarget@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE130 (-QueryInterface@CHwTextureRenderTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CHwTextureRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078580 (-HrFindInterface@CHwTextureRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  CHwTextureRenderTarget *v3; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int Interface; // eax

  v3 = (CHwTextureRenderTarget *)((char *)this + 160);
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v3 + 32LL);
      if ( (char *)v7 == (char *)CHwTextureRenderTarget::HrFindInterface )
        Interface = CHwTextureRenderTarget::HrFindInterface(v3, a2, a3);
      else
        Interface = v7();
      v5 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v5;
}
