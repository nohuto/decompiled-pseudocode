/*
 * XREFs of ACPIProcessorContainerEvaluateLpiObject @ 0x1C0036874
 * Callers:
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003692C (ACPIProcessorContainerEvaluateLpiObjects.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIProcessorContainerEvaluateLpiObject(__int64 a1, int *a2)
{
  int v2; // eax
  _QWORD *v4; // rcx
  __int64 *v5; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rbx

  v2 = *a2;
  *(_DWORD *)(a1 + 240) = *a2;
  v4 = *(_QWORD **)(a1 + 712);
  *a2 = v2 + 1;
  v5 = AMLIGetNamedChild(v4, 1229999199);
  if ( v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(v5) = AMLIEvalNameSpaceObject(v5, PoolWithTag, 0, 0LL);
      if ( (int)v5 >= 0 )
      {
        if ( v7[1] == 4 )
        {
          *(_QWORD *)(a1 + 232) = v7;
          v7 = 0LL;
        }
        else
        {
          LODWORD(v5) = -1072431095;
        }
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0x52706341u);
    }
    else
    {
      LODWORD(v5) = -1073741670;
    }
  }
  return (unsigned int)v5;
}
