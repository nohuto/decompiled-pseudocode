/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x1405B4D5C
 * Callers:
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_140388438 )
    return MiInitializePteInfo((unsigned int)&unk_140388F38, 12, 0, 3, qword_140389BA0, 0x8000000000LL, 16);
  return result;
}
