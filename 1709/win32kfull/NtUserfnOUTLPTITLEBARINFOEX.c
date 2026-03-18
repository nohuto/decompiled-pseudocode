/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1C00EE550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v5; // rdi
  _OWORD v7[9]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v7, 0, 0x8CuLL);
  v5 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a4 + 64) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a4 + 80) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 96) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a4 + 112) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a4 + 128) = *(_QWORD *)(a4 + 128);
  *(_DWORD *)(a4 + 136) = *(_DWORD *)(a4 + 136);
  v7[0] = *(_OWORD *)a4;
  v7[1] = *(_OWORD *)(a4 + 16);
  v7[2] = *(_OWORD *)(a4 + 32);
  v7[3] = *(_OWORD *)(a4 + 48);
  v7[4] = *(_OWORD *)(a4 + 64);
  v7[5] = *(_OWORD *)(a4 + 80);
  v7[6] = *(_OWORD *)(a4 + 96);
  v7[7] = *(_OWORD *)(a4 + 112);
  *(_QWORD *)&v7[8] = *(_QWORD *)(a4 + 128);
  DWORD2(v7[8]) = *(_DWORD *)(a4 + 136);
  if ( LODWORD(v7[0]) == 140 )
  {
    v5 = _guard_dispatch_icall_fptr();
    *(_OWORD *)a4 = v7[0];
    *(_OWORD *)(a4 + 16) = v7[1];
    *(_OWORD *)(a4 + 32) = v7[2];
    *(_OWORD *)(a4 + 48) = v7[3];
    *(_OWORD *)(a4 + 64) = v7[4];
    *(_OWORD *)(a4 + 80) = v7[5];
    *(_OWORD *)(a4 + 96) = v7[6];
    *(_OWORD *)(a4 + 112) = v7[7];
    *(_QWORD *)(a4 + 128) = *(_QWORD *)&v7[8];
    *(_DWORD *)(a4 + 136) = DWORD2(v7[8]);
  }
  else
  {
    UserSetLastError(87LL, (__int64)v7);
  }
  return v5;
}
