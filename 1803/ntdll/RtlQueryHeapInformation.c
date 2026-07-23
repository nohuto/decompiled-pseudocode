/*
 * XREFs of RtlQueryHeapInformation @ 0x18005FC60
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     sub_1800F0948 @ 0x1800F0948 (sub_1800F0948.c)
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 * Callees:
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r10d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength >= 8 )
    {
      *(_QWORD *)HeapInformation = &unk_1801597B0;
      v6 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    return v6;
  }
  else if ( HeapInformationClass )
  {
    switch ( HeapInformationClass )
    {
      case 2:
        if ( HeapInformationLength < 0x58 )
          return -1073741811;
        else
          return sub_18005FD84(HeapInformation, HeapInformationLength, ReturnLength);
      case 4:
        return sub_180060EC8(HeapInformation, HeapInformationLength, ReturnLength);
      case 5:
        return sub_1800FD780(HeapInformation, HeapInformationLength, ReturnLength);
      default:
        return -1073741811;
    }
  }
  else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    if ( HeapInformationLength >= 4 )
    {
      if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        *(_DWORD *)HeapInformation = 2;
      else
        *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 387);
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return 0;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
