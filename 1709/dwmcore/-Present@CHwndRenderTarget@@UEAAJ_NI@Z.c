/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18001B8C4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJPEA_N@Z @ 0x180147A70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x1800174D0 (-ForcePresent@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800179B4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x180135E9C (-GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, char a2, int a3)
{
  char *v3; // rsi
  int v7; // edi
  bool (__fastcall *v8)(CHwndRenderTarget *); // rax
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
  int v20; // r9d
  __int64 v21; // rax
  __int64 result; // rax
  char v23; // cl
  int RemoteAppParameters; // eax
  _BYTE v25[36]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+54h] [rbp-34h]

  v3 = (char *)this - 64;
  v7 = 0;
  v8 = *(bool (__fastcall **)(CHwndRenderTarget *))(*((_QWORD *)this - 8) + 256LL);
  v9 = (CHwndRenderTarget *)((char *)this - 64);
  if ( v8 == CHwndRenderTarget::ForcePresent )
    v10 = CHwndRenderTarget::ForcePresent(v9);
  else
    v10 = v8(v9);
  if ( *((_BYTE *)this + 740) )
    goto LABEL_44;
  v23 = 1;
  if ( !v10 )
    v23 = a2;
  if ( v23 || *((_BYTE *)this + 739) )
  {
LABEL_44:
    if ( !v3[813] )
    {
      v11 = *((_QWORD *)v3 + 99);
      if ( !v11
        || (!*(_DWORD *)(v11 + 272) || !*(_BYTE *)(v11 + 1179))
        && ((v12 = *(_QWORD *)(v11 + 1048)) == 0 || !*(_BYTE *)(v12 + 78) || *(_BYTE *)(v12 + 76)) )
      {
        *((_BYTE *)this + 740) = 0;
        if ( *((_QWORD *)this + 7) )
        {
          memset_0(v25, 0, 0x28uLL);
          v25[33] = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 200LL))(v3);
          v13 = *(_DWORD *)(*((_QWORD *)this - 6) + 1160LL) == 3;
          v25[34] = *((_BYTE *)this + 743);
          v25[32] = v13;
          v14 = *(_QWORD *)v3;
          v26 = a3;
          if ( (*(unsigned __int8 (__fastcall **)(char *))(v14 + 200))(v3) )
          {
            RemoteAppParameters = CHwndRenderTarget::GetRemoteAppParameters(
                                    (CHwndRenderTarget *)v3,
                                    (struct RenderTargetPresentParameters *)v25);
            v7 = RemoteAppParameters;
            if ( RemoteAppParameters < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RemoteAppParameters, 0x5F0u);
              goto LABEL_21;
            }
          }
          v17 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7);
          LOBYTE(v16) = *((_BYTE *)this + 744);
          LOBYTE(v15) = *((_BYTE *)this + 739);
          v18 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool, bool, struct RenderTargetPresentParameters *))(*(_QWORD *)v17 + 192LL);
          if ( v18 == CHwFullScreenRenderTarget::Present )
            v19 = CHwFullScreenRenderTarget::Present(v17, v15, v16, (struct RenderTargetPresentParameters *)v25);
          else
            v19 = v18(v17, v15, v16, (struct RenderTargetPresentParameters *)v25);
          v7 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x5F5u);
            goto LABEL_21;
          }
          if ( v19 == 142213130 )
          {
            *((_BYTE *)this + 743) = 1;
          }
          else
          {
            v20 = v19;
            if ( *((_BYTE *)this + 741) && v19 != 142213121 )
              v20 = 142213129;
            v7 = v20;
            *((_BYTE *)this + 743) = 0;
          }
          v21 = *((_QWORD *)this + 91);
          if ( v21 )
            *(_BYTE *)(v21 + 1182) = 0;
          CHwndRenderTarget::NotifyPowerManagerContentType((CHwndRenderTarget *)v3);
        }
        *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)this - 6) + 360LL);
      }
    }
  }
  *((_BYTE *)this + 749) = 0;
LABEL_21:
  result = CHwndRenderTarget::HandleWindowErrors((CHwndRenderTarget *)v3, v7);
  *((_BYTE *)this + 739) = 0;
  return result;
}
