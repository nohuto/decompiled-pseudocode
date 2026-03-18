/*
 * XREFs of ClientImmLoadLayout @ 0x1C011F04C
 * Callers:
 *     xxxImmLoadLayout @ 0x1C011EFBC (xxxImmLoadLayout.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  unsigned int v10; // edx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v19[360]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v20; // [rsp+1C0h] [rbp+8h] BYREF
  char v21; // [rsp+1D0h] [rbp+18h] BYREF
  int v22; // [rsp+1D8h] [rbp+20h] BYREF

  v18[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v21,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(92LL);
  v5 = KeUserModeCallback(92LL, v18, 8LL, &v17, &v22);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v21,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v22 != 24 )
    return 0LL;
  v9 = (__int64 *)v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v20 = *v9;
  v10 = v20;
  if ( v20 )
  {
    v11 = *(_OWORD **)(v17 + 16);
    if ( v11 + 22 < v11 || (unsigned __int64)(v11 + 22) > MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    v12 = v19;
    v13 = 2LL;
    v14 = 2LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v14;
    }
    while ( v14 );
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v15 = v19;
    do
    {
      *a2 = *v15;
      a2[1] = v15[1];
      a2[2] = v15[2];
      a2[3] = v15[3];
      a2[4] = v15[4];
      a2[5] = v15[5];
      a2[6] = v15[6];
      a2 += 8;
      *(a2 - 1) = v15[7];
      v15 += 8;
      --v13;
    }
    while ( v13 );
    *a2 = *v15;
    a2[1] = v15[1];
    a2[2] = v15[2];
    a2[3] = v15[3];
    a2[4] = v15[4];
    a2[5] = v15[5];
  }
  return v10;
}
