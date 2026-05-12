/*
 * XREFs of StorPortReleaseAdditionalCrashDumpArea @ 0x1C001C838
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 * Callees:
 *     StorFreeContiguousMemory @ 0x1C005F914 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorPortReleaseAdditionalCrashDumpArea(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v2 = *(unsigned int *)(a2 + 184);
    if ( (_DWORD)v2 )
    {
      v4[0] = *(_QWORD *)(a2 + 168);
      v4[1] = *(_QWORD *)(a2 + 176);
      v5 = v2;
      return StorFreeContiguousMemory(v2, v4);
    }
  }
  return result;
}
