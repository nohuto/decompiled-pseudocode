/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x1800467F0
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x180060B90 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z @ 0x18007CF50 (-SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CHwDisplayRenderTarget *this,
        unsigned int a2,
        bool a3)
{
  __int64 v3; // rax
  CHwDisplayRenderTarget *v5; // rcx
  int v8; // ebx
  __int64 (*v9)(void); // rax
  char IsValid; // al
  _BOOL8 v11; // r8
  unsigned int v12; // edi
  CDWMSwapChain *v13; // rcx
  __int64 (__fastcall *v14)(CDWMSwapChain *__hidden, unsigned int, bool); // rax
  int refreshed; // eax

  v3 = *((_QWORD *)this + 1);
  v5 = (CHwDisplayRenderTarget *)((char *)this - 216);
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 888);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v8, 0x36Au);
    }
    else
    {
      v9 = *(__int64 (**)(void))(*(_QWORD *)v5 + 32LL);
      if ( (char *)v9 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v5);
      else
        IsValid = v9();
      if ( !IsValid )
      {
        v8 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        v12 = -2003304442;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  v12 = v8;
  if ( v8 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v8, 0x2A8u);
    return v12;
  }
  v13 = (CDWMSwapChain *)*((_QWORD *)this + 4);
  LOBYTE(v11) = a3;
  v14 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, unsigned int, bool))(*(_QWORD *)v13 + 56LL);
  if ( v14 == CDWMSwapChain::SetSyncRefreshCountWaitTarget )
    refreshed = CDWMSwapChain::SetSyncRefreshCountWaitTarget(v13, a2, a3);
  else
    refreshed = v14(v13, a2, v11);
  v12 = refreshed;
  if ( refreshed < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, refreshed, 0x2ABu);
  return v12;
}
