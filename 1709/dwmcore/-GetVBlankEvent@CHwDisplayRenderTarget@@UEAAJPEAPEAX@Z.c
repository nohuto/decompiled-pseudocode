/*
 * XREFs of ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x18002BD00
 * Callers:
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180018320 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CDWMSwapChain@@UEAAJPEAPEAX@Z @ 0x18002E630 (-GetVBlankEvent@CDWMSwapChain@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetVBlankEvent(CHwDisplayRenderTarget *this, void **a2)
{
  __int64 v2; // rax
  CHwDisplayRenderTarget *v4; // rcx
  int v6; // ebx
  __int64 (*v7)(void); // rax
  char IsValid; // al
  unsigned int v9; // edi
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *__hidden, void **); // rax
  int VBlankEvent; // eax

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwDisplayRenderTarget *)((char *)this - 192);
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
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  v9 = v6;
  if ( v6 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v6, 0x281u);
    return v9;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, void **))(*(_QWORD *)v10 + 64LL);
  if ( v11 == CDWMSwapChain::GetVBlankEvent )
    VBlankEvent = CDWMSwapChain::GetVBlankEvent(v10, a2);
  else
    VBlankEvent = v11(v10, a2);
  v9 = VBlankEvent;
  if ( VBlankEvent < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, VBlankEvent, 0x283u);
  return v9;
}
