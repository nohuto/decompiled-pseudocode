/*
 * XREFs of Name @ 0x1C001B2E0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall Name(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  _OWORD *v5; // rcx
  __int64 v6; // rax

  v2 = (_QWORD *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (_QWORD *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    v5 = (_OWORD *)(*(_QWORD *)(a2 + 80) + 40LL);
    v6 = *v2 + 64LL;
    if ( (_OWORD *)v6 == v5 )
      return NameSpaceObject;
    *(_OWORD *)v6 = *v5;
    *(_OWORD *)(v6 + 16) = v5[1];
    *(_QWORD *)(v6 + 32) = *((_QWORD *)v5 + 4);
    memset(v5, 0, 0x28uLL);
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
    return 0;
  return NameSpaceObject;
}
