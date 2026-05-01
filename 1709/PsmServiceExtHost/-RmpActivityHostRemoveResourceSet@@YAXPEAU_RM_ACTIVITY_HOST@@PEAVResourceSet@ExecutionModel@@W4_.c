/*
 * XREFs of ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800362C8
 * Callers:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180035850 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostRemoveResourceSet(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rax

  v4 = 3 * (a3 + 34LL);
  v5 = a2 + 177;
  v6 = a2[177];
  if ( *(_QWORD **)(v6 + 8) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = 0LL;
  v5[1] = 0LL;
  --*(_DWORD *)(a1 + 8 * v4 + 16);
  v8 = *a2;
  *((_DWORD *)a2 + 362) = 2;
  (*(void (__fastcall **)(__int64 *))(v8 + 16))(a2);
  return (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
}
