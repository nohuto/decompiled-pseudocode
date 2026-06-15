/*
 * XREFs of ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1801185A0
 * Callers:
 *     ?Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180119660 (-Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801195C0 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 *     ?RemoveKey@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAA_NI@Z @ 0x180119790 (-RemoveKey@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801199B0 (-SetAt@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::DoSetCellularEnable(PhoneTopology *this, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // r15
  char *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rdx
  int v9; // r12d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v16 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    goto LABEL_19;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v7 = (char *)this + 192;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  if ( !a3 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      v8);
    if ( (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                            v7,
                            *((unsigned int *)a2 + 1),
                            &v16) )
    {
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveKey(
        v7,
        *((unsigned int *)a2 + 1));
      v12 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *))(*(_QWORD *)v16 + 64LL))(v16, a2);
      if ( v12 < 0 )
        v5 = v12;
    }
LABEL_17:
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_19;
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    v8);
  v9 = (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                          v7,
                          *((unsigned int *)a2 + 1),
                          &v16);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v9 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct _TelephonyInstanceData *, __int64 *))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            a2,
            &v16);
    if ( v10 < 0 )
    {
      v5 = v10;
      goto LABEL_19;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      v6);
    v11 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *))(*(_QWORD *)v16 + 72LL))(v16, a2);
    if ( v11 < 0
      || (ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
            v7,
            *((unsigned int *)a2 + 1),
            &v16),
          v11 = (*(__int64 (__fastcall **)(PhoneTopology *))(*(_QWORD *)this + 32LL))(this),
          v11 < 0) )
    {
      v5 = v11;
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v5;
}
