/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800828FC
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180082AC4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001AAC0 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x18001AB08 (-Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180082694 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1800827C4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x180082E60 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        struct _LUID *a3)
{
  struct CBitmapRealization *v6; // rsi
  int v7; // ebx
  int v8; // eax
  unsigned int HighPart; // eax
  __int64 v10; // r12
  struct _LUID v11; // xmm1_8
  HANDLE v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  __int64 i; // rdi
  HANDLE v17; // rcx
  int v19; // eax
  _DWORD v20[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-C8h]
  struct _LUID v22; // [rsp+48h] [rbp-C0h]
  struct _LUID v23; // [rsp+50h] [rbp-B8h]
  HANDLE v24[32]; // [rsp+58h] [rbp-B0h] BYREF
  struct CBitmapRealization *v25; // [rsp+198h] [rbp+90h] BYREF

  v6 = 0LL;
  v25 = 0LL;
  v7 = 0;
  memset_0(v24, 0, sizeof(v24));
  if ( (unsigned int)(a3[3].HighPart - 1) > 0x1E )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277338, 3u, -2147024809, 0x576u);
  }
  else
  {
    v8 = NtOpenCompositionSurfaceSwapChainHandleInfo(*((_QWORD *)*this + 4), this + 1, v24);
    if ( v8 < 0 )
    {
      v7 = v8 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277338, 3u, v8 | 0x10000000, 0x57Fu);
    }
    else
    {
      if ( a3[3].HighPart <= 1u )
        goto LABEL_4;
      if ( !this[19] )
      {
        v19 = CDecodeBitmap::Create(a3[5], this + 19);
        v7 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x6DFu);
      }
      if ( v7 >= 0 )
      {
LABEL_4:
        HighPart = a3[3].HighPart;
        v10 = 0LL;
        if ( HighPart )
        {
          while ( 1 )
          {
            v20[0] = a3[3].LowPart;
            v20[1] = v10;
            v11 = a3[3 * v10 + 6];
            v12 = v24[v10 + 1];
            v22 = a3[3 * v10 + 5];
            v21 = v12;
            v23 = v11;
            v13 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                    this,
                    a2,
                    (const struct CSM_REALIZATION_INFO *)v20,
                    &v25);
            v7 = v13;
            if ( v13 < 0 )
              break;
            v6 = v25;
            v24[v10 + 1] = 0LL;
            v14 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v6);
            v7 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277338, 3u, v14, 0x5AEu);
              goto LABEL_11;
            }
            ReleaseInterface<CBitmapRealization>(&v25);
            HighPart = a3[3].HighPart;
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= HighPart )
            {
              v6 = v25;
              goto LABEL_9;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277338, 3u, v13, 0x5A3u);
          v6 = v25;
        }
        else
        {
LABEL_9:
          if ( HighPart > 1 )
            CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo::CBindInfo *)this);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277338, 3u, v7, 0x589u);
      }
LABEL_11:
      v15 = (unsigned int)v24[0];
      for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
      {
        v17 = v24[i + 1];
        if ( v17 )
        {
          CloseHandle(v17);
          v15 = (unsigned int)v24[0];
        }
      }
      if ( v6 )
        (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v7;
}
