/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180023590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001701C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x1800236E4 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  signed int v5; // edi
  bool v8; // si
  int v9; // eax
  float *v10; // rbx
  volatile signed __int32 *v11; // rdx
  struct TSSession *v13; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = 1;
  v9 = TsSessionFromSessionId(a2, 1, 0LL, &v13);
  if ( v9 )
  {
    v5 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v5 = v9;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v14,
      (__int64)a3);
    v10 = (float *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                     (char *)v13 + 272,
                     &v14);
    v11 = v14 - 6;
    if ( _InterlockedExchangeAdd(v14 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
    if ( v10 )
    {
      if ( *v10 == a4 )
        v8 = 0;
      *a5 = v8;
      if ( v8 )
        *v10 = a4;
    }
    else
    {
      v5 = -2147024809;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, v5);
    }
    AudPolicyLogError("TsSessionUpdateDuckingGainForId", 2259, v5);
  }
  return (unsigned int)v5;
}
