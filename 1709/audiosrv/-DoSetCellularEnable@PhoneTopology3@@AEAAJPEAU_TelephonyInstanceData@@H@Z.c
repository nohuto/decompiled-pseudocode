/*
 * XREFs of ?DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB030
 * Callers:
 *     ?Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC400 (-Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology3@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EC1A0 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 *     ?RemoveKey@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAA_NI@Z @ 0x1800EC5D0 (-RemoveKey@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EEC34 (-SetAt@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology3::DoSetCellularEnable(PhoneTopology3 *this, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    goto LABEL_19;
  }
  if ( !a3 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
    if ( (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                            (char *)this + 200,
                            *((unsigned int *)a2 + 1),
                            &v14) )
    {
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveKey(
        (char *)this + 200,
        *((unsigned int *)a2 + 1));
      v10 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *))(*(_QWORD *)v14 + 64LL))(v14, a2);
      if ( v10 < 0 )
        v5 = v10;
    }
LABEL_17:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_19;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
  v7 = (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                          (char *)this + 200,
                          *((unsigned int *)a2 + 1),
                          &v14);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _TelephonyInstanceData *, __int64 *))(**((_QWORD **)this + 5) + 24LL))(
           *((_QWORD *)this + 5),
           a2,
           &v14);
    if ( v8 < 0 )
    {
      v5 = v8;
      goto LABEL_19;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      v6);
    v9 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *))(*(_QWORD *)v14 + 72LL))(v14, a2);
    if ( v9 < 0
      || (ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
            (char *)this + 200,
            *((unsigned int *)a2 + 1),
            &v14),
          v9 = (*(__int64 (__fastcall **)(PhoneTopology3 *))(*(_QWORD *)this + 32LL))(this),
          v9 < 0) )
    {
      v5 = v9;
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v5;
}
