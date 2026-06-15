/*
 * XREFs of ?GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801192B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801195C0 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::GetCellularTxMuteSync(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        int *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  char v8; // al
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 144));
  v6 = 0LL;
  v14 = 0LL;
  v13 = 0;
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
    goto LABEL_11;
  }
  if ( *(int *)a2 >= 3 )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(PhoneTopology *, struct _TelephonyInstanceData *, int *))(*(_QWORD *)this + 96LL))(
         this,
         a2,
         &v13);
  if ( v7 >= 0 )
  {
    if ( !v13
      || (v8 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                 (char *)this + 192,
                 *((unsigned int *)a2 + 1),
                 &v14),
          v6 = v14,
          !v8) )
    {
LABEL_5:
      v7 = -2147024809;
      goto LABEL_11;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 56LL))(v14, a3);
    v7 = 0;
    if ( v9 < 0 )
      v7 = v9;
  }
LABEL_11:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
