/*
 * XREFs of RmpWnfPublishMessageToClientStateName @ 0x18000AA8C
 * Callers:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180006180 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x18000A460 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000A560 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000FB3C (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180034278 (-HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x18004DF70 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 * Callees:
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall RmpWnfPublishMessageToClientStateName(_QWORD *a1, const void *a2, unsigned int a3, __int64 a4)
{
  size_t v5; // rbp
  unsigned int v8; // ebx
  _QWORD *Heap; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  RtlAcquireSRWLockExclusive(a4 + 24);
  v8 = 0;
  if ( *(_BYTE *)(a4 + 32)
    || (RmWnfTestFlags & 1) != 0
    || (int)RtlQueryWnfMetaNotification(&v13, 2LL, *a1, 0LL) >= 0 && !v13 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v5 + 28));
    if ( Heap )
    {
      Heap[2] = *a1;
      memcpy_0((char *)Heap + 28, a2, v5);
      *((_DWORD *)Heap + 6) = v5;
      v11 = *(_QWORD **)(a4 + 8);
      if ( *v11 != a4 )
        __fastfail(3u);
      *Heap = a4;
      Heap[1] = v11;
      *v11 = Heap;
      *(_QWORD *)(a4 + 8) = Heap;
      if ( !*(_BYTE *)(a4 + 32) )
      {
        v12 = *(_QWORD *)(a4 + 16);
        *(_BYTE *)(a4 + 32) = 1;
        TpPostWork(v12);
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = RtlPublishWnfStateData(*a1, 0LL, a2, (unsigned int)v5, 0LL);
  }
  RtlReleaseSRWLockExclusive(a4 + 24);
  return v8;
}
