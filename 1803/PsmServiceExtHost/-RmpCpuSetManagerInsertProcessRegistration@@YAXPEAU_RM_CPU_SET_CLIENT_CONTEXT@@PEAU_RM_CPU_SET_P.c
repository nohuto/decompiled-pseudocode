/*
 * XREFs of ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180055B84
 * Callers:
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180055254 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180055DD0 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180059288 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerInsertProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // r14
  struct _RM_CPU_SET_PROCESS **v9; // rdx
  struct _RM_CPU_SET_PROCESS *v10; // rcx
  signed __int64 v11; // r8
  struct _RM_CPU_SET_ALLOCATION **v12; // rdx
  struct _RM_CPU_SET_ALLOCATION *v13; // rax
  struct _RM_CPU_SET_CLIENT_CONTEXT **v14; // rdx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v15; // rax

  v4 = *(struct _RM_CPU_SET_MANAGER **)a1;
  RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*(_QWORD *)a1 + 48LL), a4);
  *((_QWORD *)a4 + 7) = a2;
  v9 = (struct _RM_CPU_SET_PROCESS **)*((_QWORD *)a2 + 4);
  v10 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 88);
  if ( *v9 != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24) )
    __fastfail(3u);
  *((_QWORD *)a4 + 12) = v9;
  *(_QWORD *)v10 = (char *)a2 + 24;
  *v9 = v10;
  *((_QWORD *)a2 + 4) = v10;
  ++*((_DWORD *)a2 + 15);
  RmpCpuSetManagerMarkProcessDirty(v4, a2);
  *((_QWORD *)a4 + 8) = a3;
  v12 = (struct _RM_CPU_SET_ALLOCATION **)*((_QWORD *)a3 + 11);
  v13 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 104);
  if ( *v12 != (struct _RM_CPU_SET_ALLOCATION *)((char *)a3 + 80) )
    __fastfail(v11 + 2);
  *(_QWORD *)v13 = (char *)a3 + 80;
  *((_QWORD *)a4 + 14) = v12;
  *v12 = v13;
  *((_QWORD *)a3 + 11) = v13;
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a3 + 2, v11) <= v11 )
    __fastfail(0xEu);
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a4 + 2, v11) <= v11 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 6) = a1;
  v14 = (struct _RM_CPU_SET_CLIENT_CONTEXT **)*((_QWORD *)a1 + 6);
  v15 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 72);
  if ( *v14 != (struct _RM_CPU_SET_CLIENT_CONTEXT *)((char *)a1 + 40) )
    __fastfail(3u);
  *(_QWORD *)v15 = (char *)a1 + 40;
  *((_QWORD *)a4 + 10) = v14;
  *v14 = v15;
  *((_QWORD *)a1 + 6) = v15;
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a4 + 2, v11) <= v11 )
    __fastfail(0xEu);
}
