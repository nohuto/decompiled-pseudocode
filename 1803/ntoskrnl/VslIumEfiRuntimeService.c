/*
 * XREFs of VslIumEfiRuntimeService @ 0x14022FC60
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VslpUnlockPagesForTransfer @ 0x14015CF14 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, __int64 a2, unsigned int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int128 v9; // xmm1
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v11; // esi
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbx
  _QWORD v14[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v15[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v16; // [rsp+88h] [rbp-41h]
  __int64 v17; // [rsp+90h] [rbp-39h]
  __int64 v18; // [rsp+98h] [rbp-31h]
  unsigned __int64 v19; // [rsp+A0h] [rbp-29h]
  __int128 v20; // [rsp+A8h] [rbp-21h]
  __int128 v21; // [rsp+B8h] [rbp-11h]

  v5 = a1;
  memset(v14, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((__int64)v14, a2, a3, 2, 1u);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v17 = v14[0];
  v18 = v14[7];
  v16 = v5;
  if ( a4 )
  {
    v9 = a4[1];
    v20 = *a4;
    v21 = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v11 = VslpEnterIumSecureMode(2u, 233LL, 0, (__int64)v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v12 = v21;
    *a4 = v20;
    a4[1] = v12;
  }
  if ( v11 == -1073741811 )
  {
    v13 = 0x8000000000000002uLL;
  }
  else if ( v11 == -1073741801 )
  {
    v13 = 0x8000000000000009uLL;
  }
  else
  {
    v13 = v19;
    if ( v11 )
      v13 = 0x8000000000000003uLL;
  }
  if ( v14[0] )
    VslpUnlockPagesForTransfer((__int64)v14);
  return v13;
}
