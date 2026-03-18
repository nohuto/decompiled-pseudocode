/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x180175314
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x180164500 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180036B6C (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800C4A3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801303E0 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     Template_xqqqqqqqq @ 0x180175FF0 (Template_xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  __int64 v3; // rcx
  CDisplayManager *v5; // rcx
  CDisplaySet *v6; // rdi
  int (__fastcall **v7)(struct IRenderTarget *, GUID *, __int64 *); // rax
  unsigned int v8; // r14d
  struct _LUID AdapterLuid; // rax
  _QWORD *v10; // rcx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int (__fastcall **v17)(__int64, GUID *, __int64 *); // rbx
  unsigned int v18; // eax
  __int64 v19; // rcx
  BOOL v20; // r12d
  _DWORD *v21; // rax
  __int64 v22; // rdi
  DWORD LowPart; // ebx
  bool v24; // dl
  char v25; // r14
  char v26; // r15
  char v27; // si
  char v28; // al
  int v29; // edx
  __int64 v30; // rcx
  int v31; // eax
  __int128 v32; // xmm0
  int (__fastcall ***v33)(__int64, GUID *, __int64 *); // rcx
  char *v35; // [rsp+20h] [rbp-99h]
  char v36; // [rsp+60h] [rbp-59h] BYREF
  float v37; // [rsp+64h] [rbp-55h] BYREF
  int (__fastcall ***v38)(__int64, GUID *, __int64 *); // [rsp+68h] [rbp-51h] BYREF
  int v39; // [rsp+70h] [rbp-49h] BYREF
  __int64 v40; // [rsp+78h] [rbp-41h] BYREF
  __int64 v41; // [rsp+80h] [rbp-39h] BYREF
  CDisplaySet *v42; // [rsp+88h] [rbp-31h] BYREF
  _DWORD v43[2]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v44; // [rsp+98h] [rbp-21h] BYREF
  struct IRenderTarget *v45; // [rsp+A8h] [rbp-11h]
  struct _LUID v46; // [rsp+B0h] [rbp-9h] BYREF
  float v47; // [rsp+B8h] [rbp-1h]
  float v48; // [rsp+BCh] [rbp+3h]
  _DWORD v49[4]; // [rsp+C0h] [rbp+7h] BYREF

  v45 = a2;
  v36 = 0;
  v3 = *((_QWORD *)this + 9);
  v42 = 0LL;
  if ( v3
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 104) + 96LL))(v3 + 104)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v42) >= 0 )
  {
    CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), (__int64)&v46);
    v6 = v42;
    LODWORD(v44) = (int)*(float *)&v46.LowPart;
    DWORD1(v44) = (int)*(float *)&v46.HighPart;
    DWORD2(v44) = (int)v47;
    HIDWORD(v44) = (int)v48;
    if ( *((_DWORD *)v42 + 1) == *((_DWORD *)this + 42)
      && *((struct IRenderTarget **)this + 20) == a2
      && *((_DWORD *)this + 44) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 104LL)
                                                                           + 56LL))(*((_QWORD *)this + 9) + 104LL)
      && operator==((_DWORD *)this + 45, &v44) )
    {
      v36 = *((_BYTE *)this + 173);
    }
    else
    {
      v7 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2;
      v38 = 0LL;
      if ( (*v7)(a2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, (__int64 *)&v38) >= 0 )
      {
        v39 = DisplayId::Invalid;
        v8 = 0;
        if ( ((int (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), _DWORD *, int *, _QWORD))(*v38)[13])(
               v38,
               v43,
               &v39,
               0LL) >= 0 )
        {
          v41 = 0LL;
          if ( (**v38)((__int64)v38, &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31, &v41) >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 40LL))(v41);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          AdapterLuid = CBitmapRealization::GetAdapterLuid(*((CBitmapRealization **)this + 9), &v46);
          if ( *(_DWORD *)AdapterLuid.LowPart == v43[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v43[1] )
          {
            v11 = v39;
            v12 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v10 + 88LL))(v10, &v37);
            if ( (v12 == DisplayId::None || v12 == v11 || v11 == DisplayId::All)
              && (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
                   *((_QWORD *)this + 9),
                   &v40,
                   v8) >= 0 )
            {
              CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), (__int64)&v46);
              v13 = *((_QWORD *)this + 9) + 104LL;
              v14 = *(float *)&v46.LowPart + 6291456.25;
              v49[0] = (int)(LODWORD(v14) << 10) >> 11;
              v15 = *(float *)&v46.HighPart + 6291456.25;
              v49[1] = (int)(LODWORD(v15) << 10) >> 11;
              v16 = v47 + 6291456.25;
              v49[2] = (int)(LODWORD(v16) << 10) >> 11;
              v37 = v48 + 6291456.25;
              v49[3] = (int)(LODWORD(v37) << 10) >> 11;
              v17 = *v38;
              v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
              v35 = &v36;
              ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), __int64, _QWORD, _DWORD *))v17[41])(
                v38,
                v40,
                v18,
                v49);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v19 = *((_QWORD *)this + 9) + 104LL;
          v37 = 0.0;
          LODWORD(v40) = 0;
          (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v37, &v40);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v20 = v36 != 0;
            v21 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 88LL))(
                              *((_QWORD *)this + 9),
                              &v41);
            v22 = *((_QWORD *)this + 9);
            v24 = *v21 != DisplayId::None;
            v46 = *(struct _LUID *)(*(_QWORD *)this + 40LL);
            LowPart = v46.LowPart;
            v25 = v24;
            v26 = *(_DWORD *)(v22 + 240) == 3;
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v22 + 104) + 48LL))(v22 + 104);
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 96LL))(v22);
            Template_xqqqqqqqq(LODWORD(v37), v29, LowPart, v20, (_DWORD)v35, v28, v27, v26, v25, SLOBYTE(v37), v40);
            v6 = v42;
          }
        }
        v30 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 42) = *((_DWORD *)v6 + 1);
        *((_QWORD *)this + 20) = v45;
        *((_BYTE *)this + 173) = v36;
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v30 + 104) + 56LL))(v30 + 104);
        v32 = v44;
        v33 = v38;
        *((_DWORD *)this + 44) = v31;
        *(_OWORD *)((char *)this + 180) = v32;
        ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v33)[2])(v33);
      }
    }
    CDisplaySet::Release(v6);
  }
  return v36;
}
