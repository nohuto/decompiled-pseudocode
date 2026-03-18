/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18002EF60
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800182C0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x18002E690 (-GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget *this, unsigned int *a2)
{
  __int64 v2; // rax
  CHwDisplayRenderTarget *v4; // rcx
  int v6; // edi
  __int64 (*v7)(void); // rax
  char IsValid; // al
  int v9; // ebx
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *, unsigned int *); // rax
  int LastPresentCountInternal; // eax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwFullScreenRenderTarget *)((char *)this - 192);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v6, 0x374u);
    }
    else
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v4);
      else
        IsValid = v7();
      if ( !IsValid )
      {
        v6 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304442, 0x37Eu);
        v9 = -2003304442;
        v14 = -2003304442;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  v9 = v6;
  v14 = v6;
  if ( v6 < 0 )
  {
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9Au);
    goto LABEL_13;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int *))(*(_QWORD *)v10 + 296LL);
  if ( v11 == CDWMSwapChain::GetLastPresentCountInternal )
    LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(v10, a2);
  else
    LastPresentCountInternal = v11(v10, a2);
  v9 = LastPresentCountInternal;
  if ( LastPresentCountInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastPresentCountInternal, 0x13Bu);
  v14 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Cu);
LABEL_13:
  TranslateDXGIorD3DErrorInContext(v9, 0, &v14);
  return v14;
}
