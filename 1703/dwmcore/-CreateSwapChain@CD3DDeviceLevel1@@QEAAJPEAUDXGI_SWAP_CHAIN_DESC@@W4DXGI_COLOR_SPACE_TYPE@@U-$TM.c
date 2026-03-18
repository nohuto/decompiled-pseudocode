/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 * Callees:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18004D20C (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x1800B7BB4 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7BE0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_NPEAPEAV1@@Z @ 0x1800C9828 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IW4DXGI_COLOR_SPACE_TY.c)
 *     ?Attach@?$ComPtr@UIDXGIOutput@@@WRL@Microsoft@@QEAAXPEAUIDXGIOutput@@@Z @ 0x1800CABE0 (-Attach@-$ComPtr@UIDXGIOutput@@@WRL@Microsoft@@QEAAXPEAUIDXGIOutput@@@Z.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800CD48C (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x18019DA24 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IW4DXGI_COLOR_SPAC.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *a1,
        int *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        __int16 a4,
        CDisplay *a5,
        struct CDWMOffScreenSwapChain **a6)
{
  __int64 v6; // r11
  enum DXGI_COLOR_SPACE_TYPE v8; // r10d
  CD3DDeviceLevel1 *v9; // rdx
  CDisplay *v10; // rcx
  struct CDWMOffScreenSwapChain *v11; // rbx
  __int64 v13; // r15
  struct CDWMSwapChain *v14; // rdi
  struct CDWMSwapChainDDA *v15; // rsi
  int v16; // r8d
  int v17; // r12d
  char v18; // r8
  int v19; // r9d
  struct IDXGIOutput *DXGIOutput; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _LUID *v27; // r14
  CD3DDeviceLevel1 *v28; // r13
  int v29; // eax
  LONG v30; // eax
  bool v31; // al
  struct _LUID v32; // r8
  unsigned int v33; // r10d
  int v34; // eax
  struct CDWMSwapChainDDA *v35; // rax
  unsigned int v36; // r15d
  struct IDXGISwapChainDWM1 *v37; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // r9d
  struct IDXGIOutput *v45; // rax
  int v46; // eax
  int v47; // eax
  struct IDXGISwapChainDWM1 *v48; // rcx
  __int64 v49; // r12
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  CD3DDeviceLevel1 *v58; // [rsp+50h] [rbp-B0h]
  struct IDXGISwapChainDWM *v59; // [rsp+58h] [rbp-A8h] BYREF
  struct IDXGISwapChainDWM1 *v60; // [rsp+60h] [rbp-A0h] BYREF
  struct CDWMOffScreenSwapChain *v61; // [rsp+68h] [rbp-98h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+74h] [rbp-8Ch]
  int v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+7Ch] [rbp-84h]
  CDisplay *v66; // [rsp+80h] [rbp-80h]
  struct CDWMSwapChain *v67; // [rsp+88h] [rbp-78h] BYREF
  struct CDWMOffScreenSwapChain **v68; // [rsp+90h] [rbp-70h]
  struct CDWMSwapChainDDA *v69; // [rsp+98h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A8h] [rbp-58h] BYREF
  int v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B0h] [rbp-50h]
  int v74; // [rsp+B4h] [rbp-4Ch]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  int v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C4h] [rbp-3Ch]
  int v78; // [rsp+C8h] [rbp-38h]
  int v79; // [rsp+CCh] [rbp-34h]
  int v80; // [rsp+D0h] [rbp-30h]
  int v81; // [rsp+D4h] [rbp-2Ch]
  __int64 v82; // [rsp+D8h] [rbp-28h] BYREF
  int v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E4h] [rbp-1Ch]
  int v85; // [rsp+E8h] [rbp-18h]
  int v86; // [rsp+F0h] [rbp-10h] BYREF
  int v87; // [rsp+F4h] [rbp-Ch]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  LONG v89; // [rsp+104h] [rbp+4h]

  v6 = 0LL;
  v62 = a3;
  v8 = a3;
  v58 = a1;
  v9 = a1;
  v68 = a6;
  v10 = a5;
  v11 = 0LL;
  v13 = *((_QWORD *)a2 + 1);
  v14 = 0LL;
  v64 = *a2;
  v15 = 0LL;
  v65 = a2[1];
  v16 = a2[5];
  *a6 = 0LL;
  v17 = *((_DWORD *)v9 + 218);
  v63 = v16;
  v18 = 0;
  v66 = a5;
  v67 = 0LL;
  v69 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v70 = v13;
  v61 = 0LL;
  if ( v17 < 0 )
  {
    v55 = 1625;
LABEL_85:
    v44 = v17;
    goto LABEL_86;
  }
  v19 = a4 & 0x4000;
  if ( v19 || a5 && CDisplay::IsOffscreenRenderTarget(a5) )
    v18 = 1;
  if ( *((_QWORD *)a2 + 6) == v6 )
  {
    if ( !v18 )
    {
      DXGIOutput = CDisplay::GetDXGIOutput(v10);
      Microsoft::WRL::ComPtr<IDXGIOutput>::Attach(&v61, DXGIOutput);
      v11 = v61;
      while ( 1 )
      {
        v57 = 0LL;
        v21 = (*(__int64 (__fastcall **)(struct CDWMOffScreenSwapChain *, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL))(
                v11,
                &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
                &v57);
        v17 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x66Fu);
          goto LABEL_53;
        }
        v56 = 0LL;
        if ( (a4 & 0x2000) != 0 )
        {
          v71 = *a2;
          v72 = a2[1];
          v73 = a2[4];
          v75 = *(_QWORD *)(a2 + 7);
          v76 = a2[9];
          v77 = a2[10];
          v79 = a2[15];
          v81 = a2[16];
          v82 = *((_QWORD *)a2 + 1);
          v83 = a2[5];
          v84 = a2[6];
          v39 = a2[14];
          v78 = 0;
          v85 = v39;
          v74 = 1;
          v80 = 3;
          v40 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v57 + 48LL))(
                  v57,
                  &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
                  &v56);
          v17 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x683u);
            goto LABEL_49;
          }
          v41 = v56;
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v59);
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64 *, struct CDWMOffScreenSwapChain *, struct IDXGISwapChainDWM **))(*(_QWORD *)v41 + 24LL))(
                  v41,
                  *((_QWORD *)v58 + 80),
                  &v71,
                  &v82,
                  v11,
                  &v59);
        }
        else
        {
          v22 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v57 + 48LL))(
                  v57,
                  &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
                  &v56);
          v17 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x68Fu);
