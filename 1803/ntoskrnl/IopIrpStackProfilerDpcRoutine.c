/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x1400BF0B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x1400BF2E0 (IopProcessIrpStackProfiler.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x1401B4B70 (KiCustomAccessRoutine2.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rcx
  ULONG v12; // ebx
  __int64 v13; // rax
  _DWORD v14[32]; // [rsp+0h] [rbp-208h] BYREF
  __int64 v15; // [rsp+83h] [rbp-185h]
  __int64 v16; // [rsp+ABh] [rbp-15Dh]
  __int64 v17; // [rsp+C3h] [rbp-145h]
  _DWORD *v18; // [rsp+138h] [rbp-D0h]
  _QWORD v19[20]; // [rsp+150h] [rbp-B8h] BYREF

  v18 = v14;
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v14[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v17 = a3;
    v15 = __ROL8__(a2, a3);
    v16 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
  }
  memset(v19, 0, sizeof(v19));
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v4 += (unsigned int)(*(_DWORD *)(Prcb + 25872) - *(_DWORD *)(Prcb + 25956));
      v7 = 0LL;
      v8 = (_DWORD *)(Prcb + 25792);
      do
      {
        v19[v7++] += (unsigned int)(*v8 - v8[21]);
        ++v8;
      }
      while ( v7 < 20 );
    }
  }
  v9 = 20;
  result = (unsigned int)IopIrpStackProfilerSampleSize;
  if ( v4 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v9 = 0;
    v11 = 0LL;
    result = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    do
    {
      if ( v19[v11] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v9;
      ++v11;
    }
    while ( v11 < 20 );
  }
  if ( v9 != 20 )
  {
    IopProcessIrpStackProfiler(v19);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v12 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v12 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v13 = KeGetPrcb(v12);
      if ( v13 )
      {
        *(_OWORD *)(v13 + 25876) = *(_OWORD *)(v13 + 25792);
        *(_OWORD *)(v13 + 25892) = *(_OWORD *)(v13 + 25808);
        *(_OWORD *)(v13 + 25908) = *(_OWORD *)(v13 + 25824);
        *(_OWORD *)(v13 + 25924) = *(_OWORD *)(v13 + 25840);
        *(_OWORD *)(v13 + 25940) = *(_OWORD *)(v13 + 25856);
        *(_DWORD *)(v13 + 25956) = *(_DWORD *)(v13 + 25872);
      }
      ++v12;
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
