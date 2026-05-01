/*
 * XREFs of ?HampSystemAcquireHostWakeChannel@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x1800325D8
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E2FC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSystemAcquireHostWakeChannel(struct _RM_HAM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 v2; // rax
  int v4; // ebx
  void *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 - 2);
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v2 + 40) + 136LL))(*((_QWORD *)a1 + 130), &v7);
  if ( v4 < 0 )
  {
    v5 = v7;
  }
  else
  {
    v5 = 0LL;
    *a2 = v7;
    v4 = 0;
    v7 = 0LL;
  }
  if ( v5 )
    NtClose(v5);
  return (unsigned int)v4;
}
