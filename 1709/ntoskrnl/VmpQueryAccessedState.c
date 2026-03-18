/*
 * XREFs of VmpQueryAccessedState @ 0x140279824
 * Callers:
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402789E0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpProcessAccessedBatch @ 0x140279560 (VmpProcessAccessedBatch.c)
 *     VmpProcessContextLockShared @ 0x140279674 (VmpProcessContextLockShared.c)
 */

__int64 __fastcall VmpQueryAccessedState(PEX_SPIN_LOCK SpinLock, _QWORD *a2, int a3, int a4)
{
  int v5; // ebx
  _QWORD *v6; // r15
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdi
  unsigned __int8 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[32]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  v16 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned __int64)&a2[a3];
  v9 = a2;
  v10 = VmpProcessContextLockShared(SpinLock);
  if ( (unsigned __int64)v9 >= v8 )
    goto LABEL_13;
  do
  {
    v17[0] = *v9 >> 12;
    v17[1] = 1LL;
    VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, v17, v18, &v16);
    if ( !v18[1] )
    {
      *v9 |= 2uLL;
      if ( !v7 )
        goto LABEL_11;
LABEL_8:
      v12 = *((_QWORD *)SpinLock + 5);
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      __writecr8(v10);
      VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v19, v7, v6, a4);
      v7 = 0;
      v10 = VmpProcessContextLockShared(SpinLock);
      v13 = v16;
      if ( v12 != *((_QWORD *)SpinLock + 5) )
        v13 = 0LL;
      v16 = v13;
      goto LABEL_11;
    }
    v11 = v7++;
    if ( v7 == 1 )
      v6 = v9;
    v19[v11] = v18[0];
    if ( v7 == 32 )
      goto LABEL_8;
LABEL_11:
    ++v9;
  }
  while ( (unsigned __int64)v9 < v8 );
  v5 = a4;
LABEL_13:
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  result = v10;
  __writecr8(v10);
  if ( v7 )
    return (__int64)VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v19, v7, &v9[-v7], v5);
  return result;
}
