/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001B3AC
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019970 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180019DC0 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001D5AC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000B168 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000B37C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180010F00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001189C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180026B68 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180027078 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        char *a2,
        struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  char *v7; // rsi
  int v8; // r9d
  char v9; // bp
  unsigned __int16 **v10; // r8
  unsigned __int16 *v11; // rcx
  int v12; // r10d
  int v13; // edx
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  _QWORD *v15; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  struct _RTL_CRITICAL_SECTION **v21; // rcx
  volatile signed __int32 *v22; // rdx
  _QWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-48h]
  char *v26; // [rsp+48h] [rbp-40h]
  _QWORD *v27; // [rsp+50h] [rbp-38h]
  volatile signed __int32 *v28; // [rsp+A8h] [rbp+20h] BYREF

  v24[1] = -2LL;
  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v24,
    a2);
  v7 = (char *)this + 152;
  v8 = 0;
  v9 = 1;
  if ( *((int *)this + 42) <= 0 )
  {
LABEL_11:
    v8 = -1;
  }
  else
  {
    v10 = *(unsigned __int16 ***)v7;
    while ( 1 )
    {
      if ( !v24[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v10;
      do
      {
        v12 = *(unsigned __int16 *)((char *)v11 + v24[0] - (_QWORD)*v10);
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)this + 42) )
        goto LABEL_11;
    }
  }
  if ( v8 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)this + 42) )
    {
      ATL::_AtlRaiseException();
      __debugbreak();
    }
    v14 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)this + 20) + 8LL * v8);
  }
  v15 = (_QWORD *)(v24[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
  if ( v14 )
    goto LABEL_36;
  ProcessHeap = GetProcessHeap();
  v17 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x810uLL);
  v14 = v17;
  if ( v17 )
  {
    v25 = v17;
    ATL::CCriticalSection::CCriticalSection(v17);
    `eh vector constructor iterator'(
      &v14[1],
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    `eh vector constructor iterator'(
      &v14[26].LockCount,
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    v14[51].OwningThread = (char *)this + 272;
  }
  else
  {
    v14 = 0LL;
  }
  v25 = v14;
  if ( v14 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v28,
      a2);
    v26 = (char *)this + 152;
    v18 = _o__recalloc(*(_QWORD *)v7, *((_DWORD *)this + 42) + 1, 8LL);
    if ( v18 )
    {
      *(_QWORD *)v7 = v18;
      v19 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) + 1, 8LL);
      if ( v19 )
      {
        *((_QWORD *)this + 20) = v19;
        v20 = *((int *)this + 42);
        v27 = (_QWORD *)(*(_QWORD *)v7 + 8 * v20);
        if ( v27 )
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v27,
            (const void **)&v28);
        v21 = (struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)v7 + 1) + 8 * v20);
        if ( v21 )
          *v21 = v14;
        ++*((_DWORD *)v7 + 4);
        v9 = 0;
      }
    }
    v22 = v28 - 6;
    if ( _InterlockedExchangeAdd(v28 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 8LL))(*(_QWORD *)v22);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v14[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      `eh vector destructor iterator'(
        &v14[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      DeleteCriticalSection(v14);
      operator delete(v14, (const struct std::nothrow_t *)0x810);
      return v6;
    }
LABEL_36:
    *a3 = v14;
    return v6;
  }
  return (unsigned int)-2147024882;
}
