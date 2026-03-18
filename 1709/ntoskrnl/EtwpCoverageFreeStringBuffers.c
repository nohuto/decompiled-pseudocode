/*
 * XREFs of EtwpCoverageFreeStringBuffers @ 0x140744FC8
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageFreeStringBuffers(__int64 a1, int a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rcx

  v2 = (_QWORD *)(a1 + 48);
  v4 = *(_QWORD **)(a1 + 48);
  while ( v4 != v2 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( a2 && v6 == *(_QWORD **)(a1 + 40) )
    {
      memset(v6 + 5, 0, v6[2] - (_QWORD)v6 - 40LL);
      v6[3] = v6 + 5;
      v6[4] = v6 + 5;
    }
    else
    {
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0x56777445u);
    }
  }
}
