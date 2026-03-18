/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801AC6B8
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x1801870B0 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800292B4 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x1800498B8 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D9D0 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     McTemplateU0xqqqqqqqq @ 0x1801AD3B8 (McTemplateU0xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  __int64 v3; // rcx
  CDisplayManager *v5; // rcx
  CDisplaySet *v6; // rdi
  int (__fastcall **v7)(struct IRenderTarget *, GUID *, __int64 *); // rax
  unsigned int v8; // esi
  struct _LUID AdapterLuid; // rax
  _QWORD *v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int (__fastcall **v17)(__int64, GUID *, __int64 *); // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  BOOL v20; // r15d
  _DWORD *v21; // rax
  __int64 v22; // rbx
  char v23; // r14
  __int64 v24; // rsi
  char v25; // r12
  __int64 v26; // rdi
  char v27; // al
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm0
  int (__fastcall ***v32)(__int64, GUID *, __int64 *); // rcx
  char *v34; // [rsp+20h] [rbp-A9h]
  char v35; // [rsp+60h] [rbp-69h] BYREF
  int (__fastcall ***v36)(__int64, GUID *, __int64 *); // [rsp+68h] [rbp-61h] BYREF
  __int64 v37; // [rsp+70h] [rbp-59h] BYREF
  __int64 v38; // [rsp+78h] [rbp-51h] BYREF
  __int64 v39; // [rsp+80h] [rbp-49h] BYREF
  CDisplaySet *v40; // [rsp+88h] [rbp-41h] BYREF
  __int128 v41; // [rsp+90h] [rbp-39h] BYREF
  struct IRenderTarget *v42; // [rsp+A0h] [rbp-29h]
  struct _LUID v43[2]; // [rsp+A8h] [rbp-21h] BYREF
  float v44; // [rsp+B8h] [rbp-11h] BYREF
  float v45; // [rsp+BCh] [rbp-Dh]
  float v46; // [rsp+C0h] [rbp-9h]
  float v47; // [rsp+C4h] [rbp-5h]
  _DWORD v48[4]; // [rsp+C8h] [rbp-1h] BYREF
  _DWORD v49[4]; // [rsp+D8h] [rbp+Fh] BYREF

  v42 = a2;
  v35 = 0;
  v3 = *((_QWORD *)this + 9);
  v40 = 0LL;
  if ( v3
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 144) + 80LL))(v3 + 144)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v40) >= 0 )
  {
    CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), (__int64)&v44);
    v6 = v40;
    LODWORD(v41) = (int)v44;
    DWORD1(v41) = (int)v45;
    DWORD2(v41) = (int)v46;
    HIDWORD(v41) = (int)v47;
    if ( *((_DWORD *)v40 + 1) == *((_DWORD *)this + 42)
      && *((struct IRenderTarget **)this + 20) == a2
      && *((_DWORD *)this + 44) == *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*((_QWORD *)this + 9) + 144LL)
                                                                                            + 24LL))(
                                                 *((_QWORD *)this + 9) + 144LL,
                                                 v48)
                                             + 8)
      && operator==((_DWORD *)this + 45, &v41) )
    {
      v35 = *((_BYTE *)this + 173);
    }
    else
    {
      v7 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2;
      v36 = 0LL;
      if ( (*v7)(a2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, (__int64 *)&v36) >= 0 )
      {
        LODWORD(v37) = DisplayId::Invalid;
        v8 = 0;
        if ( (*v36)[17]((__int64)v36, (GUID *)v48, &v37) >= 0 )
        {
          v39 = 0LL;
          if ( (**v36)((__int64)v36, &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31, &v39) >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 40LL))(v39);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
          AdapterLuid = CBitmapRealization::GetAdapterLuid(*((CBitmapRealization **)this + 9), v43);
          if ( *(_DWORD *)AdapterLuid.LowPart == v48[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v48[1] )
          {
            v11 = v37;
            v12 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, struct _LUID *))(*v10 + 48LL))(v10, v43);
            if ( (*v12 == DisplayId::None || *v12 == v11 || v11 == DisplayId::All)
              && (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 56LL))(
                   *((_QWORD *)this + 9),
                   &v38,
                   v8) >= 0 )
            {
              CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), (__int64)&v44);
              v13 = *((_QWORD *)this + 9) + 144LL;
              v14 = v44 + 6291456.25;
              v49[0] = (int)(LODWORD(v14) << 10) >> 11;
              v15 = v45 + 6291456.25;
              v49[1] = (int)(LODWORD(v15) << 10) >> 11;
              v16 = v46 + 6291456.25;
              v49[2] = (int)(LODWORD(v16) << 10) >> 11;
              *(float *)&v43[0].LowPart = v47 + 6291456.25;
              v49[3] = (int)(v43[0].LowPart << 10) >> 11;
              v17 = *v36;
              v18 = (*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v13 + 24LL))(v13, v43);
              v34 = &v35;
              ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), __int64, _QWORD, _DWORD *))v17[48])(
                v36,
                v38,
                *(unsigned int *)(v18 + 8),
                v49);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v19 = *((_QWORD *)this + 9) + 144LL;
          v43[0].LowPart = 0;
          LODWORD(v38) = 0;
          (*(void (__fastcall **)(__int64, struct _LUID *, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, v43, &v38);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v20 = v35 != 0;
            v21 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 48LL))(
                              *((_QWORD *)this + 9),
                              &v39);
            v22 = *((_QWORD *)this + 9);
            v23 = *v21 != DisplayId::None;
            v24 = *(_QWORD *)(*(_QWORD *)this + 40LL);
            v25 = *(_DWORD *)(v22 + 272) == 3;
            v26 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)(v22 + 144) + 24LL))(v22 + 144, &v44);
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
            McTemplateU0xqqqqqqqq(
              (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
              v28,
              v24,
              v20,
              (_DWORD)v34,
              v27,
              *(_DWORD *)(v26 + 4),
              v25,
              v23,
              v43[0].LowPart,
              v38);
            v6 = v40;
          }
        }
        v29 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 42) = *((_DWORD *)v6 + 1);
        *((_QWORD *)this + 20) = v42;
        *((_BYTE *)this + 173) = v35;
        v30 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)(v29 + 144) + 24LL))(v29 + 144, &v44);
        v31 = v41;
        v32 = v36;
        *((_DWORD *)this + 44) = *(_DWORD *)(v30 + 8);
        *(_OWORD *)((char *)this + 180) = v31;
        ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v32)[2])(v32);
      }
    }
    CDisplaySet::Release(v6);
  }
  return v35;
}
