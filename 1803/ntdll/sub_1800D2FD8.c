/*
 * XREFs of sub_1800D2FD8 @ 0x1800D2FD8
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __fastcall sub_1800D2FD8(PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS result; // eax
  unsigned int v3; // edi
  ULONG Flags; // ecx
  __int128 v5; // [rsp+70h] [rbp-39h]
  __int128 v6; // [rsp+90h] [rbp-19h]
  __int128 v7; // [rsp+A0h] [rbp-9h]
  __int128 v8; // [rsp+C0h] [rbp+17h]
  __int128 v9; // [rsp+D0h] [rbp+27h]
  ULONG_PTR RegionSize; // [rsp+110h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+118h] [rbp+6Fh] BYREF

  BaseAddress = (char *)Buffer + Buffer->ViewSize;
  v5 = *((_OWORD *)BaseAddress + 4);
  v6 = *((_OWORD *)BaseAddress + 6);
  v7 = *((_OWORD *)BaseAddress + 7);
  v8 = *((_OWORD *)BaseAddress + 9);
  v9 = *((_OWORD *)BaseAddress + 10);
  RegionSize = *((_QWORD *)BaseAddress + 9);
  if ( *((_QWORD *)&v5 + 1) > Buffer->ViewSize || *((_QWORD *)&v5 + 1) < 0xD0uLL )
    return -1073741823;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( result >= 0 )
  {
    Buffer->OffsetFree = 208LL;
    v3 = RegionSize - 208;
    if ( RtlCommitDebugInfo_0(Buffer, (unsigned int)(RegionSize - 208)) )
    {
      memmove(&Buffer[1], (char *)BaseAddress + 208, v3);
      Flags = Buffer->Flags;
      if ( (Flags & 0x21C) != 0 )
      {
        Buffer->Heaps = (PVOID)v7;
        Buffer->ProcessHeap = (PVOID)*((_QWORD *)&v8 + 1);
      }
      if ( (Flags & 0x41) != 0 )
        Buffer->Modules = (PRTL_PROCESS_MODULES)v6;
      if ( (Flags & 0x20) != 0 )
        Buffer->Locks = (PRTL_PROCESS_LOCKS)*((_QWORD *)&v7 + 1);
      if ( (Flags & 2) != 0 )
        Buffer->BackTraces = (PRTL_PROCESS_BACKTRACES)*((_QWORD *)&v6 + 1);
      if ( (Flags & 0x80u) != 0 )
        Buffer->VerifierOptions = (PRTL_PROCESS_VERIFIER_OPTIONS)v8;
      if ( (Flags & 0xC00) != 0 )
        Buffer->CriticalSectionOwnerThread = (HANDLE)*((_QWORD *)&v9 + 1);
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
