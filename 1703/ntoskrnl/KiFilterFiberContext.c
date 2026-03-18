/*
 * XREFs of KiFilterFiberContext @ 0x1407DCB40
 * Callers:
 *     KeInitAmd64SpecificState @ 0x1407F6DF0 (KeInitAmd64SpecificState.c)
 * Callees:
 *     KdDisableDebugger @ 0x140168320 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1401FB920 (KdEnableDebugger.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     KiSwInterruptPresent @ 0x1408265EC (KiSwInterruptPresent.c)
 *     KeKeepData @ 0x1408268A4 (KeKeepData.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // ebp
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r14
  BOOL v6; // r15d
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rsi
  char v12; // bl
  unsigned __int64 v13; // rax
  unsigned __int128 v14; // rax
  int v15; // r10d
  unsigned __int64 v16; // rax
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // ecx
  __int64 *v20; // rax
  __int64 v21; // rdx

  v2 = KdDisableDebugger();
  KeKeepData(KiFilterFiberContext);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  v6 = v5 < 6;
  *(_QWORD *)&v4 = __rdtsc();
  v7 = (__ROR8__(v4, 3) ^ (unsigned __int64)v4) * (unsigned __int128)0x7010008004002001uLL;
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  v12 = sub_1407DDD64(v9 % 0xD, v11, v6 + 1, a1, 1);
  if ( v12 )
  {
    if ( v5 < 6 )
    {
      v13 = __rdtsc();
      v14 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
      v15 = ((unsigned __int64)v14 ^ *((_QWORD *)&v14 + 1)) % 0xD;
      do
      {
        v16 = __rdtsc();
        v17 = (__ROR8__(v16, 3) ^ v16) * (unsigned __int128)0x7010008004002001uLL;
        v18 = ((unsigned __int64)v17 ^ *((_QWORD *)&v17 + 1)) % 6;
      }
      while ( (_DWORD)v11 && (_DWORD)v18 == (_DWORD)v11 );
      v12 = sub_1407DDD64(v15, v18, v6 + 1, a1, 0);
    }
    if ( v12 )
    {
      if ( !qword_1403E3F40 && !a1 && (int)KiSwInterruptPresent() >= 0 )
        v12 = sub_1407DDD64(0, 7, 1, 0, 0);
      if ( v12 && !a1 )
      {
        if ( qword_1403417A8 )
          ExFreePool(qword_1403417A8);
        v19 = 24;
        v20 = &__20;
        v21 = 3LL;
        do
        {
          *v20 = 0LL;
          v19 -= 8;
          ++v20;
          --v21;
        }
        while ( v21 );
        for ( ; v19; --v19 )
        {
          *(_BYTE *)v20 = 0;
          v20 = (__int64 *)((char *)v20 + 1);
        }
      }
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v12 != 0;
}
