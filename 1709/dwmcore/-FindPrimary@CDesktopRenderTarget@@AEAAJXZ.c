/*
 * XREFs of ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180133A74
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801345C0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B7388 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::FindPrimary(CDesktopRenderTarget *this)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx
  __int64 *v3; // rdi
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // r8d
  signed int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 1;
  if ( *((_DWORD *)this + 36) > 1u )
  {
    v3 = (__int64 *)((char *)this + 120);
    v4 = *((_QWORD *)this + 15);
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 8LL * v2);
      if ( CDisplay::IsPrimary(*(CDisplay **)(v9 + 112)) )
        break;
      v2 = v5 + 1;
      if ( v2 >= v6 )
        return v1;
    }
    DynArray<CHwndRenderTarget *,0>::Remove(v3, &v9);
    v7 = DynArray<CHwndRenderTarget *,0>::InsertAt((__int64)v3, (unsigned __int64)&v9);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x14Du);
  }
  return v1;
}
