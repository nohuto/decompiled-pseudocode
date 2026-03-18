/*
 * XREFs of NtGdiDdDDICheckSharedResourceAccess @ 0x1C00F0CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDICheckSharedResourceAccess(CTouchProcessor *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  v2 = *(_QWORD *)a1;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C018BA68)(&v2);
}
