/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007C020
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x180060A80 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x18007D000 (-GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v11)(CDWMSwapChain *__hidden, unsigned int *); // rax
  int LastPresentCountInternal; // eax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwFullScreenRenderTarget *)((char *)this - 216);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v6, 0x36Au);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        v9 = -2003304442;
        v14 = -2003304442;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  v9 = v6;
  v14 = v6;
  if ( v6 < 0 )
  {
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v6, 0xD8u);
    goto LABEL_13;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 4);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, unsigned int *))(*(_QWORD *)v10 + 320LL);
  if ( v11 == CDWMSwapChain::GetLastPresentCountInternal )
    LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(v10, a2);
  else
    LastPresentCountInternal = v11(v10, a2);
  v9 = LastPresentCountInternal;
  if ( LastPresentCountInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastPresentCountInternal, 0xF6u);
  v14 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v9, 0xDAu);
LABEL_13:
  TranslateDXGIorD3DErrorInContext(v9, 0, &v14);
  return v14;
}
