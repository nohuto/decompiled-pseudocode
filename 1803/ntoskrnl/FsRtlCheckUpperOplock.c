/*
 * XREFs of FsRtlCheckUpperOplock @ 0x140715180
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockBreakToII @ 0x140064EE8 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakToNone @ 0x1400D21C0 (FsRtlpOplockBreakToNone.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404E2F44 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v7; // r14d
  bool v8; // r15
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // r10d
  __int64 *i; // rdi
  __int16 v13; // r10
  char v14; // r14
  int v15; // r10d
  bool v16; // zf
  __int64 v17; // r15
  unsigned int v18; // eax
  __int64 v19; // r14
  unsigned __int8 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  _BYTE v23[120]; // [rsp+60h] [rbp-78h] BYREF
  char v24; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+F0h] [rbp+18h]

  v25 = a3;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v22 = *a1;
  v24 = 0;
  v8 = 0;
  v9 = 0;
  v21 = 0;
  v10 = 0;
  if ( !v22 )
    return v10;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v22 + 152));
  v24 = 1;
  v11 = *(_DWORD *)(v22 + 144);
  if ( v11 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v11 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v10 = -1073739511;
      }
      else
      {
        for ( i = *(__int64 **)(v22 + 40); i != (__int64 *)(v22 + 40); i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u);
          }
        }
        FsRtlpComputeShareableOplockState(v22);
      }
      goto LABEL_36;
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v11, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v10 = -1073741597;
              goto LABEL_36;
            }
            v9 = 0x2000;
            v8 = (v13 & 4) != 0;
            goto LABEL_19;
          }
          v8 = 1;
LABEL_21:
          v9 = 0x4000;
LABEL_19:
          v14 = 0;
          goto LABEL_27;
        }
        v8 = 1;
        v15 = v13 & 0x5000;
        if ( v15 == 20480 )
        {
          v21 = 1;
          goto LABEL_21;
        }
        v14 = 0;
        if ( v15 )
          v9 = v15;
      }
      else
      {
        v14 = 1;
        v9 = 28672;
      }
LABEL_27:
      memset(v23, 0, 0x48uLL);
      v23[0] = 3;
      v16 = !v8;
      v17 = v25;
      if ( v16 )
      {
        if ( !v14 )
        {
LABEL_32:
          if ( !v10 && (*(_DWORD *)(v22 + 144) & v9) != 0 )
          {
            v19 = a5;
            v10 = FsRtlpOplockBreakByCacheFlags(v22, (__int64)v23, 0LL, a6 | v21, v9, v17, a4, a5, &v24, 0LL);
            if ( v21 )
              v10 = FsRtlpOplockBreakByCacheFlags(v22, (__int64)v23, 0LL, a6, 0x2000, v17, a4, v19, &v24, 0LL);
          }
          goto LABEL_36;
        }
        v18 = FsRtlpOplockBreakToNone(v22, (__int64)v23, 0LL, a6, v25, a4, a5, &v24, 0LL);
      }
      else
      {
        v18 = FsRtlpOplockBreakToII((__int64 *)v22, (__int64)v23, 0LL, a6, v25, a4, a5, &v24, 0LL);
      }
      v10 = v18;
      goto LABEL_32;
    }
  }
LABEL_36:
  if ( v24 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v22 + 152));
  return v10;
}
