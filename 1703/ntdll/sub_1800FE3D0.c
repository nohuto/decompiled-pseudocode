/*
 * XREFs of sub_1800FE3D0 @ 0x1800FE3D0
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_1800FE4C4 @ 0x1800FE4C4 (sub_1800FE4C4.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 *     sub_18010A41C @ 0x18010A41C (sub_18010A41C.c)
 *     sub_18010AA04 @ 0x18010AA04 (sub_18010AA04.c)
 */

void __fastcall sub_1800FE3D0(__int64 a1)
{
  PVOID *v2; // rbx
  PVOID *v3; // rax
  __int64 v4; // rdi
  PRTL_SRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  RtlAcquireSRWLockShared(&stru_18015C2A0);
  if ( (dword_18015C2A8 & 1) != 0 && (dword_18015C2A8 & 2) != 0 && (int)sub_1800FEC74(a1, 1LL, &SRWLock) >= 0 )
  {
    v3 = (PVOID *)sub_1800093FC(0x600uLL, 0);
    v2 = v3;
    if ( v3 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v3, 0LL) )
      {
        v4 = sub_18010A41C(&dword_18015C2B0, v2);
        if ( v4 )
        {
          if ( (unsigned int)sub_1800FE4C4(SRWLock) )
            v4 = 0LL;
          if ( v4 )
            sub_18010AA04(&dword_18015C2B0, v4);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&stru_18015C2A0);
  if ( v2 )
    sub_18000913C((int)v2);
}
