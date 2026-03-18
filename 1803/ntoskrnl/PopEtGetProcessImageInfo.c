/*
 * XREFs of PopEtGetProcessImageInfo @ 0x14055A2DC
 * Callers:
 *     PopEtGetProcessAppId @ 0x140559898 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x14006CE70 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall PopEtGetProcessImageInfo(__int64 a1, __int64 a2)
{
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v4; // rax

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1740) & 1) == 0 )
  {
    ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      if ( v4 )
      {
        *(_DWORD *)a2 = v4->OptionalHeader.CheckSum;
        *(_DWORD *)(a2 + 4) = v4->FileHeader.TimeDateStamp;
      }
    }
  }
  return 0LL;
}
