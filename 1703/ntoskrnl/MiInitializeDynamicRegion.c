/*
 * XREFs of MiInitializeDynamicRegion @ 0x140814A58
 * Callers:
 *     MiInitializeSpecialPool @ 0x14057E514 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x1405BA9B8 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rcx

  switch ( a1 )
  {
    case 12:
      v4 = &qword_14036C318;
      break;
    case 11:
      v4 = qword_14036C360;
      break;
    case 9:
      v4 = &qword_14036C2D0;
      break;
    case 6:
      v4 = &qword_14036C3A8;
      break;
    case 13:
      v4 = (__int64 *)&unk_14036C3F0;
      break;
    default:
      v4 = &qword_14036C438;
      if ( a1 != 7 )
        v4 = &qword_14036C480;
      break;
  }
  return MiBuildDynamicRegion(v4, a2, a3);
}
