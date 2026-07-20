/*
 * XREFs of SmpMakeSystemManagedPagingFileDescriptor @ 0x1400101EC
 * Callers:
 *     SmpProcessPagefileDescriptor @ 0x140009250 (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     SmpInitializeManagedPagefileSupport @ 0x14000FFE0 (SmpInitializeManagedPagefileSupport.c)
 *     SmpRoundDownToPowerOf2 @ 0x140010390 (SmpRoundDownToPowerOf2.c)
 */

unsigned __int64 __fastcall SmpMakeSystemManagedPagingFileDescriptor(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rsi
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v17; // r10
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11

  SmpInitializeManagedPagefileSupport();
  v2 = SmpMemorySize;
  v3 = 3 * SmpMemorySize;
  if ( (unsigned __int64)(3 * SmpMemorySize) < 0x100000000LL )
    v3 = 0x100000000LL;
  v4 = SmpRoundDownToPowerOf2(v3 >> 4);
  v6 = v5 - 1;
  v7 = SmpDesiredPfSizeBasedOnRAM;
  v8 = 0x4000000LL;
  if ( v4 > 0x4000000 )
    v8 = v4;
  v9 = ~(v8 - 1) & (v8 + v6);
  v10 = 0x400000000LL;
  if ( !SmpNumberOfManagedPagefilesCreated )
    v7 = SmpDesiredPfSizeBasedOnHistory;
  if ( v7 < 0x4000000 )
    v7 = 0x4000000LL;
  v11 = v2 >> 4;
  if ( v11 < 0x400000000LL )
    v10 = v11;
  if ( v7 < v10 )
  {
    v7 = 0x400000000LL;
    if ( v11 < 0x400000000LL )
      v7 = v11;
  }
  v12 = SmpRoundDownToPowerOf2(v7 >> 4);
  v15 = v14;
  if ( v12 > v14 )
    v15 = v12;
  result = v9;
  if ( (~(v15 - 1) & (v15 + v13 - 1)) <= v9 )
    result = ~(v15 - 1) & (v15 + v13 - 1);
  v17 = result;
  if ( !SmpNumberOfManagedPagefilesCreated )
  {
    v18 = SmpDesiredPfSizeForApps;
    if ( result < SmpDesiredPfSizeForApps )
    {
      v19 = SmpRoundDownToPowerOf2((unsigned __int64)SmpDesiredPfSizeForApps >> 4);
      v21 = v20;
      if ( v19 > v20 )
        v21 = v19;
      result = ~(v21 - 1);
      v17 = result & (v21 + v18 - 1);
      *(_DWORD *)(a1 + 92) |= 8u;
    }
  }
  v22 = v17;
  if ( !SmpNumberOfPagefilesCreated )
  {
    v23 = SmpDesiredPfSizeForCrashDump;
    if ( v17 < SmpDesiredPfSizeForCrashDump )
    {
      v24 = SmpRoundDownToPowerOf2((unsigned __int64)SmpDesiredPfSizeForCrashDump >> 4);
      if ( v24 > v25 )
        v25 = v24;
      result = ~(v25 - 1);
      v22 = result & (v25 + v23 - 1);
      if ( SmpDumpType != 1 )
        v17 = result & (v25 + v23 - 1);
      if ( SmpTryHardForCrashDump == 1 )
        *(_DWORD *)(a1 + 92) |= 8u;
    }
  }
  *(_DWORD *)(a1 + 92) |= 2u;
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 56) = v22;
  return result;
}
