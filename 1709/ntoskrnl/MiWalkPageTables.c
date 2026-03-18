/*
 * XREFs of MiWalkPageTables @ 0x14009CD60
 * Callers:
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiCombineWorkingSet @ 0x1400CF650 (MiCombineWorkingSet.c)
 *     MmRemoveExecuteGrants @ 0x140130B50 (MmRemoveExecuteGrants.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14021CEDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021ECC4 (MmUpdateOldWorkingSetPages.c)
 *     MiCreateInitialSystemWsles @ 0x140857248 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiInitializeWalkBounds @ 0x14009F1A0 (MiInitializeWalkBounds.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiWalkPageTables(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  int v4; // r8d
  unsigned int v5; // r14d
  unsigned int v6; // eax
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // r9d
  unsigned __int64 *v10; // rsi
  unsigned int v11; // r15d
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 v31; // [rsp+38h] [rbp-60h]
  _QWORD v32[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+8h]
  void (__fastcall *v34)(__int64); // [rsp+A8h] [rbp+10h]

  if ( !*(_BYTE *)(a1 + 6) )
    *(_BYTE *)(a1 + 6) = 15;
  v34 = *(void (__fastcall **)(__int64))(a1 + 136);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 172LL));
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
      *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF70uLL;
    v3 = *(_QWORD *)(a1 + 32);
    v4 = -1;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v3 = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    else
    {
      do
      {
        ++v4;
        v3 = (__int64)(v3 << 25) >> 16;
      }
      while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL );
    }
    v28 = v3;
    v5 = 1;
    v29 = -1LL;
    if ( v4 != -1 )
    {
      v30 = 0LL;
      v31 = v3 - 1;
      v5 = 2;
    }
  }
  else
  {
    v5 = 1;
    v28 = *(_QWORD *)(a1 + 16);
    v29 = *(_QWORD *)(a1 + 24);
  }
  v6 = MiInitializeWalkBounds(a1, v32);
  v9 = 0;
  v10 = &v28;
  v33 = 0;
  v11 = v6;
  v12 = 3;
  do
  {
    v13 = 0;
    if ( v11 )
    {
      v14 = *v10;
      v15 = v10[1];
      do
      {
        v16 = v14;
        v17 = v15;
        v18 = v32[2 * v13 + 1];
        if ( v14 <= v18 )
        {
          v19 = v32[2 * v13];
          if ( v15 >= v19 )
          {
            if ( v14 < v19 )
              v16 = v32[2 * v13];
            if ( v15 > v18 )
              v17 = v32[2 * v13 + 1];
            v20 = v7 + (v8 & (v16 >> 9));
            *(_QWORD *)(a1 + 56) = v20;
            v21 = v7 + (v8 & (v17 >> 9));
            *(_QWORD *)(a1 + 64) = v21;
            v22 = v7 + (v8 & (v20 >> 9));
            *(_QWORD *)(a1 + 72) = v22;
            v23 = v7 + (v8 & (v21 >> 9));
            *(_QWORD *)(a1 + 80) = v23;
            v24 = v7 + (v8 & (v22 >> 9));
            *(_QWORD *)(a1 + 88) = v24;
            v25 = v7 + (v8 & (v23 >> 9));
            *(_QWORD *)(a1 + 96) = v25;
            v26 = v7 + (v8 & (v24 >> 9));
            *(_QWORD *)(a1 + 104) = v26;
            *(_QWORD *)(a1 + 112) = v7 + (v8 & (v25 >> 9));
            v12 = MiWalkPageTablesRecursively(a1, v26, 3LL);
            if ( v34 )
              v34(a1);
            if ( v12 - 2 <= 1 )
              return v12;
            v7 = 0xFFFFF68000000000uLL;
            v8 = 0x7FFFFFFFF8LL;
          }
        }
        ++v13;
      }
      while ( v13 < v11 );
      v9 = v33;
    }
    ++v9;
    v10 += 2;
    v33 = v9;
  }
  while ( v9 < v5 );
  return v12;
}
