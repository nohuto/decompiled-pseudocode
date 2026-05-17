/*
 * XREFs of sub_1800DBFC0 @ 0x1800DBFC0
 * Callers:
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBFC0(__int64 a1)
{
  int *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v2 = *(int **)(a1 + 144);
  if ( !v2 )
    return 3221225495LL;
  v3 = *v2;
  return ((__int64 (__fastcall *)(_QWORD, int *))qword_1801554B0)(0LL, &v3);
}
