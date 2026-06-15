/*
 * XREFs of ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800B26B0
 * Callers:
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800B2D60 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::DoHandlePropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]

  v11 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) == 1 )
  {
    for ( i = 0LL; i < 0x50; i += 16LL )
    {
      v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
      v8 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
      {
        v8 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
        if ( !v8 )
          v8 = a3->pid - (unsigned __int64)*(unsigned int *)(v7 + 16);
      }
      if ( !v8 )
        (*(void (__fastcall **)(CMonitorManager *, const unsigned __int16 *, struct _tagpropertykey *))((char *)&CMonitorManager::_PropertyLookupTable + i + 8))(
          this,
          a2,
          a3);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
