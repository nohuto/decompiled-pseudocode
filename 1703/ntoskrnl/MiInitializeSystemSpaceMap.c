/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x14057E4D0
 * Callers:
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140824BAC (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
    MiInitializePteInfo(&unk_14036CD30, a2, qword_14036D8C0);
  return 1LL;
}
