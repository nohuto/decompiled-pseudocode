/*
 * XREFs of PpmCheckComputeEnergy @ 0x140046D20
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmPerfGetCurrentFrequency @ 0x140167AD8 (PpmPerfGetCurrentFrequency.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PpmEventComputeEnergy @ 0x140235514 (PpmEventComputeEnergy.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned int v0; // edi
  unsigned int v2; // ebx
  __int64 Prcb; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  int CurrentFrequency; // eax
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h]
  _QWORD v14[2]; // [rsp+40h] [rbp-30h]
  unsigned __int16 *v15[2]; // [rsp+50h] [rbp-20h] BYREF
  __int16 v16; // [rsp+60h] [rbp-10h]
  unsigned int v17; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h]
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  int v20; // [rsp+B8h] [rbp+48h]

  v0 = 0;
  if ( PopComputeEnergy )
  {
    v16 = 0;
    v18 = 0x4000000040LL;
    v14[0] = 0LL;
    v14[1] = 0LL;
    v13[0] = 0LL;
    v13[1] = 0LL;
    v15[1] = (unsigned __int16 *)qword_1403E42B8[0];
    v15[0] = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v15) )
    {
      v2 = v17;
      Prcb = KeGetPrcb(v17);
      v4 = *(unsigned __int8 *)(Prcb + 23986);
      v14[v4] += *(_QWORD *)(Prcb + 24392);
      v13[v4] += *(_QWORD *)(Prcb + 24400);
      *((_DWORD *)&v18 + v4) = v2;
      CurrentFrequency = PpmPerfGetCurrentFrequency(Prcb, 0LL, v5, v4);
      *(&v20 + v7) = CurrentFrequency;
      *(_QWORD *)(v8 + 24392) = 0LL;
      *(_QWORD *)(v8 + 24400) = 0LL;
    }
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      v11 = *(_DWORD *)((char *)&v18 + v9);
      if ( v11 != 64 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))PopComputeEnergy)(
          v0,
          v14[v10],
          v13[v10],
          *(unsigned int *)((char *)&v20 + v9),
          &v19);
        PpmEventComputeEnergy(v0, v19);
        v12 = KeGetPrcb(v11);
        *(_QWORD *)(v12 + 24384) += v19;
      }
      ++v0;
      v9 += 4LL;
      ++v10;
    }
    while ( v0 < 2 );
  }
  return 1;
}
