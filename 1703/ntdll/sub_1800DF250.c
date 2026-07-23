/*
 * XREFs of sub_1800DF250 @ 0x1800DF250
 * Callers:
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_1800DF864 @ 0x1800DF864 (sub_1800DF864.c)
 */

void sub_1800DF250()
{
  unsigned __int64 Ptr; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Ptr = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 8));
  v2 = (_RTL_SRWLOCK *)qword_18015C008;
  v3 = *(_RTL_SRWLOCK **)(qword_18015C008 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_18015C008 + 16) )
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
      v2 = (_RTL_SRWLOCK *)qword_18015C008;
      v3 = (_RTL_SRWLOCK *)v3->Ptr;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_18015C008 + 16) );
    if ( v1 )
    {
      sub_1800DF864(Ptr);
      v2 = (_RTL_SRWLOCK *)qword_18015C008;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
