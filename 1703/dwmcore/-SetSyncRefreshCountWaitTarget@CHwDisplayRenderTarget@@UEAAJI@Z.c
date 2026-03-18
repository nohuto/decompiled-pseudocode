/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x18003A270
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18006CD40 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x18003E010 (-SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(CHwDisplayRenderTarget *this, unsigned int a2)
{
  __int64 v2; // rax
  CHwDisplayRenderTarget *v4; // rcx
  int v6; // ebx
  __int64 (*v7)(void); // rax
  char IsValid; // al
  unsigned int v9; // edi
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *__hidden, unsigned int); // rax
  int refreshed; // eax

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwDisplayRenderTarget *)((char *)this - 176);
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
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x51Au);
  }
  v9 = v6;
  if ( v6 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v6, 0x3C9u);
    return v9;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, unsigned int))(*(_QWORD *)v10 + 56LL);
  if ( v11 == CDWMSwapChain::SetSyncRefreshCountWaitTarget )
    refreshed = CDWMSwapChain::SetSyncRefreshCountWaitTarget(v10, a2);
  else
    refreshed = v11(v10, a2);
  v9 = refreshed;
  if ( refreshed < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, refreshed, 0x3CBu);
  return v9;
}
