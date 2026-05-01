/*
 * XREFs of ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800360A8
 * Callers:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B66C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall RmpActivityHostIsJobFrozen(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 253);
  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    v2 = v1 >> 6;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 772) & 1) == 0 )
    {
      (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                            + 200LL))(
        (char *)a1 + 552,
        *((unsigned int *)a1 + 155),
        (char *)a1 + 88,
        *((unsigned int *)a1 + 156),
        *((_QWORD *)a1 + 3),
        &v4);
      return v4 == 7;
    }
    v2 = v1 >> 8;
  }
  return v2 & 1;
}
