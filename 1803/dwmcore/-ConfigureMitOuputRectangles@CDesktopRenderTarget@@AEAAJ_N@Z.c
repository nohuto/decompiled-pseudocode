/*
 * XREFs of ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180044A74
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180043670 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800627C0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180062964 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180062988 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?AddMultipleAndSet@?$DynArray@UINPUT_REGION_CONFIG@@$0A@@@QEAAJPEFBUINPUT_REGION_CONFIG@@I@Z @ 0x1801570A4 (-AddMultipleAndSet@-$DynArray@UINPUT_REGION_CONFIG@@$0A@@@QEAAJPEFBUINPUT_REGION_CONFIG@@I@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ConfigureMitOuputRectangles(CDesktopRenderTarget *this, char a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int128 v9; // xmm6
  __int64 v10; // rcx
  __int128 *DisplayRect; // rax
  __int64 v12; // rdx
  enum DXGI_MODE_ROTATION Rotation; // eax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int128 v21; // xmm0
  int v22; // r9d
  unsigned int v23; // [rsp+28h] [rbp-79h]
  __int64 v24; // [rsp+38h] [rbp-69h] BYREF
  void *lpMem[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-51h]
  unsigned int v27; // [rsp+58h] [rbp-49h]
  __int128 v28; // [rsp+60h] [rbp-41h] BYREF
  __int128 v29; // [rsp+78h] [rbp-29h] BYREF
  int v30; // [rsp+88h] [rbp-19h]
  int v31; // [rsp+8Ch] [rbp-15h]
  __int64 v32; // [rsp+90h] [rbp-11h]
  int v33; // [rsp+98h] [rbp-9h]
  enum DXGI_MODE_ROTATION v34; // [rsp+9Ch] [rbp-5h]
  __int128 v35; // [rsp+A0h] [rbp-1h]
  __int128 v36; // [rsp+B0h] [rbp+Fh]
  void *retaddr; // [rsp+100h] [rbp+5Fh]

  *(_QWORD *)&v28 = 0LL;
  DWORD2(v28) = 0;
  v4 = 0;
  v26 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v5 = 0;
  v27 = 0;
  if ( !CCommonRegistryData::m_fConfigureInput || *(_BYTE *)(*((_QWORD *)this + 2) + 1349LL) )
  {
    *((_WORD *)this + 137) = 0;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 273) )
  {
    v7 = *((_QWORD *)this + 45);
    if ( v7 )
    {
      v24 = 0LL;
      LODWORD(v24) = *((_DWORD *)this + 88);
      if ( !(unsigned int)DWMSetCursorOrientation(*(unsigned int *)(v7 + 56)) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      if ( !(unsigned int)DWMBindCursorToOutputConfig(&v24) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *((_BYTE *)this + 273) = 0;
    *((_BYTE *)this + 275) = 1;
  }
  if ( a2 || *((_BYTE *)this + 274) )
  {
    v24 = 0LL;
    LODWORD(v24) = *((_DWORD *)this + 88);
    if ( !(unsigned int)DWMBindCursorToOutputConfig(&v24) )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v8 = 0;
    v4 = 0;
    if ( *((_DWORD *)this + 50) )
    {
      v9 = v28;
      while ( 1 )
      {
        memset_0(&v29, 0, 0x48uLL);
        v10 = *((_QWORD *)this + 22);
        v30 = 2;
        DisplayRect = (__int128 *)CHwndRenderTarget::GetDisplayRect(*(_QWORD *)(v10 + 8LL * v8));
        v12 = *((_QWORD *)this + 22);
        v29 = *DisplayRect;
        v31 = *(_DWORD *)(*(_QWORD *)(v12 + 8LL * v8) + 512LL);
        v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * v8) + 168LL) + 64LL);
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * v8) + 168LL) + 248LL);
        if ( CHwndRenderTarget::IsPrimaryMonitor(*(CHwndRenderTarget **)(v12 + 8LL * v8)) )
          v30 |= 1u;
        Rotation = CHwndRenderTarget::GetRotation(*(CHwndRenderTarget **)(*((_QWORD *)this + 22) + 8LL * v8));
        v14 = *((_QWORD *)this + 22);
        v34 = Rotation;
        v15 = *(_OWORD *)CHwndRenderTarget::GetClipBox(*(_QWORD *)(v14 + 8LL * v8));
        v16 = *((_QWORD *)this + 22);
        v36 = v15;
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * v8) + 168LL);
        if ( v17 )
          v9 = *(_OWORD *)(v17 + 88);
        v4 = v17 == 0 ? 0x88982F04 : 0;
        if ( !v17 )
          break;
        v35 = v9;
        v18 = DynArray<INPUT_REGION_CONFIG,0>::AddMultipleAndSet(lpMem, &v29);
        v4 = v18;
        if ( v18 < 0 )
        {
          v23 = 945;
          goto LABEL_41;
        }
        if ( ++v8 >= *((_DWORD *)this + 50) )
        {
          v5 = v27;
          goto LABEL_28;
        }
      }
      v23 = 942;
      v22 = -2003292412;
      goto LABEL_43;
    }
LABEL_28:
    v19 = *((_DWORD *)this + 92);
    if ( v19 <= *((_DWORD *)this + 94) )
    {
      v20 = *((_DWORD *)this + 95);
      if ( *((_DWORD *)this + 93) <= v20 && (v19 || *((_DWORD *)this + 94) || *((_DWORD *)this + 93) || v20) )
      {
        memset_0((char *)&v29 + 4, 0, 0x44uLL);
        v21 = *((_OWORD *)this + 23);
        v30 = 4;
        v29 = v21;
        v18 = DynArray<INPUT_REGION_CONFIG,0>::AddMultipleAndSet(lpMem, &v29);
        v4 = v18;
        if ( v18 < 0 )
        {
          v23 = 962;
LABEL_41:
          v22 = v18;
LABEL_43:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v23);
          goto LABEL_4;
        }
        v5 = v27;
      }
    }
  }
  *((_BYTE *)this + 274) = 0;
  if ( v5 )
  {
    LODWORD(v28) = *((_DWORD *)this + 88);
    DWORD2(v28) = CDesktopRenderTarget::HasPrimary((CDesktopRenderTarget *)((char *)this + 168));
    if ( !(unsigned int)DWMSetInputSystemOutputConfig(&v28, v5, lpMem[0]) )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *((_BYTE *)this + 275) = 1;
  }
LABEL_4:
  if ( lpMem[0] != lpMem[1] )
    operator delete(lpMem[0]);
  return v4;
}
