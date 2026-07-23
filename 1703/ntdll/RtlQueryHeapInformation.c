/*
 * XREFs of RtlQueryHeapInformation @ 0x180005740
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     sub_1800F3854 @ 0x1800F3854 (sub_1800F3854.c)
 *     sub_1800FEA80 @ 0x1800FEA80 (sub_1800FEA80.c)
 * Callees:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
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
    if ( HeapInformationLength < 8 )
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    else
    {
      *(_QWORD *)HeapInformation = &unk_1801586B0;
      v6 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
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
          return sub_180005870(HeapInformation, HeapInformationLength, ReturnLength);
      case 4:
        return sub_180006F80(HeapInformation, HeapInformationLength, ReturnLength);
      case 5:
        return sub_1800FEF2C(HeapInformation, HeapInformationLength, ReturnLength);
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
