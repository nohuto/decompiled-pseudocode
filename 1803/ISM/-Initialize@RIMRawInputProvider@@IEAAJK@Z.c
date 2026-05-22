/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006C2B0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18004CCA8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exceptio.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18006C878 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180070E20 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800727E4 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800731A8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073D74 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800742BC (-Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180074D04 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  __int64 *v4; // r15
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  struct IRawInputClient *v8; // rbx
  HIDDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  HIDDeviceCollection *v12; // rsi
  int (*v13)(void *, unsigned int, void *); // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct IRawInputClient *v16; // r15
  __int64 v17; // rdx
  char *v18; // rax
  char *v19; // rsi
  int v20; // eax
  int (*v21)(void *, unsigned int, void *); // r8
  void **v22; // rsi
  __int64 v23; // rcx
  int (*v24)(void *, unsigned int, void *); // r8
  void **v25; // rsi
  __int64 v26; // rcx
  int (*v27)(void *, unsigned int, void *); // r8
  __int64 v28; // rcx
  struct IRawInputClient *v29; // rsi
  HIDDeviceCollection *v30; // rax
  HIDDeviceCollection *v31; // rbx
  int (*v32)(void *, unsigned int, void *); // r8
  void **v33; // rsi
  __int64 v34; // rcx
  int (*v35)(void *, unsigned int, void *); // r8
  void **v36; // rsi
  __int64 v37; // rcx
  int (*v38)(void *, unsigned int, void *); // r8
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HIDDeviceCollection *v41; // [rsp+80h] [rbp+40h] BYREF
  void *v42; // [rsp+90h] [rbp+50h] BYREF
  _QWORD *v43; // [rsp+98h] [rbp+58h]

  v42 = 0LL;
  v4 = (__int64 *)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = CoreUICreate(v4);
  if ( v6 >= 0 )
  {
    if ( (a2 & 0x400) == 0 )
      goto LABEL_21;
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    if ( !v8 )
      return (unsigned int)-2147024809;
    v9 = (HIDDeviceCollection *)malloc(0xAD8uLL);
    v12 = v9;
    if ( v9 )
      memset_0(v9, 0, 0xAD8uLL);
    v41 = v12;
    if ( v12 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v12, v8);
      *(_QWORD *)v12 = &AugmentedInputDeviceCollection::`vftable';
      v43 = (_QWORD *)((char *)v12 + 2760);
      *((_QWORD *)v12 + 345) = 0LL;
      *((_QWORD *)v12 + 346) = 0LL;
      *((_QWORD *)v12 + 345) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buyheadnode();
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
      return (unsigned int)-2147024882;
    LODWORD(v41) = 130986;
    v6 = HIDDeviceCollection::Initialize(v12, v10, (struct _RIM_USAGE_ANDPAGE *const)&v41, v11, 8u, &v42);
    if ( v6 < 0 )
      (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
    else
      *((_QWORD *)this + 6) = v12;
    if ( v6 >= 0 )
    {
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v13, *((void **)this + 6));
      if ( v6 >= 0 )
      {
LABEL_21:
        if ( (a2 & 0x2000) == 0 )
          goto LABEL_74;
        v14 = *((_QWORD *)this + 7);
        if ( v14 )
        {
          *((_QWORD *)this + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = *v4;
        v16 = (struct IRawInputClient *)*((_QWORD *)this + 3);
        v41 = 0LL;
        *((_QWORD *)this + 7) = 0LL;
        if ( !v16 )
        {
          v6 = -2147024809;
          v17 = 241LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v6);
          return (unsigned int)v6;
        }
        v18 = (char *)malloc(0xB20uLL);
        v19 = v18;
        if ( v18 )
          memset_0(v18, 0, 0xB20uLL);
        if ( v19 )
        {
          HIDDeviceCollection::HIDDeviceCollection((HIDDeviceCollection *)v19, v16);
          *(_QWORD *)v19 = &SpatialRimDeviceCollection::`vftable'{for `HIDDeviceCollection'};
          *((_QWORD *)v19 + 345) = &SpatialRimDeviceCollection::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks'};
          *((_QWORD *)v19 + 346) = v15;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          *((_QWORD *)v19 + 347) = 0LL;
          *((_DWORD *)v19 + 696) = 0;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v19 + 2792), 0, 0);
          *((_QWORD *)v19 + 354) = 0LL;
          *((_DWORD *)v19 + 710) = 0;
          *((_QWORD *)v19 + 3) = this;
        }
        else
        {
          v19 = 0LL;
        }
        v41 = (HIDDeviceCollection *)v19;
        if ( !v19 )
        {
          v6 = -2147024882;
          v17 = 244LL;
          goto LABEL_26;
        }
        v20 = SpatialRimDeviceCollection::Initialize((SpatialRimDeviceCollection *)v19, &v42);
        v6 = v20;
        if ( v20 >= 0 )
        {
          *((_QWORD *)this + 7) = v19;
          v6 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
        }
        if ( v6 >= 0 )
        {
          v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v21, *((void **)this + 7));
          if ( v6 >= 0 )
          {
LABEL_74:
            if ( (a2 & 0x80u) == 0 )
              goto LABEL_75;
            v22 = (void **)((char *)this + 40);
            v23 = *((_QWORD *)this + 5);
            if ( v23 )
            {
              *v22 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            v6 = MobileButtonDeviceCollection::Create(
                   *((struct IRawInputClient **)this + 3),
                   this,
                   &v42,
                   (struct MobileButtonDeviceCollection **)this + 5);
            if ( v6 >= 0 )
            {
              v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v24, *v22);
              if ( v6 >= 0 )
              {
                v25 = (void **)((char *)this + 64);
                v26 = *((_QWORD *)this + 8);
                if ( v26 )
                {
                  *v25 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                }
                v6 = ConsumerControlDeviceCollection::Create(
                       *((struct IRawInputClient **)this + 3),
                       this,
                       &v42,
                       (struct ConsumerControlDeviceCollection **)this + 8);
                if ( v6 >= 0 )
                {
                  v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v27, *v25);
                  if ( v6 >= 0 )
                  {
LABEL_75:
                    if ( (a2 & 0x800) == 0 )
                      goto LABEL_76;
                    v28 = *((_QWORD *)this + 10);
                    if ( v28 )
                    {
                      *((_QWORD *)this + 10) = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                    }
                    v29 = (struct IRawInputClient *)*((_QWORD *)this + 3);
                    if ( !v29 )
                      return (unsigned int)-2147024809;
                    v30 = (HIDDeviceCollection *)malloc(0xAC8uLL);
                    v31 = v30;
                    if ( v30 )
                    {
                      memset_0(v30, 0, 0xAC8uLL);
                      HIDDeviceCollection::HIDDeviceCollection(v31, v29);
                      *(_QWORD *)v31 = &HeatDeviceCollection::`vftable';
                      *((_QWORD *)v31 + 3) = this;
                    }
                    else
                    {
                      v31 = 0LL;
                    }
                    if ( !v31 )
                      return (unsigned int)-2147024882;
                    *((_QWORD *)this + 10) = v31;
                    v6 = (*(__int64 (__fastcall **)(HIDDeviceCollection *, void **))(*(_QWORD *)v31 + 48LL))(v31, &v42);
                    if ( v6 >= 0 )
                    {
                      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v32, *((void **)this + 10));
                      if ( v6 >= 0 )
                      {
LABEL_76:
                        if ( (a2 & 0x4000) == 0 )
                          goto LABEL_77;
                        v33 = (void **)((char *)this + 88);
                        v34 = *((_QWORD *)this + 11);
                        if ( v34 )
                        {
                          *v33 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                        }
                        v6 = GazeDeviceCollection::Create(
                               *((struct IRawInputClient **)this + 3),
                               this,
                               &v42,
                               (struct GazeDeviceCollection **)this + 11);
                        if ( v6 >= 0 )
                        {
                          v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v35, *v33);
                          if ( v6 >= 0 )
                          {
LABEL_77:
                            if ( (a2 & 0x80000) == 0 )
                              return 0;
                            v36 = (void **)((char *)this + 72);
                            v37 = *((_QWORD *)this + 9);
                            if ( v37 )
                            {
                              *v36 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                            }
                            v6 = CameraControlDeviceCollection::Create(
                                   *((struct IRawInputClient **)this + 3),
                                   this,
                                   &v42,
                                   (struct CameraControlDeviceCollection **)this + 9);
                            if ( v6 >= 0 )
                            {
                              v6 = RIMRawInputProvider::RegisterWaitHandler(this, v42, v38, *v36);
                              if ( v6 >= 0 )
                                return 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
