/*
 * XREFs of ?RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180035584
 * Callers:
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180035850 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RmpActivityHostAddResourceSet(struct _RM_OBJECT_HEADER *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *result; // rax

  v4 = a3;
  if ( !*(_QWORD *)(a2 + 1440) )
  {
    RmpObjectAddRef(a1);
    *(_QWORD *)(a2 + 1440) = a1;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = (_DWORD *)((char *)a1 + 24 * v4 + 816);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *(_QWORD *)v6;
  result = (_QWORD *)(a2 + 1416);
  if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *result = v7;
  *(_QWORD *)(a2 + 1424) = v6;
  *(_QWORD *)(v7 + 8) = result;
  *(_QWORD *)v6 = result;
  ++v6[4];
  *(_DWORD *)(a2 + 1448) = v4;
  return result;
}
