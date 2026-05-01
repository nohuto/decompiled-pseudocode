/*
 * XREFs of ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004D0F8 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HampHostAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v2; // rsi
  int v5; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _HAM_ACTIVITY *v11; // rbx
  char v13; // [rsp+20h] [rbp-1C8h]
  struct _HAM_ACTIVITY *v14; // [rsp+30h] [rbp-1B8h] BYREF
  _DWORD v15[96]; // [rsp+40h] [rbp-1A8h] BYREF

  v2 = *((_QWORD *)a1 + 80);
  v14 = 0LL;
  if ( *(_QWORD *)(v2 + 128) )
  {
    return 0;
  }
  else
  {
    HampActivityPropertiesInitialize(L"PpleDependency", L"DefaultPPLE", (struct _HAM_ACTIVITY_PROPERTIES *)v15);
    v6 = *((_QWORD *)a2 + 90);
    v15[0] |= 0x80u;
    v13 = 2;
    v7 = HampActCreate(
           0LL,
           (*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 128,
           a2,
           v15,
           v13,
           &v14);
    v11 = v14;
    v5 = v7;
    if ( v7 >= 0 )
    {
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)v11 + 8) = a1;
      HampHostReleaseLockExclusiveEx(a1);
      HampHostAcquireLockExclusiveEx(a2, 0);
      HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
      *(_QWORD *)(v2 + 128) = v11;
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v2);
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
      HampHostReleaseLockExclusiveEx(a2);
      v5 = 0;
    }
    if ( v11 )
    {
      if ( v5 < 0 )
        HampActClose(v11);
      CemRcObjectDereference(v11, v8, v9, v10);
    }
  }
  return (unsigned int)v5;
}
