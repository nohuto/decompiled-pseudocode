/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018BB0
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018A60 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x18001805C (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x1800180BC (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002FDF0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18003284C (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800329A0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18006346C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180098038 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  struct CAudioSessionManager **v3; // r12
  const unsigned __int16 *v4; // r13
  CAudioSessionManagerProvider *v5; // r14
  int v6; // esi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rdi
  CAudioSessionManager *v10; // rcx
  struct IUnknown *v11; // rdi
  CAudioSessionManager *v12; // rax
  struct CAudioSessionManager *v13; // r9
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  int *v17; // rbx
  int *v18; // rbx
  ATL::CAtlException *v19; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v20; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v22; // [rsp+50h] [rbp-48h]
  char v26; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v26 = 0;
  *a3 = 0LL;
  if ( !a2 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x146u, -2147024809);
    return 2147942487LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 64);
  v22 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0;
  if ( !*((_QWORD *)v5 + 14) )
    goto LABEL_12;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= *((_QWORD *)v5 + 18) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8 * v9), v4) )
      break;
    v9 = ++v8;
    if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 14) )
      goto LABEL_12;
  }
  if ( v9 >= *((_QWORD *)v5 + 14) )
    ATL::AtlThrowImpl(-2147024809);
  v13 = *(struct CAudioSessionManager **)(*((_QWORD *)v5 + 13) + 8 * v9);
  *v3 = v13;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids, v13);
LABEL_12:
    v10 = WPP_GLOBAL_Control;
  }
  v11 = (struct IUnknown *)*v3;
  if ( *v3 )
    goto LABEL_42;
  if ( v10 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)v10 + 28) & 0x40) != 0
    && *((_BYTE *)v10 + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)v10 + 2), 15LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids);
  }
  v12 = (CAudioSessionManager *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = (struct IUnknown *)CAudioSessionManager::CAudioSessionManager(v12);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v6 = -2147024882;
    goto LABEL_53;
  }
  v6 = CAudioSessionManager::SetEndpointId((CAudioSessionManager *)v11, v4);
  if ( v6 < 0 )
  {
LABEL_51:
    ((void (__fastcall *)(struct IUnknown *, __int64))v11[1].lpVtbl[1].QueryInterface)(&v11[1], 1LL);
    goto LABEL_53;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids, v11);
  }
  try
  {
    v14 = *((_QWORD *)v5 + 14);
    if ( v14 >= *((_QWORD *)v5 + 15)
      && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
            (__int64)v5 + 104,
            v14 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *(_QWORD *)(*((_QWORD *)v5 + 13) + 8 * v14) = v11;
    ++*((_QWORD *)v5 + 14);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v17 = (int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v17;
    if ( *v17 < 0 )
    {
LABEL_44:
      if ( v26 )
      {
        v15 = 0LL;
        if ( *((_QWORD *)this + 14) )
        {
          v16 = *((_QWORD *)this + 14);
          if ( !v16 )
            ATL::AtlThrowImpl(-2147024809);
          while ( *(struct IUnknown **)(*((_QWORD *)this + 13) + 8 * v15) != v11 )
          {
            if ( ++v15 >= v16 )
              goto LABEL_51;
          }
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
            (char *)this + 104,
            v15);
        }
      }
      goto LABEL_51;
    }
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v26 = 1;
  v6 = 0;
  try
  {
    ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
      (_QWORD *)v5 + 17,
      (__int64)v4);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v18 = (int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v18;
    if ( *v18 >= 0 )
    {
      v3 = a3;
      goto LABEL_41;
    }
    goto LABEL_44;
  }
LABEL_41:
  *v3 = (struct CAudioSessionManager *)v11;
LABEL_42:
  if ( HasTooManyReferences(v11 + 1) )
    v6 = -2147024882;
  else
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)*v3 + 8LL))(*v3);
LABEL_53:
  LeaveCriticalSection(lpCriticalSection);
  v22 = 0;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x196u, v6);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  return (unsigned int)v6;
}
