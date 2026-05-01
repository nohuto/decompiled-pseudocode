/*
 * XREFs of ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007F60
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800058A4 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4 (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitLimit(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-61h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v12; // [rsp+70h] [rbp-29h]
  int v13; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  unsigned __int64 *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int64 *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  char *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  char *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  unsigned __int64 *v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh]

  v1 = *((_QWORD *)a1 + 147);
  if ( v1 == -1LL || (v5 = *((_QWORD *)a1 + 143), v5 == -1) || (v2 = v1 + v5, v2 < v1) )
    v2 = -1LL;
  v7 = v2;
  v3 = *((_QWORD *)a1 + 139);
  v9 = *((_QWORD *)a1 + 111);
  if ( v3 )
  {
    v6 = v3;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 140);
    if ( v3 )
    {
      if ( v2 < v3 )
        v3 = v2;
      v6 = v3;
    }
    else
    {
      v3 = v2;
      v6 = v2;
    }
  }
  if ( hProvider <= 4u || (qword_1800670D0 & 1) == 0 || (qword_1800670D8 & 1) != qword_1800670D8 )
    return v3;
  v8 = *((_QWORD *)a1 + 3);
  v15 = &v8;
  v17 = &v6;
  v19 = &v9;
  v25 = &v7;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v21 = (char *)a1 + 1112;
  v22 = 8LL;
  v23 = (char *)a1 + 1120;
  v24 = 8LL;
  v26 = 8LL;
  *(_DWORD *)&EventDescriptor.Level = 4;
  UserData.Ptr = (ULONGLONG)off_1800670C8;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18005766D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_1800670C8;
  v12 = &unk_180057678;
  UserData.Reserved = 2;
  v13 = 167;
  v14 = 1;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  return v6;
}
