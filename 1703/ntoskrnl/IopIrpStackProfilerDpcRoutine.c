/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x14002E1B0
 * Callers:
 *     <none>
 * Callees:
 *     IopProcessIrpStackProfiler @ 0x14002E3D8 (IopProcessIrpStackProfiler.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _local_unwind @ 0x140169A90 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x14018B1C0 (KiCustomAccessRoutine2.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 Prcb; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r8
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // ebx
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
  v5 = 0;
  for ( result = (unsigned int)KeNumberProcessors_0;
        v5 < (unsigned int)KeNumberProcessors_0;
        result = (unsigned int)KeNumberProcessors_0 )
  {
    Prcb = KeGetPrcb(v5);
    if ( Prcb )
    {
      v4 += (unsigned int)(*(_DWORD *)(Prcb + 26192) - *(_DWORD *)(Prcb + 26276));
      v8 = 0LL;
      v9 = (_DWORD *)(Prcb + 26112);
      do
      {
        v19[v8++] += (unsigned int)(*v9 - v9[21]);
        ++v9;
      }
      while ( v8 < 20 );
    }
    ++v5;
  }
  v10 = 20;
  v11 = IopIrpStackProfilerSampleSize;
  if ( v4 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v10 = 0;
    for ( result = 0LL; result < 20; ++result )
    {
      if ( v19[result] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v10;
    }
  }
  if ( v10 != 20 )
  {
    IopProcessIrpStackProfiler(v19);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize = 2 * v11;
    if ( (unsigned int)(2 * v11) > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v12 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v12 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v13 = KeGetPrcb(v12);
      if ( v13 )
      {
        *(_OWORD *)(v13 + 26196) = *(_OWORD *)(v13 + 26112);
        *(_OWORD *)(v13 + 26212) = *(_OWORD *)(v13 + 26128);
        *(_OWORD *)(v13 + 26228) = *(_OWORD *)(v13 + 26144);
        *(_OWORD *)(v13 + 26244) = *(_OWORD *)(v13 + 26160);
        *(_OWORD *)(v13 + 26260) = *(_OWORD *)(v13 + 26176);
        *(_DWORD *)(v13 + 26276) = *(_DWORD *)(v13 + 26192);
      }
      ++v12;
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
