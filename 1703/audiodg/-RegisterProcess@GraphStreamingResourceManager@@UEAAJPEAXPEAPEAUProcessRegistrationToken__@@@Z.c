/*
 * XREFs of ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400046B0
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x140004410 (-InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140013DC0 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140031674 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterProcess(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r14
  void *v4; // r15
  GraphStreamingResourceManager *v5; // rsi
  DWORD ProcessId; // ebx
  _QWORD *v7; // rcx
  DWORD v8; // eax
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v9; // r8
  GraphStreamingResourceManager *v10; // rcx
  __int64 (__fastcall *v11)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  int v12; // eax
  unsigned int v13; // ebx
  ATL::CAtlException *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v18; // [rsp+30h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  char v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  int v27; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = this;
  ProcessId = GetProcessId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = (_QWORD *)((char *)v5 + 56);
  if ( ProcessId )
    v8 = ProcessId;
  else
    v8 = 0;
  if ( *v7 )
  {
    v16 = *(_QWORD *)(*v7 + 8LL * (v8 % *((_DWORD *)v5 + 18)));
    if ( v16 )
    {
      while ( *(_DWORD *)(v16 + 40) != ProcessId || *(_DWORD *)v16 != ProcessId )
      {
        v16 = *(_QWORD *)(v16 + 32);
        if ( !v16 )
          goto LABEL_4;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      goto LABEL_8;
    }
  }
LABEL_4:
  v22 = 0LL;
  v23 = 0LL;
  v21 = 1;
  try
  {
    v16 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
            v7,
            ProcessId,
            &v21);
    v17 = v16;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v15 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v27 = *(_DWORD *)v15;
    v13 = *(_DWORD *)v15;
    v5 = this;
    v16 = v17;
    if ( v27 < 0 )
      goto LABEL_22;
    v3 = a3;
    v4 = a2;
  }
  v9 = (struct GraphStreamingResourceManager::HandleRegistrations::_t *)(v16 + 16);
  v10 = (GraphStreamingResourceManager *)((char *)v5 - 8);
  v11 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)v5 - 1) + 32LL);
  if ( v11 == GraphStreamingResourceManager::InitialRegisterForProcess )
    v12 = GraphStreamingResourceManager::InitialRegisterForProcess(v10, v4, v9);
  else
    v12 = v11(v10, v4, v9);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_8:
    *v3 = (struct ProcessRegistrationToken__ *)v16;
    v13 = 0;
    goto LABEL_9;
  }
LABEL_22:
  if ( v16 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 56,
      v16);
LABEL_9:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
