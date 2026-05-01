/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180041B64 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvCompleteExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180041CBC (-HamSrvCompleteExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254 (-HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180040824 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180045AE4 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180047058 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180047CF0 (-HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1)
{
  char v2; // bl
  int v3; // esi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx

  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9), 0);
  v2 = *((_BYTE *)a1 + 500);
  v3 = HampActBeginStateChange((__int64)a1, 4u);
  if ( v3 < 0 )
  {
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9));
  }
  else
  {
    if ( (*((_DWORD *)a1 + 124) & 0x180) == 0 )
      HampActRemoveFromClient(a1);
    v4 = (_QWORD *)((char *)a1 + 88);
    v5 = *((_QWORD *)a1 + 11);
    if ( *(struct _HAM_ACTIVITY **)(v5 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 88)
      || (v6 = (_QWORD *)*((_QWORD *)a1 + 12), (_QWORD *)*v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9));
    if ( (unsigned __int8)(v2 - 2) <= 1u )
      HampRmContextStopActivity(*((_QWORD **)a1 + 10));
    v7 = (void *)*((_QWORD *)a1 + 61);
    if ( v7 )
    {
      HampSystemActivationClientDeactivate(v7);
      *((_QWORD *)a1 + 61) = 0LL;
    }
    HampActEndStateChange(a1, 0);
    if ( ((*((_DWORD *)a1 + 124) >> 7) & 3) != 0 )
    {
      if ( ((*((_DWORD *)a1 + 124) >> 7) & 3) == 1 )
      {
        v11 = *((_QWORD *)a1 + 8);
        if ( *(_QWORD *)(v11 + 72) != -1LL )
        {
          v12 = v11 + 56;
          RtlRbRemoveNode(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 640LL) + 64LL, v11 + 56);
          *(_QWORD *)(v12 + 16) = -1LL;
        }
      }
    }
    else
    {
      CemRcObjectDereference(a1, v8, v9, v10);
    }
    CemRcObjectDereference(a1, v8, v9, v10);
  }
  return (unsigned int)v3;
}
