/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800763B4
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180076114 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18007615C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x180076D18 (-Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        struct _LUID *a3)
{
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // r15d
  struct _LUID v9; // xmm1_8
  HANDLE v10; // rax
  int v11; // eax
  struct CBitmapRealization *v12; // rdx
  unsigned int v13; // edx
  __int64 i; // rdi
  HANDLE v15; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+28h] [rbp-E0h]
  _DWORD v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v20; // [rsp+40h] [rbp-C8h]
  struct _LUID v21; // [rsp+48h] [rbp-C0h]
  struct _LUID v22; // [rsp+50h] [rbp-B8h]
  HANDLE v23[32]; // [rsp+58h] [rbp-B0h] BYREF
  struct CBitmapRealization *v24; // [rsp+198h] [rbp+90h] BYREF

  v24 = 0LL;
  v6 = 0;
  memset_0(v23, 0, sizeof(v23));
  if ( (unsigned int)(a3[3].HighPart - 1) > 0x1E )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, -2147024809, 0x564u);
  }
  else
  {
    v7 = NtOpenCompositionSurfaceSwapChainHandleInfo(*((_QWORD *)*this + 4), this + 1, v23);
    if ( v7 < 0 )
    {
      v6 = v7 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, v7 | 0x10000000, 0x56Du);
    }
    else
    {
      if ( a3[3].HighPart <= 1u )
        goto LABEL_4;
      if ( !this[19] )
      {
        v17 = CDecodeBitmap::Create(a3[5], this + 19);
        v6 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x6C8u);
      }
      if ( v6 >= 0 )
      {
LABEL_4:
        v8 = 0;
        if ( a3[3].HighPart )
        {
          while ( 1 )
          {
            v19[0] = a3[3].LowPart;
            v19[1] = v8;
            v9 = a3[3 * v8 + 6];
            v10 = v23[v8 + 1];
            v21 = a3[3 * v8 + 5];
            v20 = v10;
            v22 = v9;
            v11 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                    this,
                    a2,
                    (const struct CSM_REALIZATION_INFO *)v19,
                    &v24);
            v6 = v11;
            if ( v11 < 0 )
              break;
            v12 = v24;
            v23[v8 + 1] = 0LL;
            v11 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v12);
            v6 = v11;
            if ( v11 < 0 )
            {
              v18 = 1436;
              goto LABEL_23;
            }
            ReleaseInterface<CBitmapRealization>(&v24);
            if ( ++v8 >= a3[3].HighPart )
              goto LABEL_8;
          }
          v18 = 1425;
LABEL_23:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, v11, v18);
        }
        else
        {
LABEL_8:
          if ( a3[3].HighPart > 1u )
            CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo::CBindInfo *)this);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, v6, 0x577u);
      }
      v13 = (unsigned int)v23[0];
      for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        v15 = v23[i + 1];
        if ( v15 )
        {
          CloseHandle(v15);
          v13 = (unsigned int)v23[0];
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CBitmapRealization>(v24);
  return (unsigned int)v6;
}
