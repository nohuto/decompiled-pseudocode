/*
 * XREFs of ?RmpSystemIsProcessInApplication@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180008A0C
 * Callers:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall RmpSystemIsProcessInApplication(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)a1 + 14);
  if ( !v3 )
    return (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                                 + 56LL)
                                                                                     + 160LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 3),
             a2);
  if ( v3 == 1 )
    return NtIsProcessInJob(a2, *((HANDLE *)a1 + 117)) == 292;
  return 0;
}
