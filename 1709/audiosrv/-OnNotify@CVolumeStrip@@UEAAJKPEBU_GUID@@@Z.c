/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18006D150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x180068100 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18006CA98 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18006CC1C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF__guid_ @ 0x18006E318 (WPP_SF__guid_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  char *v9; // rdi
  unsigned int v10; // esi
  char *v11; // rax
  char *v12; // rbx
  GUID *v13; // rax
  int *v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  float *v17; // r14
  int v18; // edx
  CAudioDGProcess *v19; // rcx
  int v21[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v22; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
      (char *)this - 8);
  }
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(*((_QWORD *)this + 28) + 2 * v5) );
  v6 = 2 * v5 + 2;
  v7 = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
  v8 = v6 + v7 + 56;
  v9 = (char *)operator new[](v7 + 28, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  v11 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    memset(v11, 0, v8);
    *(_DWORD *)v12 = v8;
    v13 = &GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v12 + 1) = 128;
    if ( a3 )
      v13 = a3;
    v14 = (int *)(v12 + 40);
    *(GUID *)(v12 + 24) = *v13;
    *((_DWORD *)v12 + 13) = v6;
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 72LL))(
            *((_QWORD *)this + 31),
            v12 + 40);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v17 = (float *)(v12 + 44);
      v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              v12 + 44);
      v10 = v15;
      if ( v15 >= 0 )
      {
        v18 = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
        *((_DWORD *)v12 + 12) = v18;
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v18, (float *)&v12[v6 + 56]);
        v15 = StringCbCopyW((unsigned __int16 *)v12 + 28, v6, *((const unsigned __int16 **)this + 28));
        v10 = v15;
        if ( v15 >= 0 )
        {
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
          {
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                17LL,
                &WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
                (char *)this - 8);
              v19 = WPP_GLOBAL_Control;
            }
            if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control )
            {
              if ( (*((_DWORD *)v19 + 7) & 0x10000) != 0 && *((_BYTE *)v19 + 25) >= 4u )
              {
                WPP_SF__guid_(*((_QWORD *)v19 + 2), 18LL, &WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids, v12 + 24);
                v19 = WPP_GLOBAL_Control;
              }
              if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v19 + 7) & 0x10000) != 0 && *((_BYTE *)v19 + 25) >= 4u )
                {
                  WPP_SF_S(
                    *((_QWORD *)v19 + 2),
                    0x13u,
                    (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
                    (const wchar_t *)v12 + 28);
                  v19 = WPP_GLOBAL_Control;
                }
                if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control )
                {
                  if ( (*((_DWORD *)v19 + 7) & 0x10000) != 0 && *((_BYTE *)v19 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v19 + 2),
                      0x14u,
                      (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
                      *v14);
                    v19 = WPP_GLOBAL_Control;
                  }
                  if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)v19 + 7) & 0x10000) != 0
                    && *((_BYTE *)v19 + 25) >= 4u )
                  {
                    WPP_SF_g(
                      *((_QWORD *)v19 + 2),
                      0x15u,
                      (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
                      *v17);
                  }
                }
              }
            }
          }
          v22 = v12;
          *(_QWORD *)v21 = &CMasterVolumeNotification::`vftable';
          v15 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                  (LPCRITICAL_SECTION)((char *)this + 16),
                  (void (__fastcall ***)(_QWORD, _QWORD))v21);
          v10 = v15;
          if ( v15 >= 0 )
          {
            *(_OWORD *)v9 = *(_OWORD *)(v12 + 24);
            *((_DWORD *)v9 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
            *((_DWORD *)v9 + 4) = *v14;
            *((float *)v9 + 5) = *v17;
            memcpy_0(v9 + 28, &v12[v6 + 56], v7);
            v22 = v9;
            *(_QWORD *)v21 = &CInternalVolumeNotification::`vftable';
            v15 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)this + 3,
                    (void (__fastcall ***)(_QWORD, __int64 *))v21);
            v10 = v15;
            if ( v15 >= 0 )
            {
              v10 = 0;
              goto LABEL_45;
            }
            v16 = 514LL;
          }
          else
          {
            v16 = 506LL;
          }
        }
        else
        {
          v16 = 499LL;
        }
      }
      else
      {
        v16 = 493LL;
      }
    }
    else
    {
      v16 = 492LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v15);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_45:
  if ( v12 )
    operator delete(v12, (const struct std::nothrow_t *)0x40);
  operator delete(v9, (const struct std::nothrow_t *)0x20);
  return v10;
}
