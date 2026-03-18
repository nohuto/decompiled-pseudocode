/*
 * XREFs of Simulator_RefreshTree @ 0x1C005B8A8
 * Callers:
 *     ACPITableLoadCallBack @ 0x1C0029E20 (ACPITableLoadCallBack.c)
 *     ParseUnload @ 0x1C0062A70 (ParseUnload.c)
 * Callees:
 *     Simulator_AllocAndInitTestData @ 0x1C005AF0C (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x1C005B98C (Simulator_TestNotify.c)
 */

__int64 Simulator_RefreshTree()
{
  _DWORD *inited; // rax
  void *v1; // rbx

  inited = Simulator_AllocAndInitTestData();
  v1 = inited;
  if ( !inited )
    return 3221225626LL;
  inited[1] = 6;
  *inited = 1;
  inited[2] = 1;
  *((_QWORD *)inited + 2) = gpnsNameSpaceRoot;
  Simulator_TestNotify(inited);
  ExFreePoolWithTag(v1, 0);
  return 0LL;
}
