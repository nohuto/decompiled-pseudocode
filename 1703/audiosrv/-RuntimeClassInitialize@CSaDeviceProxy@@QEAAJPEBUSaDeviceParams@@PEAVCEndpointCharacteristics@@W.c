/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180009A60
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002D0A8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x1800093F8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180012790 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sddd @ 0x1800A7BDC (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        struct SaDeviceParams **this,
        const struct SaDeviceParams *a2,
        struct CEndpointCharacteristics *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        struct SaDeviceResourceParams *a6)
{
  int v10; // esi
  struct SaDeviceParams *v11; // r8
  struct IAudioDeviceGraph *v12; // rbx
  struct SaDeviceParams *v13; // rcx
  struct SaDeviceResourceParams *v14; // rbx
  struct IAudioDeviceGraph *v15; // rax
  struct IAudioDeviceGraph *v16; // rbp
  int v17; // esi
  struct _GUID v19; // [rsp+80h] [rbp-58h] BYREF
  struct _GUID v20; // [rsp+90h] [rbp-48h] BYREF
  struct _GUID v21; // [rsp+A0h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+E0h] [rbp+8h] BYREF
  struct IAudioDeviceGraph *v23; // [rsp+F0h] [rbp+18h] BYREF

  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 2LL),
      (_DWORD)pv,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  v10 = CloneSaDeviceParams(a2, this + 6);
  if ( v10 >= 0 )
  {
    v23 = 0LL;
    v11 = this[6];
    v19 = (struct _GUID)*((_OWORD *)v11 + 5);
    v20 = (struct _GUID)*((_OWORD *)v11 + 4);
    v21 = (struct _GUID)*((_OWORD *)v11 + 3);
    v10 = CreateSaDevice(
            a3,
            a4,
            a5,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v11 + 2),
            &v21,
            &v20,
            *((_QWORD *)v11 + 4),
            *((_QWORD *)v11 + 5),
            *((const struct tWAVEFORMATEX **)v11 + 2),
            *((const struct tWAVEFORMATEX **)v11 + 3),
            &v19,
            *((_BYTE *)v11 + 96),
            &v23);
    v12 = v23;
    if ( v10 >= 0 && this[10] != v23 )
    {
      if ( v23 )
        (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v23 + 8LL))(v23);
      v13 = this[10];
      this[10] = v12;
      if ( v13 )
        (*(void (__fastcall **)(struct SaDeviceParams *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v12 )
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 72) = a4 == AUDCLNT_SHAREMODE_EXCLUSIVE;
      v14 = a6;
      this[8] = *(struct SaDeviceParams **)a6;
      this[11] = 0LL;
      this[12] = 0LL;
      v15 = (struct IAudioDeviceGraph *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      v23 = v15;
      if ( v15 )
      {
        v17 = *((_DWORD *)v14 + 2);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v15, 0, 0);
        *(_QWORD *)&v19.Data1 = (char *)v16 + 40;
        *((_QWORD *)v16 + 5) = 0LL;
        *((_QWORD *)v16 + 6) = 0LL;
        *((_QWORD *)v16 + 5) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
        *((_DWORD *)v16 + 14) = v17;
      }
      else
      {
        v16 = 0LL;
      }
      this[7] = v16;
      if ( v16 )
      {
        v10 = 0;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids, this);
        }
        goto LABEL_22;
      }
      v10 = -2147024882;
    }
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22LL,
      &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids,
      (unsigned int)v10);
  }
LABEL_22:
  CoTaskMemFree(pv);
  return (unsigned int)v10;
}
