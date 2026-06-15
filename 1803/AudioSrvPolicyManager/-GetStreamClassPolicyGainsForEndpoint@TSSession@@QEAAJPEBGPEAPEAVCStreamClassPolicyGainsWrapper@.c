/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x1800245F0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x180023070 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180023480 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18002692C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000FF20 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010160 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001701C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180019884 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035048 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180035558 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        const unsigned __int16 *a2,
        struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  char *v7; // rsi
  int v8; // r9d
  char v9; // bp
  unsigned __int16 **v10; // r10
  unsigned __int16 *v11; // rcx
  char *v12; // r8
  unsigned __int16 v13; // dx
  int v14; // ecx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  struct _RTL_CRITICAL_SECTION **v23; // rax
  volatile signed __int32 *v24; // rdx
  void *v26[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+40h] [rbp-48h]
  char *v28; // [rsp+48h] [rbp-40h]
  _QWORD *v29; // [rsp+50h] [rbp-38h]
  volatile signed __int32 *v30; // [rsp+A8h] [rbp+20h] BYREF

  v26[1] = (void *)-2LL;
  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v26,
    (__int64)a2);
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
      if ( !v26[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v10;
      v12 = (char *)((char *)v26[0] - (char *)*v10);
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 != *(_WORD *)&v12[(_QWORD)v11] )
          break;
        ++v11;
        if ( !v13 )
        {
          v14 = 0;
          goto LABEL_9;
        }
      }
      v14 = v13 < *(_WORD *)&v12[(_QWORD)v11] ? -1 : 1;
LABEL_9:
      if ( !v14 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)this + 42) )
        goto LABEL_11;
    }
  }
  if ( v8 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)this + 42) )
    {
      ATL::_AtlRaiseException();
      JUMPOUT(0x1800248D1LL);
    }
    v15 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)this + 20) + 8LL * v8);
  }
  v16 = (char *)v26[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_36;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x810uLL);
  v15 = v18;
  if ( v18 )
  {
    v27 = v18;
    ATL::CCriticalSection::CCriticalSection(v18);
    `eh vector constructor iterator'(
      &v15[1],
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    `eh vector constructor iterator'(
      &v15[26].LockCount,
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    v15[51].OwningThread = (char *)this + 272;
  }
  else
  {
    v15 = 0LL;
  }
  v27 = v15;
  if ( v15 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v30,
      (__int64)a2);
    v28 = (char *)this + 152;
    v19 = _o__recalloc(*(_QWORD *)v7, *((_DWORD *)this + 42) + 1, 8LL);
    if ( v19 )
    {
      *(_QWORD *)v7 = v19;
      v20 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) + 1, 8LL);
      v21 = v20;
      if ( v20 )
      {
        *((_QWORD *)this + 20) = v20;
        v22 = *((int *)this + 42);
        v29 = (_QWORD *)(*(_QWORD *)v7 + 8 * v22);
        if ( v29 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v29,
            (const void **)&v30);
          v21 = *((_QWORD *)v7 + 1);
        }
        v23 = (struct _RTL_CRITICAL_SECTION **)(v21 + 8 * v22);
        if ( v23 )
          *v23 = v15;
        ++*((_DWORD *)v7 + 4);
        v9 = 0;
      }
    }
    v24 = v30 - 6;
    if ( _InterlockedExchangeAdd(v30 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 8LL))(*(_QWORD *)v24);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v15[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      `eh vector destructor iterator'(
        &v15[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      DeleteCriticalSection(v15);
      operator delete(v15, (const struct std::nothrow_t *)0x810);
      return v6;
    }
LABEL_36:
    *a3 = v15;
    return v6;
  }
  return (unsigned int)-2147024882;
}
