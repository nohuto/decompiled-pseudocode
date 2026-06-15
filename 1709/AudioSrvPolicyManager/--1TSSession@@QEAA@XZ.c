/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x18001AF04
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180004B30 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18001ABA8 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C99C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001CBE8 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001D144 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001E340 (TS_AudioProtocolNotifyRundown.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18001E584 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180010E74 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180026B68 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TSSession::~TSSession(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rax
  size_t v7; // r8
  char *v8; // rcx
  const void *v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  size_t v12; // r8
  char *v13; // rax
  const void *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rdi
  volatile signed __int32 *v19; // rdx
  __int64 v20; // rax
  size_t v21; // r8
  char *v22; // rcx
  const void *v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  size_t v26; // r8
  char *v27; // rax
  const void *v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx

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
      v8 = (char *)*((_QWORD *)this + 19);
      v9 = v8 + 8;
      v10 = 8 * v6;
      if ( v7 )
      {
        if ( !v8 || v8 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v8, v9, v7, v10) = 22;
LABEL_29:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v10 < v7 )
        {
          *(_DWORD *)_o__errno(v8, v9, v7, v10) = 34;
          goto LABEL_29;
        }
        memmove(v8, v9, v7);
      }
      v11 = *((int *)this + 42);
      v12 = 8LL * ((int)v11 - 1);
      v13 = (char *)*((_QWORD *)this + 20);
      v14 = v13 + 8;
      v15 = 8 * v11;
      if ( v12 )
      {
        if ( !v13 || v13 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v11, v14, v12, v15) = 22;
LABEL_32:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v15 < v12 )
        {
          *(_DWORD *)_o__errno(v11, v14, v12, v15) = 34;
          goto LABEL_32;
        }
        memmove(v13, v14, v12);
      }
    }
    v16 = _o__recalloc(*((_QWORD *)this + 19), *((_DWORD *)this + 42) - 1, 8LL);
    if ( v16 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 19) = v16;
    v17 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) - 1, 8LL);
    if ( v17 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 20) = v17;
    --*((_DWORD *)this + 42);
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
    v18 = (void *)**((_QWORD **)this + 35);
    v19 = (volatile signed __int32 *)(**((_QWORD **)this + 34) - 24LL);
    if ( _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19);
    v20 = *((int *)this + 72);
    if ( (_DWORD)v20 != 1 )
    {
      v21 = 8LL * ((int)v20 - 1);
      v22 = (char *)*((_QWORD *)this + 34);
      v23 = v22 + 8;
      v24 = 8 * v20;
      if ( v21 )
      {
        if ( !v22 || v22 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v22, v23, v21, v24) = 22;
LABEL_56:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v24 < v21 )
        {
          *(_DWORD *)_o__errno(v22, v23, v21, v24) = 34;
          goto LABEL_56;
        }
        memmove(v22, v23, v21);
      }
      v25 = *((int *)this + 72);
      v26 = 8LL * ((int)v25 - 1);
      v27 = (char *)*((_QWORD *)this + 35);
      v28 = v27 + 8;
      v29 = 8 * v25;
      if ( v26 )
      {
        if ( !v27 || v27 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v25, v28, v26, v29) = 22;
LABEL_59:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v29 < v26 )
        {
          *(_DWORD *)_o__errno(v25, v28, v26, v29) = 34;
          goto LABEL_59;
        }
        memmove(v27, v28, v26);
      }
    }
    v30 = _o__recalloc(*((_QWORD *)this + 34), *((_DWORD *)this + 72) - 1, 8LL);
    if ( v30 || *((_DWORD *)this + 72) == 1 )
      *((_QWORD *)this + 34) = v30;
    v31 = _o__recalloc(*((_QWORD *)this + 35), *((_DWORD *)this + 72) - 1, 8LL);
    if ( v31 || *((_DWORD *)this + 72) == 1 )
      *((_QWORD *)this + 35) = v31;
    --*((_DWORD *)this + 72);
    operator delete(v18, (const struct std::nothrow_t *)0x10);
  }
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 272);
  v32 = *((_QWORD *)this + 33);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = *((_QWORD *)this + 32);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = *((_QWORD *)this + 31);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  v35 = *((_QWORD *)this + 30);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
