/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E600
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E3A0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001A338 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x1800213B4 (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800214E0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x18002EF0C (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSessionManager@@@Z @ 0x18002EFF4 (-Add@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@AT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18004B7E0 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IUnknown **a3)
{
  struct IUnknown **v3; // r15
  const unsigned __int16 *v4; // r12
  CAudioSessionManagerProvider *v5; // rdi
  __int64 v6; // rbx
  int v7; // r14d
  char v8; // r13
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  struct IUnknown *v12; // r9
  CVolumeStrip *v13; // rcx
  CAudioSessionManager *v14; // rax
  CAudioSessionManager *v15; // rsi
  ATL::CAtlException *v16; // rbx
  ATL::CAtlException *v17; // rbx
  CAudioSessionManager *v18; // [rsp+20h] [rbp-78h] BYREF
  CAudioSessionManager *v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v21; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v22; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v24; // [rsp+50h] [rbp-48h]
  char v28; // [rsp+B8h] [rbp+20h]

  v20 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v28 = 0;
  *a3 = 0LL;
  if ( !a2 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x126u, -2147024809);
    return 2147942487LL;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 64);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = 0;
  if ( !*((_QWORD *)v5 + 14) )
    goto LABEL_20;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= *((_QWORD *)v5 + 18) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8 * v11), v4) )
      break;
    v11 = ++v10;
    if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 14) )
      goto LABEL_20;
  }
  if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 14) )
    ATL::AtlThrowImpl(-2147024809);
  v12 = *(struct IUnknown **)(*((_QWORD *)v5 + 13) + 8LL * v10);
  *v3 = v12;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids, v12);
LABEL_20:
    v13 = WPP_GLOBAL_Control;
  }
  if ( *v3 )
    goto LABEL_51;
  if ( v13 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
    WPP_SF_(*((_QWORD *)v13 + 2), 15LL, &WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids);
  v14 = (CAudioSessionManager *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v14;
  if ( v14 )
    v15 = CAudioSessionManager::CAudioSessionManager(v14);
  else
    v15 = 0LL;
  v19 = v15;
  v18 = v15;
  if ( !v15 )
  {
    v7 = -2147024882;
    goto LABEL_54;
  }
  v7 = CAudioSessionManager::SetEndpointId(v15, v4);
  if ( v7 < 0 )
  {
LABEL_43:
    if ( v15 )
    {
      if ( v8 && *((_QWORD *)v5 + 14) )
      {
        while ( *(CAudioSessionManager **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)v5 + 104) != v15 )
        {
          if ( (unsigned __int64)++v6 >= *((_QWORD *)v5 + 14) )
            goto LABEL_50;
        }
        ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((char *)v5 + 104);
      }
LABEL_50:
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v15 + 1) + 24LL))((__int64)v15 + 8, 1LL);
    }
    goto LABEL_54;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids, v15);
  }
  try
  {
    ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::Add((char *)v5 + 104, &v18);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v16 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v18) = *(_DWORD *)v16;
    v7 = (int)v18;
    if ( (int)v18 < 0 )
    {
LABEL_42:
      v6 = 0LL;
      v5 = this;
      v8 = v28;
      v15 = v19;
      goto LABEL_43;
    }
    v5 = this;
    v3 = a3;
    v4 = a2;
    v15 = v19;
  }
  v28 = 1;
  v7 = 0;
  try
  {
    ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
      (char *)v5 + 136,
      v4);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v17 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v18) = *(_DWORD *)v17;
    v7 = (int)v18;
    if ( (int)v18 >= 0 )
    {
      v3 = a3;
      v15 = v19;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
LABEL_41:
  *v3 = (struct IUnknown *)v15;
LABEL_51:
  if ( HasTooManyReferences(*v3 + 1) )
    v7 = -2147024882;
  else
    ((void (__fastcall *)(struct IUnknown *))(*v3)->lpVtbl->AddRef)(*v3);
LABEL_54:
  LeaveCriticalSection(lpCriticalSection);
  v24 = 0;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x178u, v7);
  ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
  return (unsigned int)v7;
}
