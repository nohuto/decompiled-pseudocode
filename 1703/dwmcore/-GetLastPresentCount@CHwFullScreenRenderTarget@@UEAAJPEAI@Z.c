/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180070240
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18006CC20 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x18003E0A0 (-GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  v4 = (CHwFullScreenRenderTarget *)((char *)this - 176);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 872);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v6, 0x516u);
    }
    else
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v4 + 48LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v4);
      else
        IsValid = v7();
      if ( !IsValid )
      {
        v6 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304442, 0x522u);
        v9 = -2003304442;
        v14 = -2003304442;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x51Au);
  }
  v9 = v6;
  v14 = v6;
  if ( v6 < 0 )
  {
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x16Bu);
    goto LABEL_13;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int *))(*(_QWORD *)v10 + 288LL);
  if ( v11 == CDWMSwapChain::GetLastPresentCountInternal )
    LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(v10, a2);
  else
    LastPresentCountInternal = v11(v10, a2);
  v9 = LastPresentCountInternal;
  if ( LastPresentCountInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastPresentCountInternal, 0x1B8u);
  v14 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x16Du);
LABEL_13:
  TranslateDXGIorD3DErrorInContext((unsigned int)v9, 0LL, &v14);
  return v14;
}
