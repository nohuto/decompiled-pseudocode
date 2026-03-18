/*
 * XREFs of PspGetStandardHandleList @ 0x140581D48
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  unsigned int i; // ecx
  __int64 v6; // rax
  __int16 v7; // cx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h]
  __int64 v12; // [rsp+68h] [rbp+20h]

  v11 = 0LL;
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 1064);
  if ( v4 )
  {
    v7 = *((_WORD *)v4 + 4);
    if ( v7 == 332 || v7 == 452 )
      v3 = *v4;
  }
  v10 = v3;
  if ( v3 )
  {
    v12 = 0LL;
    v11 = *(unsigned int *)(v3 + 16) + 24LL;
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
    v12 = v9 + 32;
    if ( (((_BYTE)v9 + 32) & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( v10 )
      v6 = *(unsigned int *)(v11 + 4LL * i);
    else
      v6 = *(_QWORD *)(v12 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v6;
  }
  return 0LL;
}
