/*
 * XREFs of _lambda_a40a05a87e17fe03a586ba80cec243fd_::operator() @ 0x180193454
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x180196AF0 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_a40a05a87e17fe03a586ba80cec243fd_::operator()(__int64 a1, int a2)
{
  int v2; // r9d
  bool v4; // zf

  v2 = *(_DWORD *)(**(_QWORD **)a1 + 8LL * **(int **)(a1 + 8) + 456);
  if ( v2 )
  {
    if ( v2 != 1 )
      return 0;
    v4 = a2 == 0;
  }
  else
  {
    v4 = (a2 & 3) == 0;
  }
  return !v4;
}
