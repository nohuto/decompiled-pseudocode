/*
 * XREFs of sub_18006073C @ 0x18006073C
 * Callers:
 *     sub_1800603AC @ 0x1800603AC (sub_1800603AC.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 */

PSLIST_ENTRY __fastcall sub_18006073C(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14

  v4 = (unsigned int)a2;
  v6 = (unsigned __int8)a2 & 1;
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), a2, a3, a4);
  v7 = (_QWORD *)(a1 + 224);
  v8 = 129LL;
  do
  {
    if ( (*v7 & 1) == 0 )
      sub_1800607D4(a1, *v7, v4 | 1);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v6 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
  return sub_1800605B4(a1 + 112, a1, v4);
}
