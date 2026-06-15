/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180047DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18007A0C8 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18007BB10 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18007BC98 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF__guid_ @ 0x1800888A8 (WPP_SF__guid_.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  _DWORD *v8; // rsi
  char *v9; // rax
  char *v10; // r14
  GUID *v11; // rax
  int *v12; // r12
  GUID v13; // xmm0
  int v14; // ebx
  unsigned int v15; // edx
  CVolumeStrip *v16; // rcx

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, this);
  }
  v5 = 2 * lstrlenW(*((LPCWSTR *)this + 28)) + 2;
  v6 = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
  v7 = v5 + v6 + 56;
  v8 = operator new[](v6 + 28, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (char *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 && v8 )
  {
    memset(v9, 0, v7);
    *(_DWORD *)v10 = v7;
    v11 = &GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v10 + 1) = 128;
    v12 = (int *)(v10 + 40);
    if ( a3 )
      v11 = a3;
    v13 = *v11;
    *((_DWORD *)v10 + 13) = v5;
    *(GUID *)(v10 + 24) = v13;
    v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 72LL))(
            *((_QWORD *)this + 31),
            v10 + 40);
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              v10 + 44);
      if ( v14 >= 0 )
      {
        v15 = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
        *((_DWORD *)v10 + 12) = v15;
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v15, (float *)&v10[v5 + 56]);
        v14 = StringCbCopyW((unsigned __int16 *)v10 + 28, v5, *((const unsigned __int16 **)this + 28));
        if ( v14 >= 0 )
        {
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
          {
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                21LL,
                &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
                this);
              v16 = WPP_GLOBAL_Control;
            }
            if ( v16 != (CVolumeStrip *)&WPP_GLOBAL_Control )
            {
              if ( (*((_DWORD *)v16 + 7) & 0x10000) != 0 && *((_BYTE *)v16 + 25) >= 4u )
              {
                WPP_SF__guid_(*((_QWORD *)v16 + 2), 22LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, v10 + 24);
                v16 = WPP_GLOBAL_Control;
              }
              if ( v16 != (CVolumeStrip *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v16 + 7) & 0x10000) != 0 && *((_BYTE *)v16 + 25) >= 4u )
                {
                  WPP_SF_S(*((_QWORD *)v16 + 2), 23LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, v10 + 56);
                  v16 = WPP_GLOBAL_Control;
                }
                if ( v16 != (CVolumeStrip *)&WPP_GLOBAL_Control )
                {
                  if ( (*((_DWORD *)v16 + 7) & 0x10000) != 0 && *((_BYTE *)v16 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v16 + 2),
                      0x18u,
                      (__int64)&WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
                      *v12);
                    v16 = WPP_GLOBAL_Control;
                  }
                  if ( v16 != (CVolumeStrip *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)v16 + 7) & 0x10000) != 0
                    && *((_BYTE *)v16 + 25) >= 4u )
                  {
                    WPP_SF_g(*((_QWORD *)v16 + 2), 25LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids);
                  }
                }
              }
            }
          }
          v14 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 8));
          if ( v14 >= 0 )
          {
            *(_OWORD *)v8 = *(_OWORD *)(v10 + 24);
            v8[6] = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
            v8[4] = *v12;
            v8[5] = *((_DWORD *)v10 + 11);
            memcpy_0(v8 + 7, &v10[v5 + 56], v6);
            v14 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 112));
          }
        }
      }
    }
  }
  else
  {
    v14 = -2147024882;
  }
  operator delete(v10);
  operator delete(v8);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::OnNotify", 0x269u, v14);
  return (unsigned int)v14;
}
