/*
 * XREFs of ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800093C8 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z @ 0x180019CA4 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z.c)
 *     ConvertInputTypeToPointerType @ 0x18001A418 (ConvertInputTypeToPointerType.c)
 *     ?HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z @ 0x18001BB4C (-HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z.c)
 *     ?FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18001BB9C (-FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18001FAD8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1800226D8 (-Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800314C0 (-Set@Property@Input@@UEAAJPEBXK@Z.c)
 *     ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x1800319D8 (-Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DWMInputRouter::s_HitTestHandler(__int64 a1, DWMInputRouter *a2, __int64 **a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  char v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int PointerAtIndex; // eax
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r9d
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  int v17; // edx
  struct Pointer *v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  void *v25; // r12
  struct IInputTarget *v26; // rbx
  struct IInputTarget *v27; // rdi
  int (__fastcall **v28)(struct IInputTarget *, GUID *, __int64 *); // rsi
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  DWMInputRouter *v33; // r15
  int v34; // eax
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // r9d
  DWMInputRouter *v41; // rcx
  unsigned int v42; // esi
  Input::PropertyMap *v43; // rdi
  __int64 v44; // rcx
  Input::PropertyMap *v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // rcx
  DWMInputRouter *v52; // rcx
  bool v53; // di
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  struct IInputTarget *v57; // rsi
  struct IInputTarget *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 (__fastcall ***v61)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v62; // rcx
  struct IInputTarget *v63; // rcx
  char v65[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  DWMInputRouter *v67; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget *v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  struct IInputTarget *v70; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ***v71)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v73; // [rsp+80h] [rbp-80h]
  Input::PropertyMap *v74; // [rsp+88h] [rbp-78h] BYREF
  struct Pointer *v75; // [rsp+90h] [rbp-70h] BYREF
  void *v76; // [rsp+98h] [rbp-68h]
  __int64 **v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v79[26]; // [rsp+B0h] [rbp-50h] BYREF
  void **v80; // [rsp+180h] [rbp+80h] BYREF
  __int128 v81; // [rsp+188h] [rbp+88h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  void *Block; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  unsigned int v85[175]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v86; // [rsp+46Ch] [rbp+36Ch]
  char v87; // [rsp+C84h] [rbp+B84h]
  char v88; // [rsp+CD0h] [rbp+BD0h] BYREF

  v78 = -2LL;
  v77 = a3;
  v67 = a2;
  v6 = a3[1];
  v7 = *a3;
  v8 = 0;
  while ( v7 != v6 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ++v7;
  }
  a3[1] = *a3;
  v76 = 0LL;
  memset(v79, 0, sizeof(v79));
  v70 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v69 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v73 = v10;
  PointerAtIndex = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, v85);
  v13 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_137;
    v14 = 2479;
    goto LABEL_9;
  }
  PointerAtIndex = GetPointerAtIndex((struct InputInfo *)v85, v10, &v75);
  v13 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 2480;
LABEL_9:
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v14, PointerAtIndex);
      goto LABEL_137;
    }
    goto LABEL_137;
  }
  PointerAtIndex = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)a1 + 40LL))(a1, &v70);
  v13 = PointerAtIndex;
  if ( PointerAtIndex >= 0 )
  {
    v15 = v72;
    if ( v72 )
    {
      v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    PointerAtIndex = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v72);
    v13 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 2482;
        goto LABEL_9;
      }
      goto LABEL_137;
    }
    v16 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
    }
    PointerAtIndex = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 24LL))(
                       a1,
                       &v71);
    v13 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 2487;
        goto LABEL_9;
      }
      goto LABEL_137;
    }
    PointerAtIndex = (**v71)(v71, &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754, &v69);
    v13 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 2488;
        goto LABEL_9;
      }
      goto LABEL_137;
    }
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v69 + 24LL))(v69, &v79[1]);
    HIDWORD(v79[22]) = 0;
    LODWORD(v79[0]) = ConvertInputTypeToPointerType(v85[0]);
    if ( LODWORD(v79[0]) == 4 )
    {
      v17 = ((v86 & 0xC00) != 0) | 2;
      if ( (v86 & 1) == 0 )
        v17 = (v86 & 0xC00) != 0;
      if ( v87 )
        v17 |= 8u;
      HIDWORD(v79[22]) = v17;
    }
    v18 = v75;
    v66 = *(_QWORD *)((char *)v75 + 12);
    v79[2] = v66;
    v79[5] = (unsigned __int64)&v88;
    v79[6] = 100LL;
    LODWORD(v79[24]) = v85[168];
    if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD, unsigned __int64 *))a2 + 23))(*((_QWORD *)a2 + 23), v79) )
      goto LABEL_137;
    if ( LODWORD(v79[6]) > 0x64 )
    {
      CloseHandle((HANDLE)v79[4]);
      memset(v79, 0, sizeof(v79));
      v76 = operator new[](saturated_mul(LODWORD(v79[6]), 8uLL));
      if ( !v76 )
      {
        v13 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 2532, 14);
        goto LABEL_137;
      }
      LODWORD(v79[0]) = ConvertInputTypeToPointerType(v85[0]);
      if ( LODWORD(v79[0]) == 4 )
      {
        v21 = HIDWORD(v79[22]);
        if ( (v86 & 0xC00) != 0 )
          v21 = HIDWORD(v79[22]) | 1;
        v22 = v21 | 2;
        if ( (v86 & 1) == 0 )
          v22 = v21;
        HIDWORD(v79[22]) = v22;
      }
      v66 = *(_QWORD *)((char *)v18 + 12);
      v79[2] = v66;
      v79[5] = v20;
      if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD, unsigned __int64 *))a2 + 23))(*((_QWORD *)a2 + 23), v79) )
      {
        v13 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 0, 2554, 255);
        goto LABEL_135;
      }
    }
    v24 = v79[16];
    v25 = (void *)v79[4];
    v26 = 0LL;
    v68 = 0LL;
    v27 = v70;
    if ( v70 )
    {
      v66 = 0LL;
      v28 = *(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v70;
      v29 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>((__int64 *)&v66);
      if ( (*v28)(v27, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v29) >= 0 )
      {
        v30 = v66;
        if ( !v66 )
        {
          v13 = -2147418113;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 2579, 255);
            v30 = v66;
          }
          if ( v30 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          goto LABEL_135;
        }
        v8 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, void *))(*(_QWORD *)v66 + 24LL))(
               v66,
               v24,
               v25);
      }
      v31 = v66;
      if ( v66 )
      {
        v66 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      if ( v8 )
      {
        if ( v70 )
        {
          v26 = v70;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v70 + 8LL))(v70);
          v68 = v26;
        }
        CloseHandle(v25);
        goto LABEL_76;
      }
    }
    if ( v24 )
    {
      v32 = v24;
      v33 = v67;
      v34 = DWMInputRouter::CreateAndRegisterTarget(v67, v32, v25, &v68);
      v13 = v34;
      if ( v34 >= 0 )
      {
        v26 = v68;
        goto LABEL_77;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v36 = 2611;
LABEL_68:
        McTemplateU0qqq(v35, &MinInput_Warning_CheckResult, 0, v36, v34);
      }
    }
    else
    {
      v34 = DWMNullInputTarget::Create(&v68);
      v13 = v34;
      if ( v34 >= 0 )
      {
        v26 = v68;
LABEL_76:
        v33 = v67;
LABEL_77:
        if ( v26 )
        {
          v67 = 0LL;
          v38 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, DWMInputRouter **))v26)(
                  v26,
                  &GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78,
                  &v67);
          v13 = v38;
          if ( v38 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            {
LABEL_82:
              v41 = v67;
              if ( !v67 )
              {
LABEL_133:
                v37 = *(_QWORD *)v26;
                goto LABEL_134;
              }
              v67 = 0LL;
LABEL_84:
              (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v41 + 16LL))(v41);
              goto LABEL_133;
            }
            v40 = 2625;
LABEL_81:
            McTemplateU0qqq(v39, &MinInput_Warning_CheckResult, 0, v40, v38);
            goto LABEL_82;
          }
          v38 = (*(__int64 (__fastcall **)(DWMInputRouter *, Input::PropertyMap **))(*(_QWORD *)v67 + 32LL))(v67, &v74);
          v13 = v38;
          if ( v38 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_82;
            v40 = 2626;
            goto LABEL_81;
          }
          v65[0] = v79[22] & 1;
          v42 = v79[15];
          v43 = v74;
          v80 = &Input::PropertyNode::`vftable';
          v81 = INPUTTARGET_ROUTETOMT;
          v82 = 0LL;
          Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v80);
          v80 = &Input::Property::`vftable';
          Block = 0LL;
          v84 = 0LL;
          v13 = Input::Property::Set((Input::Property *)&v80, v65, 1u);
          if ( v13 >= 0 )
            v13 = Input::PropertyMap::Insert(v43);
          v80 = &Input::Property::`vftable';
          operator delete(Block);
          Block = 0LL;
          v84 = 0LL;
          operator delete(0LL);
          if ( v13 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v44, &MinInput_Warning_CheckResult, 0, 2633, v13);
            goto LABEL_82;
          }
          v45 = v74;
          v80 = &Input::PropertyNode::`vftable';
          v81 = INPUTTARGET_HITTESTEDINTERACTION;
          v82 = 0LL;
          Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v80);
          v80 = &Input::Property::`vftable';
          Block = 0LL;
          v84 = 0LL;
          v13 = Input::Property::Set((Input::Property *)&v80, &v79[15], 4u);
          if ( v13 >= 0 )
            v13 = Input::PropertyMap::Insert(v45);
          v80 = &Input::Property::`vftable';
          operator delete(Block);
          Block = 0LL;
          v84 = 0LL;
          operator delete(0LL);
          if ( v13 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v46, &MinInput_Warning_CheckResult, 0, 2637, v13);
            goto LABEL_82;
          }
          if ( v65[0] )
          {
            v66 = 0LL;
            v47 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, unsigned __int64 *))v26)(
                    v26,
                    &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
                    &v66);
            v13 = v47;
            if ( v47 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_104;
              v49 = 2646;
              goto LABEL_103;
            }
            v47 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v66 + 104LL))(v66, v42);
            v13 = v47;
            if ( v47 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              {
LABEL_104:
                v50 = v66;
                if ( v66 )
                {
                  v66 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                }
                goto LABEL_82;
              }
              v49 = 2649;
LABEL_103:
              McTemplateU0qqq(v48, &MinInput_Warning_CheckResult, 0, v49, v47);
              goto LABEL_104;
            }
            v51 = v66;
            if ( v66 )
            {
              v66 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
            }
          }
          v52 = v67;
          if ( v67 )
          {
            v67 = 0LL;
            (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
        v53 = 0;
        if ( !v26 )
          goto LABEL_128;
        *(_QWORD *)&v81 = 0LL;
        v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD, struct IInputTarget *, void ***))(**((_QWORD **)v33 + 27) + 24LL))(
                *((_QWORD *)v33 + 27),
                v69,
                v85,
                v73,
                v26,
                &v80);
        v13 = v54;
        if ( v54 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v55, &MinInput_Warning_CheckResult, 0, 2665, v54);
          v41 = (DWMInputRouter *)v81;
          if ( !(_QWORD)v81 )
            goto LABEL_133;
          *(_QWORD *)&v81 = 0LL;
          goto LABEL_84;
        }
        v56 = v81;
        if ( (_DWORD)v80 )
        {
          if ( v26 != (struct IInputTarget *)v81 )
          {
            v57 = (struct IInputTarget *)v81;
            if ( (_QWORD)v81 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v81 + 8LL))(v81);
              v56 = v81;
            }
            v58 = v26;
            v26 = v57;
            v68 = v57;
            (*(void (__fastcall **)(struct IInputTarget *, __int64))(*(_QWORD *)v58 + 16LL))(v58, v56);
            v56 = v81;
          }
          v53 = (BYTE8(v81) & 1) != 0;
        }
        if ( v56 )
        {
          *(_QWORD *)&v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        }
        if ( !v53 )
        {
LABEL_128:
          if ( (*((_BYTE *)v75 + 4) & 2) != 0 )
          {
            v59 = DWMInputRouter::HitTestView((void **)v79[5], v79[6]);
            DWMInputRouter::FireViewHitTestCallback((__int64)v33, v59, v85[1], v85[0], v79[1], v79[2]);
          }
        }
        if ( v26 )
        {
          std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
            v77,
            &v68);
          v26 = v68;
        }
        if ( !v26 )
          goto LABEL_135;
        goto LABEL_133;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v36 = 2616;
        goto LABEL_68;
      }
    }
    if ( !v68 )
      goto LABEL_135;
    v37 = *(_QWORD *)v68;
LABEL_134:
    (*(void (**)(void))(v37 + 16))();
LABEL_135:
    if ( v76 )
      operator delete(v76);
    goto LABEL_137;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v14 = 2481;
    goto LABEL_9;
  }
LABEL_137:
  v60 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  v61 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v61)[2])(v61);
  }
  v62 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
  v63 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v63 + 16LL))(v63);
  }
  return (unsigned int)v13;
}
