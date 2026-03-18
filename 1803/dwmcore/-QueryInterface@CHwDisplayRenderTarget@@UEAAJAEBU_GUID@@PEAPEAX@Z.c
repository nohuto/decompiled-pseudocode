/*
 * XREFs of ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046420
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE370 (-QueryInterface@CHwDisplayRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwDisplayRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE380 (-QueryInterface@CHwDisplayRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800463E0 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800471B0 (-HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::QueryInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  CHwDisplayRenderTarget *v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int Interface; // eax
  void (*v10)(void); // rax

  v3 = (CHwDisplayRenderTarget *)((char *)this + 160);
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v3 + 32LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::HrFindInterface )
        Interface = CHwDisplayRenderTarget::HrFindInterface(v3, a2, a3);
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
    v10 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v10 == (char *)CHwDisplayRenderTarget::AddRef )
      CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)*a3);
    else
      v10();
  }
  return v5;
}
