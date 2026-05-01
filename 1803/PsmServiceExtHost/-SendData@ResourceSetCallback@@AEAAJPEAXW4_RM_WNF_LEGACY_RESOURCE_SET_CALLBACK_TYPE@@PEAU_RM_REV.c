/*
 * XREFs of ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x18004DF70
 * Callers:
 *     ?OnAcquired@ResourceSetCallback@@UEAAJPEAX@Z @ 0x18004DEC0 (-OnAcquired@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z @ 0x18004DED0 (-OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetCallback@@UEAAJPEAX@Z @ 0x18004DEE0 (-OnOutOfMemory@ResourceSetCallback@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z @ 0x18004DEF0 (-OnRelease@ResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18000AA8C (RmpWnfPublishMessageToClientStateName.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z @ 0x180052C3C (-RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z.c)
 */

__int64 __fastcall ResourceSetCallback::SendData(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  struct _RM_OBJECT_TABLE *v6; // rcx
  int v8; // eax
  char *v9; // rdi
  int v10; // ebx
  __int64 v11; // r9
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  v6 = (struct _RM_OBJECT_TABLE *)(*(_QWORD *)(a1 + 16) + 560LL);
  P = 0LL;
  v8 = RmpResourceSetTableFindById(v6, *(_QWORD *)(a1 + 8), (struct _RM_RESOURCE_SET **)&P);
  v9 = (char *)P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *((_QWORD *)P + 7);
    if ( v11 )
    {
      v15 = 0LL;
      v14 = *(_QWORD *)(a1 + 8);
      HIDWORD(v15) = a3;
      if ( a4 )
        LODWORD(v15) = *a4;
      v10 = RmpWnfPublishMessageToClientStateName((_QWORD *)(v11 + 24), &v14, 0x10u, *(_QWORD *)(v11 + 32));
      if ( v10 >= 0 )
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v9 )
    RmpObjectRelease(v9);
  return v10 | 0x10000000u;
}
