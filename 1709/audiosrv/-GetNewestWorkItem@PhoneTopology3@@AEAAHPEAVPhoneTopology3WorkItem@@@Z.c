/*
 * XREFs of ?GetNewestWorkItem@PhoneTopology3@@AEAAHPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EBC44
 * Callers:
 *     ?GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB6D0 (-GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB860 (-GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EBA30 (-GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??4PhoneTopology3WorkItem@@QEAAAEBV0@AEBV0@@Z @ 0x1800EA914 (--4PhoneTopology3WorkItem@@QEAAAEBV0@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology3::GetNewestWorkItem(PhoneTopology3 *this, struct PhoneTopology3WorkItem *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD **)(v4 + 16);
      if ( v5[268] == *((_DWORD *)a2 + 268) && v5[3] == *((_DWORD *)a2 + 3) )
        break;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_7;
    }
    PhoneTopology3WorkItem::operator=(a2, v5);
    v6 = 1;
  }
  else
  {
LABEL_7:
    v6 = 0;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
