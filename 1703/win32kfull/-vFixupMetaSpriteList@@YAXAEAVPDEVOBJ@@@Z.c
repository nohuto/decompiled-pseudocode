/*
 * XREFs of ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C025E90C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 *     vSpDynamicModeChange @ 0x1C00A78A0 (vSpDynamicModeChange.c)
 * Callees:
 *     <none>
 */

void __fastcall vFixupMetaSpriteList(struct PDEVOBJ *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 i; // rcx
  __int64 v6; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)a1 + 144LL);
  v4 = *v3;
  for ( i = *(_QWORD *)(*v3 + 88); i != *(_QWORD *)(v4 + 1168); i = *(_QWORD *)(i + 24) )
  {
    *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) = 0LL;
    v6 = *(_QWORD *)(i + 8);
    if ( i == *(_QWORD *)(v4 + 88) )
      *(_QWORD *)(v1 + 152) = v6;
    else
      *(_QWORD *)(v2 + 16) = v6;
    v2 = *(_QWORD *)(i + 8);
  }
}