LABEL_49:
            v42 = v56;
            if ( v56 )
            {
              v56 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            }
LABEL_53:
            v43 = v57;
            if ( !v57 )
              goto LABEL_30;
            v57 = 0LL;
LABEL_55:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            goto LABEL_30;
          }
          v23 = v56;
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v59);
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, struct CDWMOffScreenSwapChain *, struct IDXGISwapChainDWM **))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  *((_QWORD *)v58 + 80),
                  a2,
                  v11,
                  &v59);
        }
        v25 = v56;
        v17 = v24;
        if ( v56 )
        {
          v56 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        v26 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( !CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)v58 + 928), v17) )
        {
          if ( v17 >= 0 )
          {
            v27 = (struct _LUID *)v66;
            goto LABEL_19;
          }
          v55 = 1689;
          goto LABEL_85;
        }
      }
    }
  }
  else if ( !v18 )
  {
    goto LABEL_30;
  }
  if ( !v19 )
  {
    v27 = (struct _LUID *)v66;
    v29 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)v9 + 928),
            (struct DXGI_SWAP_CHAIN_DESC *)a2,
            v8,
            v66,
            &v61);
    v17 = v29;
    if ( v29 < 0 )
    {
      v55 = 1705;
LABEL_60:
      v44 = v29;
LABEL_86:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, v55);
      goto LABEL_30;
    }
    *v68 = v61;
