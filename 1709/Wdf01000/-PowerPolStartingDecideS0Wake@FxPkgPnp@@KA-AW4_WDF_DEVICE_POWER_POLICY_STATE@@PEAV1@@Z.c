/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002D340
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C002991C (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx
  FxEnumerationInfo *v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v8; // rax
  _LIST_ENTRY *Blink; // rdi
  unsigned __int64 *p_Blink; // rbp
  _LIST_ENTRY *v11; // r14
  KIRQL v12; // r15
  _LIST_ENTRY *i; // rdi
  _FX_DRIVER_GLOBALS *v14; // rbp
  FxWaitLockTransactionedList *p_m_ChildListList; // rbx
  _KEVENT *p_m_Event; // r14
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  __int64 *v19; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v21; // rcx
  __int64 result; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  _LIST_ENTRY *v25; // r15
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY **p_Flink; // r15
  int v28; // eax
  _LIST_ENTRY *v29; // rcx
  _LIST_ENTRY *v30; // rax
  _LIST_ENTRY *v31; // rcx
  __int64 ***v32; // rax
  _LIST_ENTRY *v33; // rcx
  __int64 *v34; // rcx
  __int64 *v35; // rdi
  __int64 *v36; // [rsp+30h] [rbp-38h] BYREF
  _LIST_ENTRY *v37; // [rsp+38h] [rbp-30h]
  unsigned __int8 v38; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v39; // [rsp+78h] [rbp+10h] BYREF

  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo && This->m_PowerPolicyMachine.m_Owner )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    This->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
    v3 = This->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    v4 = This->m_EnumInfo;
    if ( v4 )
    {
      m_Globals = This->m_Globals;
      v4->m_ChildListList.AcquireLock(&v4->m_ChildListList, m_Globals, &v38);
      v6 = v4->m_ChildListList.__vftable;
      ++v4->m_ChildListList.m_ListLockedRecursionCount;
      v6->ReleaseLock(&v4->m_ChildListList, m_Globals, v38);
      p_m_ListHead = 0LL;
      while ( 1 )
      {
        v8 = This->m_EnumInfo;
        if ( !p_m_ListHead )
          p_m_ListHead = &v8->m_ChildListList.m_ListHead;
        p_m_ListHead = p_m_ListHead->Flink;
        if ( p_m_ListHead == &v8->m_ChildListList.m_ListHead )
        {
LABEL_14:
          p_m_ListHead = 0LL;
        }
        else
        {
          while ( LODWORD(p_m_ListHead[2].Flink) != 1 )
          {
            p_m_ListHead = p_m_ListHead->Flink;
            if ( p_m_ListHead == &v8->m_ChildListList.m_ListHead )
              goto LABEL_14;
          }
        }
        if ( !p_m_ListHead )
          break;
        Blink = p_m_ListHead[2].Blink;
        p_Blink = (unsigned __int64 *)&Blink[16].Blink;
        v11 = Blink + 17;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[16].Blink);
        for ( i = Blink[17].Flink; i != v11; i = i->Flink )
        {
          if ( !BYTE2(i[5].Flink) )
          {
            Flink = i[4].Flink;
            if ( Flink )
              FxPkgPnp::PowerProcessEvent((FxPkgPnp *)Flink[40].Blink, 0x100u, 0);
          }
        }
        KeReleaseSpinLock(p_Blink, v12);
      }
      v14 = This->m_Globals;
      p_m_ChildListList = &v8->m_ChildListList;
      v37 = (_LIST_ENTRY *)&v36;
      v36 = (__int64 *)&v36;
      p_m_Event = 0LL;
      v8->m_ChildListList.AcquireLock(&v8->m_ChildListList, v14, &v39);
      if ( p_m_ChildListList->m_ListLockedRecursionCount-- == 1 )
      {
        p_m_TransactionHead = &p_m_ChildListList->m_TransactionHead;
        while ( p_m_TransactionHead->Flink != p_m_TransactionHead )
        {
          v25 = p_m_TransactionHead->Flink;
          if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || (v26 = v25->Flink, v25->Flink->Blink != v25) )
            __fastfail(3u);
          p_m_TransactionHead->Flink = v26;
          v26->Blink = p_m_TransactionHead;
          v25->Blink = v25;
          v25->Flink = v25;
          p_Flink = &v25[-1].Flink;
          v28 = *((_DWORD *)p_Flink + 8);
          if ( v28 == 2 )
          {
            v29 = p_m_ChildListList->m_ListHead.Blink;
            if ( v29->Flink != &p_m_ChildListList->m_ListHead )
              __fastfail(3u);
            *p_Flink = &p_m_ChildListList->m_ListHead;
            p_Flink[1] = v29;
            v29->Flink = (_LIST_ENTRY *)p_Flink;
            p_m_ChildListList->m_ListHead.Blink = (_LIST_ENTRY *)p_Flink;
            p_m_ChildListList->EntryAdded(p_m_ChildListList, (FxTransactionedEntry *)p_Flink);
          }
          else if ( v28 == 3 )
          {
            v30 = *p_Flink;
            if ( (_LIST_ENTRY **)(*p_Flink)->Blink != p_Flink
              || (v31 = p_Flink[1], (_LIST_ENTRY **)v31->Flink != p_Flink) )
            {
              __fastfail(3u);
            }
            v31->Flink = v30;
            v30->Blink = v31;
            v32 = (__int64 ***)(p_Flink + 2);
            v33 = v37;
            if ( (__int64 **)v37->Flink != &v36 )
              __fastfail(3u);
            p_Flink[3] = v37;
            *v32 = &v36;
            v33->Flink = (_LIST_ENTRY *)v32;
            v37 = (_LIST_ENTRY *)(p_Flink + 2);
            p_m_ChildListList->EntryRemoved(p_m_ChildListList, (FxTransactionedEntry *)p_Flink);
          }
          *((_DWORD *)p_Flink + 8) = 1;
        }
      }
      if ( !p_m_ChildListList->m_ListLockedRecursionCount && p_m_ChildListList->m_Deleting )
      {
        p_m_Event = &p_m_ChildListList->m_DeletingDoneEvent->m_Event;
        p_m_ChildListList->m_DeletingDoneEvent = 0LL;
      }
      p_m_ChildListList->ReleaseLock(p_m_ChildListList, v14, v39);
      while ( 1 )
      {
        v19 = v36;
        if ( v36 == (__int64 *)&v36 )
          break;
        if ( (__int64 **)v36[1] != &v36 || (v34 = (__int64 *)*v36, *(__int64 **)(*v36 + 8) != v36) )
          __fastfail(3u);
        v36 = (__int64 *)*v36;
        v35 = v19 - 2;
        v34[1] = (__int64)&v36;
        v19[1] = (__int64)v19;
        *v19 = (__int64)v19;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, const char *))(*(_QWORD *)v19[3] + 16LL))(
          v19[3],
          v19 - 2,
          226LL,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
        if ( p_m_ChildListList->m_DeleteOnRemove )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35[5] + 48LL))(v35[5]);
      }
      if ( p_m_Event )
        KeSetEvent(p_m_Event, 0, 0);
    }
  }
  FxPkgPnp::SaveState(This, 1u);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    m_NextIdleTimeoutHint = m_Owner->m_PoxInterface.m_NextIdleTimeoutHint;
    if ( (_DWORD)m_NextIdleTimeoutHint != m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint )
    {
      m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint = m_NextIdleTimeoutHint;
      PoFxSetDeviceIdleTimeout(m_Owner->m_PoxInterface.m_PoHandle, 10000 * m_NextIdleTimeoutHint);
    }
  }
  v21 = This->m_PowerPolicyMachine.m_Owner;
  if ( !v21->m_IdleSettings.Enabled )
    return 1381LL;
  result = 1285LL;
  if ( v21->m_IdleSettings.WakeFromS0Capable )
    return 1329LL;
  return result;
}
