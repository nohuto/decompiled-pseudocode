/*
 * XREFs of sub_18005EE34 @ 0x18005EE34
 * Callers:
 *     sub_18005EB88 @ 0x18005EB88 (sub_18005EB88.c)
 *     sub_18005ED80 @ 0x18005ED80 (sub_18005ED80.c)
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_180062D68 @ 0x180062D68 (sub_180062D68.c)
 *     sub_1800ED18C @ 0x1800ED18C (sub_1800ED18C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005EE34(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v1 )
    RtlReleaseSRWLockExclusive(v2);
  else
    RtlReleaseSRWLockShared(v2);
}
