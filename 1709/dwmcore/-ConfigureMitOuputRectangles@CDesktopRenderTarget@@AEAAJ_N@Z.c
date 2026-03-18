/*
 * XREFs of ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800162B0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019BF0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180019C6C (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019C90 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AddMultipleAndSet@?$DynArray@UINPUT_REGION_CONFIG@@$0A@@@QEAAJPEFBUINPUT_REGION_CONFIG@@I@Z @ 0x180132F24 (-AddMultipleAndSet@-$DynArray@UINPUT_REGION_CONFIG@@$0A@@@QEAAJPEFBUINPUT_REGION_CONFIG@@I@Z.c)
 *     ?ApplyMitState@CScreenCursor@@QEAAJXZ @ 0x18017D344 (-ApplyMitState@CScreenCursor@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::ConfigureMitOuputRectangles(CDesktopRenderTarget *this, char a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v7; // eax
  __int64 v8; // r14
  __int128 v9; // xmm6
  __int64 v10; // rcx
  __int128 *DisplayRect; // rax
  __int64 v12; // rdx
  enum DXGI_MODE_ROTATION Rotation; // eax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // r9d
  unsigned int v21; // [rsp+28h] [rbp-69h]
  void *lpMem[2]; // [rsp+38h] [rbp-59h] BYREF
  int v23; // [rsp+48h] [rbp-49h]
  int v24; // [rsp+4Ch] [rbp-45h]
  unsigned int v25; // [rsp+50h] [rbp-41h]
  __int128 v26; // [rsp+58h] [rbp-39h] BYREF
  __int128 v27; // [rsp+68h] [rbp-29h] BYREF
  int v28; // [rsp+78h] [rbp-19h]
  int v29; // [rsp+7Ch] [rbp-15h]
  enum DXGI_MODE_ROTATION v30; // [rsp+8Ch] [rbp-5h]
  __int128 v31; // [rsp+90h] [rbp-1h]
  __int128 v32; // [rsp+A0h] [rbp+Fh]
  void *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = 0;
  v23 = 0;
  v3 = 0;
  v24 = 0;
  *(_QWORD *)&v26 = 0LL;
  DWORD2(v26) = 0;
  *(_OWORD *)lpMem = 0LL;
  v25 = 0;
  if ( !CCommonRegistryData::m_fConfigureInput )
  {
    *((_WORD *)this + 157) = 0;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 313) )
  {
    v7 = CScreenCursor::ApplyMitState(*((CScreenCursor **)this + 51));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3EEu);
      return (unsigned int)v3;
    }
    *((_BYTE *)this + 313) = 0;
    *((_BYTE *)this + 315) = 1;
  }
  if ( a2 )
  {
    v8 = 0LL;
    if ( *((_DWORD *)this + 36) )
    {
      v9 = v26;
      while ( 1 )
      {
        memset_0(&v27, 0, 0x48uLL);
        v10 = *((_QWORD *)this + 15);
        v28 = 2;
        DisplayRect = (__int128 *)CHwndRenderTarget::GetDisplayRect(*(_QWORD *)(v10 + 8 * v8));
        v12 = *((_QWORD *)this + 15);
        v27 = *DisplayRect;
        v29 = *(_DWORD *)(*(_QWORD *)(v12 + 8 * v8) + 464LL);
        Rotation = CHwndRenderTarget::GetRotation(*(CHwndRenderTarget **)(v12 + 8 * v8));
        v14 = *((_QWORD *)this + 15);
        v30 = Rotation;
        v3 = -2003292412;
        v15 = *(_OWORD *)CHwndRenderTarget::GetClipBox(*(_QWORD *)(v14 + 8 * v8));
        v16 = *((_QWORD *)this + 15);
        v32 = v15;
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * v8) + 112LL);
        if ( v17 )
        {
          v9 = *(_OWORD *)(v17 + 64);
          v3 = 0;
        }
        if ( v3 < 0 )
          break;
        v31 = v9;
        v18 = DynArray<INPUT_REGION_CONFIG,0>::AddMultipleAndSet(lpMem, &v27);
        v3 = v18;
        if ( v18 < 0 )
        {
          v21 = 1027;
          goto LABEL_27;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *((_DWORD *)this + 36) )
        {
          v2 = v25;
          goto LABEL_18;
        }
      }
      v21 = 1024;
      v20 = v3;
      goto LABEL_29;
    }
  }
LABEL_18:
  if ( !*((_BYTE *)this + 314) )
  {
LABEL_21:
    if ( v2 )
    {
      LODWORD(v26) = *((_DWORD *)this + 100);
      DWORD2(v26) = CDesktopRenderTarget::HasPrimary((CDesktopRenderTarget *)((char *)this + 112)) != 0;
      if ( !(unsigned int)DWMSetInputSystemOutputConfig(&v26, v2, lpMem[0]) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      *((_BYTE *)this + 315) = 1;
    }
    goto LABEL_3;
  }
  memset_0((char *)&v27 + 4, 0, 0x44uLL);
  v19 = *((_OWORD *)this + 26);
  v28 = 4;
  v27 = v19;
  v18 = DynArray<INPUT_REGION_CONFIG,0>::AddMultipleAndSet(lpMem, &v27);
  v3 = v18;
  if ( v18 >= 0 )
  {
    v2 = v25;
    *((_BYTE *)this + 314) = 0;
    goto LABEL_21;
  }
  v21 = 1038;
LABEL_27:
  v20 = v18;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
LABEL_3:
  if ( lpMem[0] != lpMem[1] )
    WPF::ProcessHeapImpl::Free(lpMem[0]);
  return (unsigned int)v3;
}
