/*
 * XREFs of sub_18000F3C8 @ 0x18000F3C8
 * Callers:
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_1800EFE3C @ 0x1800EFE3C (sub_1800EFE3C.c)
 *     RtlLogStackBackTrace @ 0x1800F8C70 (RtlLogStackBackTrace.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 * Callees:
 *     sub_1800F8F30 @ 0x1800F8F30 (sub_1800F8F30.c)
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 *     sub_1800F931C @ 0x1800F931C (sub_1800F931C.c)
 */

__int64 __fastcall sub_18000F3C8(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // edi

  v1 = qword_180159A08;
  if ( !qword_180159A08 )
    return 0LL;
  v3 = sub_1800F8F30(qword_180159A08, a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_1800F931C(v1, v3);
    if ( !v5 )
      sub_1800F8F80(v1, v4);
  }
  else
  {
    return 0;
  }
  return v5;
}
