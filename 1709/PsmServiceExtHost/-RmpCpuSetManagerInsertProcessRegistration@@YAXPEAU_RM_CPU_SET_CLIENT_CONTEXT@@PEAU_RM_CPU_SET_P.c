/*
 * XREFs of ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037610
 * Callers:
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180036D8C (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180037820 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180039D08 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
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
  struct _RM_CPU_SET_ALLOCATION **v11; // rdx
  struct _RM_CPU_SET_ALLOCATION *v12; // rax
  struct _RM_CPU_SET_CLIENT_CONTEXT **v13; // rdx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v14; // rax

  v4 = *(struct _RM_CPU_SET_MANAGER **)a1;
  RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*(_QWORD *)a1 + 48LL), a4);
  *((_QWORD *)a4 + 6) = a2;
  v9 = (struct _RM_CPU_SET_PROCESS **)*((_QWORD *)a2 + 4);
  v10 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 80);
  if ( *v9 != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24) )
    __fastfail(3u);
  *((_QWORD *)a4 + 11) = v9;
  *(_QWORD *)v10 = (char *)a2 + 24;
  *v9 = v10;
  *((_QWORD *)a2 + 4) = v10;
  ++*((_DWORD *)a2 + 15);
  RmpCpuSetManagerMarkProcessDirty(v4, a2);
  *((_QWORD *)a4 + 7) = a3;
  v11 = (struct _RM_CPU_SET_ALLOCATION **)*((_QWORD *)a3 + 10);
  v12 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 96);
  if ( *v11 != (struct _RM_CPU_SET_ALLOCATION *)((char *)a3 + 72) )
    __fastfail(3u);
  *(_QWORD *)v12 = (char *)a3 + 72;
  *((_QWORD *)a4 + 13) = v11;
  *v11 = v12;
  *((_QWORD *)a3 + 10) = v12;
  RmpObjectAddRef(a3);
  RmpObjectAddRef(a4);
  *((_QWORD *)a4 + 5) = a1;
  v13 = (struct _RM_CPU_SET_CLIENT_CONTEXT **)*((_QWORD *)a1 + 6);
  v14 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 64);
  if ( *v13 != (struct _RM_CPU_SET_CLIENT_CONTEXT *)((char *)a1 + 40) )
    __fastfail(3u);
  *(_QWORD *)v14 = (char *)a1 + 40;
  *((_QWORD *)a4 + 9) = v13;
  *v13 = v14;
  *((_QWORD *)a1 + 6) = v14;
  RmpObjectAddRef(a4);
}
