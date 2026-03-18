/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18007616C
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180021278 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x1800212C0 (-Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180075EC4 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x1800C671C (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        struct _LUID *a3)
{
  int v6; // edi
  int v7; // eax
  __int64 v8; // rbx
  struct _LUID v9; // xmm1_8
  HANDLE v10; // rax
  int v11; // eax
  struct CBitmapRealization *v12; // rdx
  unsigned int v13; // edx
  __int64 i; // rbx
  HANDLE v15; // rcx
  struct _LUID v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-E0h]
  _DWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v22; // [rsp+38h] [rbp-C8h]
  struct _LUID v23; // [rsp+40h] [rbp-C0h]
  struct _LUID v24; // [rsp+48h] [rbp-B8h]
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hObject[31]; // [rsp+58h] [rbp-A8h]
  struct CBitmapRealization *v27; // [rsp+190h] [rbp+90h] BYREF

  v6 = 0;
  v27 = 0LL;
  memset_0(&v25, 0, 0x100uLL);
  if ( (unsigned int)(a3[3].HighPart - 1) > 0x1E )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801F3660, 3u, -2147024809, 0x55Du);
  }
  else
  {
    v7 = NtOpenCompositionSurfaceSwapChainHandleInfo(*((_QWORD *)*this + 4), this + 1, &v25);
    if ( v7 < 0 )
    {
      v6 = v7 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3660, 3u, v7 | 0x10000000, 0x566u);
    }
    else
    {
      if ( a3[3].HighPart <= 1u )
        goto LABEL_4;
      v17 = a3[5];
      if ( !this[19] )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
        v19 = CDecodeBitmap::Create((const struct _GUID *)(v18 + 324), v17, this + 19);
        v6 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x6C8u);
      }
      if ( v6 >= 0 )
      {
LABEL_4:
        v8 = 0LL;
        if ( a3[3].HighPart )
        {
          while ( 1 )
          {
            v21[0] = a3[3].LowPart;
            v21[1] = v8;
            v9 = a3[3 * v8 + 6];
            v10 = hObject[v8];
            v23 = a3[3 * v8 + 5];
            v22 = v10;
            v24 = v9;
            v11 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                    this,
                    a2,
                    (const struct CSM_REALIZATION_INFO *)v21,
                    &v27);
            v6 = v11;
            if ( v11 < 0 )
              break;
            v12 = v27;
            hObject[v8] = 0LL;
            v11 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v12);
            v6 = v11;
            if ( v11 < 0 )
            {
              v20 = 1429;
              goto LABEL_23;
            }
            ReleaseInterface<CBitmapRealization>(&v27);
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= a3[3].HighPart )
              goto LABEL_8;
          }
          v20 = 1418;
LABEL_23:
          MilInstrumentationCheckHR(0x14u, &dword_1801F3660, 3u, v11, v20);
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
        MilInstrumentationCheckHR(0x14u, &dword_1801F3660, 3u, v6, 0x570u);
      }
      v13 = v25;
      for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        v15 = hObject[i];
        if ( v15 )
        {
          CloseHandle(v15);
          v13 = v25;
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CBitmapRealization>(v27);
  return (unsigned int)v6;
}
