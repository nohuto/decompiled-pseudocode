/*
 * XREFs of ?DoSetCellularRxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB28C
 * Callers:
 *     ?Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC420 (-Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology3@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EC1A0 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology3::DoSetCellularRxMute(
        PhoneTopology3 *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r12
  int v9; // eax
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0;
  v7 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
    if ( (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                            (char *)this + 200,
                            *((unsigned int *)a2 + 1),
                            &v14) )
    {
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      v7 = v14;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, a3);
      if ( v9 >= 0 )
      {
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          v8);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, a3);
        if ( v10 < 0 )
          v6 = v10;
        if ( v13 )
          LeaveCriticalSection(lpCriticalSection);
      }
      else
      {
        v6 = v9;
      }
    }
    else
    {
      v6 = -2147024809;
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      v7 = v14;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
