/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000E514
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18003085C (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 * Callees:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x1800080C4 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000F248 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sddd @ 0x1800958CC (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        CSaDeviceProxy *this,
        const struct SaDeviceParams *a2,
        struct CEndpointCharacteristics *a3,
        struct IDeviceGraphObjectsStore *a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7)
{
  struct _GUID **v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  struct _GUID *v14; // rax
  int v15; // eax
  struct IAudioDeviceGraph *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v17; // rax
  struct _RTL_CRITICAL_SECTION *v18; // r14
  struct SaDeviceResourceParams *v19; // r15
  int v20; // edi
  int v22; // [rsp+28h] [rbp-71h]
  int v23; // [rsp+28h] [rbp-71h]
  struct _GUID v24; // [rsp+88h] [rbp-11h] BYREF
  struct _GUID v25; // [rsp+98h] [rbp-1h] BYREF
  struct _GUID v26; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  struct IAudioDeviceGraph *v28; // [rsp+E8h] [rbp+4Fh] BYREF
  LPVOID pv; // [rsp+F8h] [rbp+5Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+100h] [rbp+67h] BYREF

  if ( *((struct IDeviceGraphObjectsStore **)this + 14) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)a4 + 8LL))(a4);
    v28 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a4;
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v28);
  }
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 2LL),
      (_DWORD)pv,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  v11 = (struct _GUID **)((char *)this + 48);
  v12 = CloneSaDeviceParams(a2, (struct SaDeviceParams **)this + 6);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v22);
  }
  else
  {
    v28 = 0LL;
    v14 = *v11;
    v24 = (*v11)[5];
    v25 = v14[4];
    v26 = v14[3];
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v28);
    v15 = CreateSaDevice(
            a3,
            a5,
            a6,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(*v11)->Data4,
            &v26,
            &v25,
            *(_QWORD *)&(*v11)[2].Data1,
            *(_QWORD *)(*v11)[2].Data4,
            *(struct tWAVEFORMATEX **)&(*v11)[1].Data1,
            *(const struct tWAVEFORMATEX **)(*v11)[1].Data4,
            &v24,
            (*v11)[6].Data1,
            &v28);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6AB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v15,
        v23);
    }
    else
    {
      v16 = v28;
      if ( *((struct IAudioDeviceGraph **)this + 10) != v28 )
      {
        if ( v28 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v28 + 8LL))(v28);
        v30 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 10);
        *((_QWORD *)this + 10) = v16;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v30);
      }
      v17 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      v30 = v17;
      v19 = a7;
      if ( v17 )
      {
        v20 = *((_DWORD *)a7 + 2);
        InitializeCriticalSectionEx(v17, 0, 0);
        *(_QWORD *)&v24.Data1 = v18 + 1;
        v18[1].DebugInfo = 0LL;
        *(_QWORD *)&v18[1].LockCount = 0LL;
        v18[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
        LODWORD(v18[1].OwningThread) = v20;
      }
      else
      {
        v18 = 0LL;
      }
      *((_QWORD *)this + 7) = v18;
      if ( v18 )
      {
        *((_BYTE *)this + 72) = a5 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        *((_QWORD *)this + 8) = *(_QWORD *)v19;
        *((_DWORD *)this + 22) = 0;
        *((_DWORD *)this + 23) = 0;
        *((_DWORD *)this + 24) = 0;
        *((_DWORD *)this + 25) = 0;
        v13 = 0;
      }
      else
      {
        v13 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL,
          v23);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v28);
  }
  CoTaskMemFree(pv);
  return v13;
}