LABEL_19:
    v28 = v58;
LABEL_20:
    if ( !v59 )
    {
      if ( !v60 )
        goto LABEL_30;
      v53 = CDWMSwapChainDDA::Create(
              (CD3DDeviceLevel1 *)((char *)v28 + 928),
              v60,
              v27[29].LowPart,
              v62,
              v27[28],
              v27[29].LowPart,
              &v69);
      v17 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x700u);
        v15 = v69;
        goto LABEL_30;
      }
      v35 = v69;
LABEL_29:
      *v68 = v35;
      goto LABEL_30;
    }
    v29 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, int *))(*(_QWORD *)v59 + 80LL))(v59, &v86);
    v17 = v29;
    if ( v29 >= 0 )
    {
      v30 = HIDWORD(v88);
      if ( v88 != __PAIR64__(HIDWORD(v70), v13) && v88 != 0x100000000LL )
      {
        v27[33].LowPart = v88;
        v27[33].HighPart = v30;
      }
      if ( v89 != v63 )
        v27[34].HighPart = v89;
      if ( (v86 != v64 || v87 != v65) && (v86 || v87) )
      {
        v17 = 142213127;
        goto LABEL_30;
      }
      v31 = CDisplay::NeedsDesktopMoves((CDisplay *)v27);
      v34 = CDWMSwapChain::Create((CD3DDeviceLevel1 *)((char *)v28 + 928), v59, v32.LowPart, v62, v32, v33, v31, &v67);
      v17 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x6F4u);
        v14 = v67;
        goto LABEL_30;
      }
      v35 = v67;
      goto LABEL_29;
    }
    v55 = 1740;
    goto LABEL_60;
  }
  v56 = v6;
  v27 = (struct _LUID *)v10;
  v57 = v6;
  v45 = CDisplay::GetDXGIOutput(v10);
  Microsoft::WRL::ComPtr<IDXGIOutput>::Attach(&v61, v45);
  v11 = v61;
  v46 = (*(__int64 (__fastcall **)(struct CDWMOffScreenSwapChain *, GUID *, __int64 *))(*(_QWORD *)v61 + 48LL))(
          v61,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v56);
  v17 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x6BBu);
  }
  else
  {
    v47 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v56 + 48LL))(
            v56,
            &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
            &v57);
    v17 = v47;
    if ( v47 >= 0 )
    {
      v48 = v60;
      v49 = v57;
      v71 = *a2;
      v72 = a2[1];
      v73 = a2[4];
      v75 = *(_QWORD *)(a2 + 7);
      v76 = a2[9];
      v77 = a2[10];
      v79 = a2[15];
      v81 = a2[16];
      v74 = 0;
      v78 = 0;
      v80 = 3;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v28 = v58;
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, struct CDWMOffScreenSwapChain *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v49 + 32LL))(
              v49,
              *((_QWORD *)v58 + 80),
              &v71,
              v11,
              &v60);
      v51 = v57;
      v17 = v50;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      goto LABEL_20;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x6BCu);
  }
  v54 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v43 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    goto LABEL_55;
  }
LABEL_30:
  v36 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)v58, v17, 2u);
  CD3DDeviceLevel1::ProcessDeviceLost(v58);
  if ( v11 )
    (*(void (__fastcall **)(struct CDWMOffScreenSwapChain *))(*(_QWORD *)v11 + 16LL))(v11);
  v37 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v59);
  if ( v15 )
    (*(void (__fastcall **)(struct CDWMSwapChainDDA *))(*(_QWORD *)v15 + 8LL))(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct CDWMSwapChain *))(*(_QWORD *)v14 + 8LL))(v14);
  return v36;
}
