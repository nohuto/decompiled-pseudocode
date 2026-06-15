/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x180024108
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180008990 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180023E0C (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800254E8 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025D1C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025F68 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800264C4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x1800276B0 (TS_AudioProtocolNotifyRundown.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180027900 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180016D60 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035048 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TSSession::~TSSession(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rcx
  size_t v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  size_t v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rdi
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rcx
  size_t v20; // r8
  __int64 v21; // r9
  const void *v22; // rdx
  size_t v23; // r8
  __int64 v24; // r9
  const void *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx

  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_DWORD *)this + 57) = 1;
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    WTSFreeMemory(v3);
  while ( *((int *)this + 42) > 0 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)**((_QWORD **)this + 20);
    v5 = (volatile signed __int32 *)(**((_QWORD **)this + 19) - 24LL);
    if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
    v6 = *((int *)this + 42);
    if ( (_DWORD)v6 != 1 )
    {
      v7 = 8LL * ((int)v6 - 1);
      v8 = *((_QWORD *)this + 19);
      v9 = 8 * v6;
      if ( v7 )
      {
        if ( !v8 || v8 == -8 )
        {
          *(_DWORD *)_o__errno(v6, v9) = 22;
LABEL_64:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v9 < v7 )
        {
          *(_DWORD *)_o__errno(v6, v9) = 34;
          goto LABEL_64;
        }
        memmove(*((void **)this + 19), (const void *)(v8 + 8), v7);
        v6 = *((unsigned int *)this + 42);
      }
      v10 = 8LL * ((int)v6 - 1);
      v11 = *((_QWORD *)this + 20);
      v12 = 8LL * (int)v6;
      if ( v10 )
      {
        if ( !v11 || v11 == -8 )
        {
          *(_DWORD *)_o__errno(v6, v12) = 22;
LABEL_62:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v12 < v10 )
        {
          *(_DWORD *)_o__errno(v6, v12) = 34;
          goto LABEL_62;
        }
        memmove(*((void **)this + 20), (const void *)(v11 + 8), v10);
        LODWORD(v6) = *((_DWORD *)this + 42);
      }
    }
    v13 = _o__recalloc(*((_QWORD *)this + 19), (int)v6 - 1, 8LL);
    v14 = *((_DWORD *)this + 42);
    if ( v13 || v14 == 1 )
      *((_QWORD *)this + 19) = v13;
    v15 = _o__recalloc(*((_QWORD *)this + 20), v14 - 1, 8LL);
    v16 = *((_DWORD *)this + 42);
    if ( v15 || v16 == 1 )
      *((_QWORD *)this + 20) = v15;
    *((_DWORD *)this + 42) = v16 - 1;
    if ( v4 )
    {
      `eh vector destructor iterator'(
        &v4[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      `eh vector destructor iterator'(
        &v4[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      DeleteCriticalSection(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x810);
    }
  }
  while ( *((int *)this + 72) > 0 )
  {
    v17 = (void *)**((_QWORD **)this + 35);
    v18 = (volatile signed __int32 *)(**((_QWORD **)this + 34) - 24LL);
    if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
    v19 = *((int *)this + 72);
    if ( (_DWORD)v19 != 1 )
    {
      v20 = 8LL * ((int)v19 - 1);
      v21 = *((_QWORD *)this + 34);
      v22 = (const void *)(v21 + 8);
      if ( v20 )
      {
        if ( !v21 || v21 == -8 )
        {
          *(_DWORD *)_o__errno(v19, v22) = 22;
LABEL_68:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( 8 * v19 < v20 )
        {
          *(_DWORD *)_o__errno(v19, v22) = 34;
          goto LABEL_68;
        }
        memmove(*((void **)this + 34), v22, v20);
        v19 = *((unsigned int *)this + 72);
      }
      v23 = 8LL * ((int)v19 - 1);
      v24 = *((_QWORD *)this + 35);
      v25 = (const void *)(v24 + 8);
      if ( v23 )
      {
        if ( !v24 || v24 == -8 )
        {
          *(_DWORD *)_o__errno(v19, v25) = 22;
LABEL_66:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( 8LL * (int)v19 < v23 )
        {
          *(_DWORD *)_o__errno(v19, v25) = 34;
          goto LABEL_66;
        }
        memmove(*((void **)this + 35), v25, v23);
        LODWORD(v19) = *((_DWORD *)this + 72);
      }
    }
    v26 = _o__recalloc(*((_QWORD *)this + 34), (int)v19 - 1, 8LL);
    v27 = *((_DWORD *)this + 72);
    if ( v26 || v27 == 1 )
      *((_QWORD *)this + 34) = v26;
    v28 = _o__recalloc(*((_QWORD *)this + 35), v27 - 1, 8LL);
    v29 = *((_DWORD *)this + 72);
    if ( v28 || v29 == 1 )
      *((_QWORD *)this + 35) = v28;
    *((_DWORD *)this + 72) = v29 - 1;
    operator delete(v17, (const struct std::nothrow_t *)0x10);
  }
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 272);
  v30 = *((_QWORD *)this + 33);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v31 = *((_QWORD *)this + 32);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v32 = *((_QWORD *)this + 31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = *((_QWORD *)this + 30);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
