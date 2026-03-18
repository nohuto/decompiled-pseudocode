/*
 * XREFs of PspIumGetPhysicalPage @ 0x14071ABF4
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspIumReplenishPartitionPages @ 0x14024FB68 (PspIumReplenishPartitionPages.c)
 *     MmVirtualAccessFault @ 0x1406E504C (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  int v1; // r14d
  unsigned __int64 v3; // rdi
  _KPROCESS *v4; // rsi
  __int64 v5; // rcx
  _KPROCESS *Process; // rbp
  int v7; // edi
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v11; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_KPROCESS **)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 && *(_DWORD *)(v5 + 4) < 8u )
    PspIumReplenishPartitionPages(v5, 3u);
  if ( v3 >= 0x7FFFFFFF0000LL )
  {
    v7 = -1073741819;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v4 )
      KiStackAttachProcess(v4, 0, (__int64)&v11);
    v7 = MmVirtualAccessFault(v3, v1, &v10, &v9);
    if ( Process != v4 )
      KiUnstackDetachProcess(&v11, 0LL);
    if ( v7 >= 0 )
      *(_QWORD *)(a1 + 16) = v10;
  }
  result = v7;
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}
