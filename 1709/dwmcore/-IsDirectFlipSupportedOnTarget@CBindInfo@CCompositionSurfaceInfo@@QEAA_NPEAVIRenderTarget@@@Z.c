/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18017C314
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x18015DFC0 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18002B46C (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011B170 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     McTemplateU0xqqqqqqqq @ 0x18017CFF8 (McTemplateU0xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        struct _LUID **this,
        struct IRenderTarget *a2)
{
  struct _LUID *v3; // rcx
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
  struct _LUID *v22; // rsi
  bool v23; // zf
  struct _LUID v24; // rax
  char v25; // r14
  DWORD LowPart; // ebx
  char v27; // r12
  __int64 v28; // rdi
  char v29; // al
  int v30; // edx
  struct _LUID *v31; // rcx
  __int64 v32; // rax
  __int128 v33; // xmm0
  int (__fastcall ***v34)(__int64, GUID *, __int64 *); // rcx
  char *v36; // [rsp+20h] [rbp-A9h]
  char v37; // [rsp+60h] [rbp-69h] BYREF
  float v38; // [rsp+64h] [rbp-65h] BYREF
  int (__fastcall ***v39)(__int64, GUID *, __int64 *); // [rsp+68h] [rbp-61h] BYREF
  __int64 v40; // [rsp+70h] [rbp-59h] BYREF
  __int64 v41; // [rsp+78h] [rbp-51h] BYREF
  __int64 v42; // [rsp+80h] [rbp-49h] BYREF
  CDisplaySet *v43; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v44[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v45; // [rsp+98h] [rbp-31h] BYREF
  struct IRenderTarget *v46; // [rsp+A8h] [rbp-21h]
  float v47; // [rsp+B0h] [rbp-19h] BYREF
  float v48; // [rsp+B4h] [rbp-15h]
  float v49; // [rsp+B8h] [rbp-11h]
  float v50; // [rsp+BCh] [rbp-Dh]
  struct _LUID v51[2]; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD v52[4]; // [rsp+D0h] [rbp+7h] BYREF

  v46 = a2;
  v37 = 0;
  v3 = this[9];
  v43 = 0LL;
  if ( v3
    && (*(unsigned __int8 (__fastcall **)(struct _LUID *))(*(_QWORD *)&v3[18] + 80LL))(v3 + 18)
    && (int)CDisplayManager::GetCurrentDisplaySet(v5, &v43) >= 0 )
  {
    CBitmapRealization::GetSourceRect((__int64)this[9], (__int64)&v47);
    v6 = v43;
    LODWORD(v45) = (int)v47;
    DWORD1(v45) = (int)v48;
    DWORD2(v45) = (int)v49;
    HIDWORD(v45) = (int)v50;
    if ( *((_DWORD *)v43 + 1) == *((_DWORD *)this + 42)
      && this[20] == (struct _LUID *)a2
      && *((_DWORD *)this + 44) == *(_DWORD *)((*(__int64 (__fastcall **)(struct _LUID *, struct _LUID *))(*(_QWORD *)&this[9][18] + 24LL))(
                                                 this[9] + 18,
                                                 v51)
                                             + 8)
      && operator==((_DWORD *)this + 45, &v45) )
    {
      v37 = *((_BYTE *)this + 173);
    }
    else
    {
      v7 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2;
      v39 = 0LL;
      if ( (*v7)(a2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, (__int64 *)&v39) >= 0 )
      {
        LODWORD(v40) = DisplayId::Invalid;
        v8 = 0;
        if ( (*v39)[11]((__int64)v39, (GUID *)v44, &v40) >= 0 )
        {
          v42 = 0LL;
          if ( (**v39)((__int64)v39, &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31, &v42) >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
          AdapterLuid = CBitmapRealization::GetAdapterLuid((CBitmapRealization *)this[9], v51);
          if ( *(_DWORD *)AdapterLuid.LowPart == v44[0] && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v44[1] )
          {
            v11 = v40;
            v12 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v10 + 48LL))(v10, &v38);
            if ( (*v12 == DisplayId::None || *v12 == v11 || v11 == DisplayId::All)
              && (*(int (__fastcall **)(struct _LUID *, __int64 *, _QWORD))(*(_QWORD *)this[9] + 56LL))(
                   this[9],
                   &v41,
                   v8) >= 0 )
            {
              CBitmapRealization::GetSourceRect((__int64)this[9], (__int64)&v47);
              v13 = (__int64)&this[9][18];
              v14 = v47 + 6291456.25;
              v52[0] = (int)(LODWORD(v14) << 10) >> 11;
              v15 = v48 + 6291456.25;
              v52[1] = (int)(LODWORD(v15) << 10) >> 11;
              v16 = v49 + 6291456.25;
              v52[2] = (int)(LODWORD(v16) << 10) >> 11;
              v38 = v50 + 6291456.25;
              v52[3] = (int)(LODWORD(v38) << 10) >> 11;
              v17 = *v39;
              v18 = (*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v13 + 24LL))(v13, v51);
              v36 = &v37;
              ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *), __int64, _QWORD, _DWORD *))v17[42])(
                v39,
                v41,
                *(unsigned int *)(v18 + 8),
                v52);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            }
          }
        }
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
        {
          v19 = (__int64)&this[9][18];
          v38 = 0.0;
          LODWORD(v41) = 0;
          (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, &v38, &v41);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v20 = v37 != 0;
            v21 = (_DWORD *)(*(__int64 (__fastcall **)(struct _LUID *, __int64 *))(*(_QWORD *)this[9] + 48LL))(
                              this[9],
                              &v42);
            v22 = this[9];
            v23 = *v21 == DisplayId::None;
            v24 = v22[18];
            v25 = !v23;
            v23 = v22[34].LowPart == 3;
            v51[0] = (*this)[5];
            LowPart = v51[0].LowPart;
            v27 = v23;
            v28 = (*(__int64 (__fastcall **)(struct _LUID *, float *))(*(_QWORD *)&v24 + 24LL))(v22 + 18, &v47);
            v29 = (*(__int64 (__fastcall **)(struct _LUID *))(*(_QWORD *)v22 + 72LL))(v22);
            McTemplateU0xqqqqqqqq(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              v30,
              LowPart,
              v20,
              (_DWORD)v36,
              v29,
              *(_DWORD *)(v28 + 4),
              v27,
              v25,
              SLOBYTE(v38),
              v41);
            v6 = v43;
          }
        }
        v31 = this[9];
        *((_DWORD *)this + 42) = *((_DWORD *)v6 + 1);
        this[20] = (struct _LUID *)v46;
        *((_BYTE *)this + 173) = v37;
        v32 = (*(__int64 (__fastcall **)(struct _LUID *, float *))(*(_QWORD *)&v31[18] + 24LL))(v31 + 18, &v47);
        v33 = v45;
        v34 = v39;
        *((_DWORD *)this + 44) = *(_DWORD *)(v32 + 8);
        *(_OWORD *)((char *)this + 180) = v33;
        ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v34)[2])(v34);
      }
    }
    CDisplaySet::Release(v6);
  }
  return v37;
}
