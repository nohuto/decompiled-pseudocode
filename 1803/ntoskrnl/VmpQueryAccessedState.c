/*
 * XREFs of VmpQueryAccessedState @ 0x1402ACA5C
 * Callers:
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402ABA88 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpProcessAccessedBatch @ 0x1402AC74C (VmpProcessAccessedBatch.c)
 *     VmpProcessContextLockShared @ 0x1402AC860 (VmpProcessContextLockShared.c)
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
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[32]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  v17 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned __int64)&a2[a3];
  v9 = a2;
  v10 = VmpProcessContextLockShared(SpinLock);
  if ( (unsigned __int64)v9 >= v8 )
    goto LABEL_13;
  do
  {
    v18[0] = *v9 >> 12;
    v18[1] = 1LL;
    VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, v18, v19, &v17);
    if ( !v19[1] )
    {
      *v9 |= 2uLL;
      if ( !v7 )
        goto LABEL_11;
LABEL_8:
      v13 = *((_QWORD *)SpinLock + 5);
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      __writecr8(v10);
      VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v20, v7, v6, a4);
      v7 = 0;
      v10 = VmpProcessContextLockShared(SpinLock);
      v14 = v17;
      if ( v13 != *((_QWORD *)SpinLock + 5) )
        v14 = 0LL;
      v17 = v14;
      goto LABEL_11;
    }
    v11 = v7++;
    v20[v11] = v19[0];
    v12 = v9;
    if ( v7 != 1 )
      v12 = v6;
    v6 = v12;
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
    return (__int64)VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v20, v7, &v9[-v7], v5);
  return result;
}
