/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013B50
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013A20 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180015900 (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x180015A2C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001E264 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x1800310FC (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180035588 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007C280 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IUnknown **a3)
{
  struct IUnknown **v3; // r15
  const unsigned __int16 *v4; // r12
  CAudioSessionManagerProvider *v5; // r14
  int v6; // edi
  CAudioSessionManager *v7; // rsi
  unsigned __int64 v9; // r13
  struct IUnknown *v10; // r9
  CAudioDGProcess *v11; // rcx
  CAudioSessionManager *v12; // rax
  __int64 v13; // rdx
  int *v14; // rbx
  int *v15; // rbx
  unsigned int v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v18; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v19; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  char v21; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+B8h] [rbp+20h]

  v17[1] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v25 = 0;
  v7 = 0LL;
  *a3 = 0LL;
  if ( !a2 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x13Bu, -2147024809);
    return 2147942487LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 64);
  v21 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v16 = 0;
  if ( !*((_QWORD *)v5 + 14) )
    goto LABEL_20;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= *((_QWORD *)v5 + 18) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8 * v9), v4) )
      break;
    v9 = ++v16;
    if ( (unsigned __int64)v16 >= *((_QWORD *)v5 + 14) )
      goto LABEL_20;
  }
  if ( v9 >= *((_QWORD *)v5 + 14) )
    ATL::AtlThrowImpl(-2147024809);
  v10 = *(struct IUnknown **)(*((_QWORD *)v5 + 13) + 8 * v9);
  *v3 = v10;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids, v10);
LABEL_20:
    v11 = WPP_GLOBAL_Control;
  }
  if ( *v3 )
    goto LABEL_42;
  if ( v11 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
    WPP_SF_(*((_QWORD *)v11 + 2), 15LL, &WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids);
  v12 = (CAudioSessionManager *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17[0] = v12;
  if ( v12 )
    v7 = CAudioSessionManager::CAudioSessionManager(v12);
  else
    v7 = 0LL;
  v17[0] = v7;
  if ( !v7 )
    goto LABEL_43;
  v6 = CAudioSessionManager::SetEndpointId(v7, v4);
  if ( v6 < 0 )
    goto LABEL_44;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids, v7);
  }
  try
  {
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)v5 + 104, v17);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v14 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v14;
    if ( *v14 < 0 )
      goto LABEL_41;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v25 = 1;
  v6 = 0;
  try
  {
    ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
      (char *)v5 + 136,
      v4);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = (int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v15;
    if ( *v15 >= 0 )
    {
      v5 = this;
      v3 = a3;
      goto LABEL_40;
    }
LABEL_41:
    v5 = this;
    v7 = (CAudioSessionManager *)v17[0];
    goto LABEL_44;
  }
LABEL_40:
  *v3 = (struct IUnknown *)v7;
  v7 = 0LL;
LABEL_42:
  if ( HasTooManyReferences(*v3 + 1) )
  {
LABEL_43:
    v6 = -2147024882;
LABEL_44:
    if ( v7 )
    {
      if ( v25 )
      {
        v13 = 0LL;
        if ( *((_QWORD *)v5 + 14) )
        {
          while ( *(CAudioSessionManager **)(*((_QWORD *)v5 + 13) + 8 * v13) != v7 )
          {
            if ( (unsigned __int64)++v13 >= *((_QWORD *)v5 + 14) )
              goto LABEL_51;
          }
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt();
        }
      }
LABEL_51:
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 1) + 24LL))((__int64)v7 + 8, 1LL);
    }
    goto LABEL_53;
  }
  ((void (__fastcall *)(struct IUnknown *))(*v3)->lpVtbl->AddRef)(*v3);
LABEL_53:
  LeaveCriticalSection(lpCriticalSection);
  v21 = 0;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x18Bu, v6);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  return (unsigned int)v6;
}
