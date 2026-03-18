/*
 * XREFs of PspGetStandardHandleList @ 0x140599330
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // r9
  __int16 v6; // cx
  unsigned int i; // edx
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+18h]
  __int64 v13; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v4 = 0LL;
  v5 = *(__int64 **)(a1 + 1064);
  if ( v5 )
  {
    v6 = *((_WORD *)v5 + 4);
    if ( v6 == 332 || v6 == 452 )
      v4 = *v5;
  }
  v11 = v4;
  if ( v4 )
  {
    v13 = 0LL;
    v12 = *(unsigned int *)(v4 + 16) + 24LL;
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
    v13 = v10 + 32;
    if ( (((_BYTE)v10 + 32) & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( v11 )
      v8 = *(unsigned int *)(v12 + 4LL * i);
    else
      v8 = *(_QWORD *)(v13 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v8;
  }
  return 0LL;
}
