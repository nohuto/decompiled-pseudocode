/*
 * XREFs of ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140003030
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x140002DB0 (-InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14000543C (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005470 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140005530 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterProcess(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r14
  void *v4; // rdi
  GraphStreamingResourceManager *v5; // rsi
  DWORD ProcessId; // r12d
  __int64 Node; // rax
  __int64 v8; // rbx
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v9; // r8
  GraphStreamingResourceManager *v10; // rcx
  __int64 (__fastcall *v11)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  int v12; // eax
  unsigned int v13; // edi
  ATL::CAtlException *v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v18; // [rsp+40h] [rbp-88h]
  char v19; // [rsp+48h] [rbp-80h] BYREF
  char *v20; // [rsp+50h] [rbp-78h]
  int v21; // [rsp+58h] [rbp-70h] BYREF
  __int64 v22; // [rsp+60h] [rbp-68h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  __int64 v24; // [rsp+70h] [rbp-58h]
  _BYTE v25[8]; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v26; // [rsp+80h] [rbp-48h] BYREF
  int v30; // [rsp+E8h] [rbp+20h] BYREF

  v24 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  ProcessId = GetProcessId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v20 = (char *)v5 + 56;
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (int)v5 + 56,
           ProcessId,
           (unsigned int)&v19,
           (unsigned int)&v30,
           (__int64)v25);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_6:
    *v3 = (struct ProcessRegistrationToken__ *)v8;
    v8 = 0LL;
    v13 = 0;
    goto LABEL_7;
  }
  v22 = 0LL;
  v23 = 0LL;
  v21 = 1;
  try
  {
    v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
           (char *)v5 + 56,
           ProcessId,
           &v21);
    v16 = v8;
  }
  catch ( ATL::CAtlException *v26 )
  {
    v15 = v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _o__resetstkoflw();
    v30 = *(_DWORD *)v15;
    v13 = v30;
    v8 = v16;
    if ( v30 < 0 )
      goto LABEL_7;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v9 = (struct GraphStreamingResourceManager::HandleRegistrations::_t *)(v8 + 16);
  v10 = (GraphStreamingResourceManager *)((char *)v5 - 8);
  v11 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)v5 - 1) + 32LL);
  if ( v11 == GraphStreamingResourceManager::InitialRegisterForProcess )
    v12 = GraphStreamingResourceManager::InitialRegisterForProcess(v10, v4, v9);
  else
    v12 = v11(v10, v4, v9);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      v20,
      v8);
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
