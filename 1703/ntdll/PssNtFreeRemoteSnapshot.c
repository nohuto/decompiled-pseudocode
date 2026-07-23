/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x180106810
 * Callers:
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall PssNtFreeRemoteSnapshot(HANDLE ProcessHandle, PVOID *a2)
{
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+54h] [rbp-ACh]
  HANDLE v9; // [rsp+3B8h] [rbp+2B8h]
  HANDLE v10; // [rsp+3D0h] [rbp+2D0h]
  HANDLE v11; // [rsp+3E8h] [rbp+2E8h]
  HANDLE v12; // [rsp+400h] [rbp+300h]
  HANDLE v13; // [rsp+420h] [rbp+320h]
  HANDLE SourceHandle; // [rsp+440h] [rbp+340h]

  result = ZwReadVirtualMemory(ProcessHandle, a2, &Buffer, 0x468uLL, &RegionSize);
  if ( result >= 0 )
  {
    if ( RegionSize == 1128 )
    {
      if ( Buffer == 1146311504 )
      {
        if ( (v8 & 1) == 0 || (v8 & 2) != 0 )
        {
          return -1073741637;
        }
        else
        {
          if ( (v8 & 4) != 0 )
          {
            BaseAddress = a2[113];
            RegionSize = 0LL;
            ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
          }
          if ( SourceHandle )
            ZwDuplicateObject(ProcessHandle, SourceHandle, 0LL, 0LL, 0, 0, 1u);
          if ( v13 )
            ZwDuplicateObject(ProcessHandle, v13, 0LL, 0LL, 0, 0, 1u);
          if ( v11 )
            ZwDuplicateObject(ProcessHandle, v11, 0LL, 0LL, 0, 0, 1u);
          if ( v12 )
            ZwDuplicateObject(ProcessHandle, v12, 0LL, 0LL, 0, 0, 1u);
          if ( v10 )
            ZwDuplicateObject(ProcessHandle, v10, 0LL, 0LL, 0, 0, 1u);
          if ( v9 )
            ZwDuplicateObject(ProcessHandle, v9, 0LL, 0LL, 0, 0, 1u);
          BaseAddress = a2;
          RegionSize = 0LL;
          ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
          return 0;
        }
      }
      else
      {
        return -1073741816;
      }
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
