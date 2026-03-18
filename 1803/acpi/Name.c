/*
 * XREFs of Name @ 0x1C004F230
 * Callers:
 *     <none>
 * Callees:
 *     MoveObjData @ 0x1C0047124 (MoveObjData.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Name(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int NameSpaceObject; // ebx

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (__int64 *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
    MoveObjData((_OWORD *)(*(_QWORD *)v2 + 64LL), (_OWORD *)(*(_QWORD *)(a2 + 80) + 40LL));
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
    return 0;
  return NameSpaceObject;
}
