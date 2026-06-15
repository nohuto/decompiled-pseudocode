/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800A5F30
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800A1E28 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     WPP_SF_g @ 0x1800A5030 (WPP_SF_g.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A5AA8 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A5C2C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF__guid_ @ 0x1800A6728 (WPP_SF__guid_.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
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
  __int64 v13; // rdx
  __int64 v14; // r9
  GUID *v15; // rax
  _DWORD *v16; // r12
  int v17; // eax
  float *v18; // r14
  int v19; // edx
  CAudioSessionManager *v20; // rcx
  int v22[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v23; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
      (char *)this - 8);
  }
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(*((_QWORD *)this + 28) + 2 * v5) );
  v6 = 2 * v5 + 2;
  v7 = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
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
    memset_0(v11, 0, v8);
    *(_DWORD *)v12 = v8;
    v15 = &GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v12 + 1) = 128;
    if ( a3 )
      v15 = a3;
    v16 = v12 + 40;
    *(GUID *)(v12 + 24) = *v15;
    *((_DWORD *)v12 + 13) = v6;
    v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 72LL))(
            *((_QWORD *)this + 31),
            v12 + 40);
    v10 = v17;
    if ( v17 >= 0 )
    {
      v18 = (float *)(v12 + 44);
      v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              v12 + 44);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v19 = *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
        *((_DWORD *)v12 + 12) = v19;
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v19, (float *)&v12[v6 + 56]);
        v17 = StringCbCopyW(v12 + 56, v6, *((char **)this + 28));
        v10 = v17;
        if ( v17 >= 0 )
        {
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
          {
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                17LL,
                &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
                (char *)this - 8);
              v20 = WPP_GLOBAL_Control;
            }
            if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
            {
              if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
              {
                WPP_SF__guid_(*((_QWORD *)v20 + 2), 18LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids, v12 + 24);
                v20 = WPP_GLOBAL_Control;
              }
              if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                {
                  WPP_SF_S(
                    *((_QWORD *)v20 + 2),
                    0x13u,
                    (__int64)&WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
                    (const wchar_t *)v12 + 28);
                  v20 = WPP_GLOBAL_Control;
                }
                if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                {
                  if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v20 + 2),
                      20LL,
                      &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
                      (unsigned int)*v16);
                    v20 = WPP_GLOBAL_Control;
                  }
                  if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)v20 + 7) & 0x10000) != 0
                    && *((_BYTE *)v20 + 25) >= 4u )
                  {
                    WPP_SF_g(
                      *((_QWORD *)v20 + 2),
                      0x15u,
                      (__int64)&WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
                      *v18);
                  }
                }
              }
            }
          }
          v23 = v12;
          *(_QWORD *)v22 = &CMasterVolumeNotification::`vftable';
          v17 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                  (LPCRITICAL_SECTION)((char *)this + 16),
                  (void (__fastcall ***)(_QWORD, _QWORD))v22);
          v10 = v17;
          if ( v17 >= 0 )
          {
            *(_OWORD *)v9 = *(_OWORD *)(v12 + 24);
            *((_DWORD *)v9 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
            *((_DWORD *)v9 + 4) = *v16;
            *((float *)v9 + 5) = *v18;
            memcpy_0(v9 + 28, &v12[v6 + 56], v7);
            v23 = v9;
            *(_QWORD *)v22 = &CInternalVolumeNotification::`vftable';
            v17 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)this + 3,
                    (void (__fastcall ***)(_QWORD, __int64 *))v22);
            v10 = v17;
            if ( v17 >= 0 )
            {
              v10 = 0;
              goto LABEL_46;
            }
            v13 = 514LL;
          }
          else
          {
            v13 = 506LL;
          }
        }
        else
        {
          v13 = 499LL;
        }
      }
      else
      {
        v13 = 493LL;
      }
    }
    else
    {
      v13 = 492LL;
    }
    v14 = (unsigned int)v17;
  }
  else
  {
    v10 = -2147024882;
    v13 = 483LL;
    v14 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)v14);
LABEL_46:
  if ( v12 )
    operator delete(v12, (const struct std::nothrow_t *)0x40);
  operator delete(v9, (const struct std::nothrow_t *)0x20);
  return v10;
}
