/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x180155D70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18006C4C0 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x18006EE30 (-ForcePresent@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180070180 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x180145E90 (-GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, char a2, int a3)
{
  CHwndRenderTarget *v3; // rsi
  int v7; // edi
  bool (__fastcall *v8)(CHwndRenderTarget *__hidden); // rax
  CHwndRenderTarget *v9; // rcx
  bool v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  CHwFullScreenRenderTarget *v17; // rcx
  __int64 (__fastcall *v18)(CHwFullScreenRenderTarget *__hidden, bool, bool, struct RenderTargetPresentParameters *); // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 result; // rax
  char v22; // cl
  int RemoteAppParameters; // eax
  _BYTE v24[36]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+54h] [rbp-34h]

  v3 = (CHwndRenderTarget *)((char *)this - 64);
  v7 = 0;
  v8 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*((_QWORD *)this - 8) + 240LL);
  v9 = (CHwndRenderTarget *)((char *)this - 64);
  if ( v8 == CHwndRenderTarget::ForcePresent )
    v10 = CHwndRenderTarget::ForcePresent(v9);
  else
    v10 = v8(v9);
  if ( !*((_BYTE *)this + 726) )
  {
    v22 = 1;
    if ( !v10 )
      v22 = a2;
    if ( !v22 && !*((_BYTE *)this + 724) )
      goto LABEL_16;
  }
  if ( *((_BYTE *)v3 + 801) )
    goto LABEL_16;
  v11 = *((_QWORD *)v3 + 97);
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 264) && *(_BYTE *)(v11 + 1091) )
      goto LABEL_16;
    v12 = *(_QWORD *)(v11 + 968);
    if ( v12 )
    {
      if ( *(_BYTE *)(v12 + 86) && !*(_BYTE *)(v12 + 84) )
        goto LABEL_16;
    }
  }
  *((_BYTE *)this + 726) = 0;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_16;
  memset_0(v24, 0, 0x28uLL);
  v24[33] = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v3 + 184LL))(v3);
  v13 = *(_DWORD *)(*((_QWORD *)this - 6) + 1224LL) == 3;
  v24[34] = *((_BYTE *)this + 730);
  v24[32] = v13;
  v14 = *(_QWORD *)v3;
  v25 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(v14 + 184))(v3) )
  {
    RemoteAppParameters = CHwndRenderTarget::GetRemoteAppParameters(v3, (struct RenderTargetPresentParameters *)v24);
    v7 = RemoteAppParameters;
    if ( RemoteAppParameters < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppParameters, 0x6A9u);
      goto LABEL_18;
    }
  }
  v17 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7);
  LOBYTE(v16) = *((_BYTE *)this + 732);
  LOBYTE(v15) = *((_BYTE *)this + 724);
  v18 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool, bool, struct RenderTargetPresentParameters *))(*(_QWORD *)v17 + 184LL);
  if ( v18 == CHwFullScreenRenderTarget::Present )
    v19 = CHwFullScreenRenderTarget::Present(v17, v15, v16, (struct RenderTargetPresentParameters *)v24);
  else
    v19 = v18(v17, v15, v16, (struct RenderTargetPresentParameters *)v24);
  v7 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x6AEu);
    goto LABEL_18;
  }
  v20 = *((_QWORD *)this + 89);
  if ( v20 )
    *(_BYTE *)(v20 + 1094) = 0;
  CHwndRenderTarget::NotifyPowerManagerContentType(v3);
  if ( v7 == 142213130 )
    *((_BYTE *)this + 730) = 1;
  else
LABEL_16:
    *((_BYTE *)this + 730) = 0;
  *((_BYTE *)this + 737) = 0;
LABEL_18:
  result = CHwndRenderTarget::HandleWindowErrors((COverlayContext **)v3, v7);
  *((_BYTE *)this + 724) = 0;
  return result;
}
