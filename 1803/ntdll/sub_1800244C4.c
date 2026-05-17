/*
 * XREFs of sub_1800244C4 @ 0x1800244C4
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 *     sub_1800EBE38 @ 0x1800EBE38 (sub_1800EBE38.c)
 *     RtlLogStackBackTrace @ 0x1800F6770 (RtlLogStackBackTrace.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 * Callees:
 *     sub_1800F6A30 @ 0x1800F6A30 (sub_1800F6A30.c)
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 *     sub_1800F6E20 @ 0x1800F6E20 (sub_1800F6E20.c)
 */

__int64 __fastcall sub_1800244C4(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // edi

  v1 = qword_18015AA50;
  if ( !qword_18015AA50 )
    return 0LL;
  v3 = sub_1800F6A30(qword_18015AA50, a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_1800F6E20(v1, v3);
    if ( !v5 )
      sub_1800F6A80(v1, v4);
  }
  else
  {
    return 0;
  }
  return v5;
}
