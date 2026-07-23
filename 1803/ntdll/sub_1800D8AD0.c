/*
 * XREFs of sub_1800D8AD0 @ 0x1800D8AD0
 * Callers:
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800D90E8 @ 0x1800D90E8 (sub_1800D90E8.c)
 */

void sub_1800D8AD0()
{
  unsigned __int64 Ptr; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Ptr = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015D058 + 8));
  v2 = (_RTL_SRWLOCK *)qword_18015D058;
  v3 = *(_RTL_SRWLOCK **)(qword_18015D058 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_18015D058 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( LODWORD(v3[12].Ptr) == 2 && (!Ptr || v3[13].Ptr < (PVOID)Ptr) )
      {
        Ptr = (unsigned __int64)v3[13].Ptr;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_18015D058;
      v3 = (_RTL_SRWLOCK *)v3->Ptr;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_18015D058 + 16) );
    if ( v1 )
    {
      sub_1800D90E8(Ptr);
      v2 = (_RTL_SRWLOCK *)qword_18015D058;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
