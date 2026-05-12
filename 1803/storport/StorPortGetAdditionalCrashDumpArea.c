/*
 * XREFs of StorPortGetAdditionalCrashDumpArea @ 0x1C0011758
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0062DC8 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C005E9A0 (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall StorPortGetAdditionalCrashDumpArea(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  v5 = 0;
  if ( !a1 )
    return 3221225473LL;
  v7 = 0LL;
  v8 = 0LL;
  v12 = 0LL;
  v9 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_6;
  v10 = *(_QWORD *)(a1 + 4368);
  if ( !v10 )
  {
    if ( *(_DWORD *)(a1 + 720) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v10 = *(_QWORD *)(a1 + 4400);
      else
        LODWORD(v10) = -1;
    }
    else
    {
      LODWORD(v10) = -1;
    }
  }
  result = StorAllocateContiguousMemory(
             (int)a1 + 696,
             a3,
             *(_QWORD *)(a1 + 4376),
             v10,
             *(_QWORD *)(a1 + 4384),
             *(_DWORD *)(a1 + 4360),
             0x80000000,
             (__int64)&v12);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v9 = v14;
    v8 = v13;
    v7 = v12;
LABEL_6:
    *(_QWORD *)(a2 + 176) = v8;
    result = v5;
    *(_QWORD *)(a2 + 168) = v7;
    *(_DWORD *)(a2 + 184) = v9;
  }
  return result;
}
