/*
 * XREFs of KeAddTriageDumpDataBlock @ 0x1402428F0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsAddressRangeValid @ 0x140185978 (KiIsAddressRangeValid.c)
 *     KiValidateTriageDumpDataArray @ 0x140244788 (KiValidateTriageDumpDataArray.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeAddTriageDumpDataBlock(
        PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
        ULONG MaxDataSize,
        PVOID Address,
        SIZE_T Size)
{
  ULONG v4; // ebx
  char *v6; // rsi
  ULONG NumBlocksUsed; // r9d
  char *v10; // rdx
  char *v11; // r8
  unsigned __int64 v12; // rcx

  v4 = 0;
  v6 = *(char **)&MaxDataSize;
  if ( !KtriageDumpDataArray
    || !(unsigned __int8)KiValidateTriageDumpDataArray(KtriageDumpDataArray, MaxDataSize, 0LL, Size)
    || !KiIsAddressRangeValid((__int64)v6, (__int64)Address) )
  {
    return -1073741811;
  }
  if ( Address )
  {
    NumBlocksUsed = KtriageDumpDataArray->NumBlocksUsed;
    v10 = (char *)Address + (_QWORD)v6;
    if ( NumBlocksUsed )
    {
      do
      {
        v11 = (char *)KtriageDumpDataArray->Blocks[v4].Address;
        v12 = (unsigned __int64)&v11[KtriageDumpDataArray->Blocks[v4].Size];
        if ( (unsigned __int64)v6 < v12 && v10 > v11 )
        {
          if ( v6 < v11 )
          {
            if ( (unsigned __int64)v10 <= v12 )
              v10 = (char *)KtriageDumpDataArray->Blocks[v4].Address;
          }
          else
          {
            if ( (unsigned __int64)v10 <= v12 )
              return 0;
            v6 = &v11[KtriageDumpDataArray->Blocks[v4].Size];
          }
        }
        ++v4;
      }
      while ( v4 < NumBlocksUsed );
    }
    if ( NumBlocksUsed == KtriageDumpDataArray->NumBlocksTotal )
      return -1073741789;
    if ( v10 - v6 <= (unsigned __int64)~KtriageDumpDataArray->VirtMemSize )
    {
      KtriageDumpDataArray->Blocks[v4].Address = v6;
      KtriageDumpDataArray->Blocks[v4].Size = v10 - v6;
      ++KtriageDumpDataArray->NumBlocksUsed;
      KtriageDumpDataArray->VirtMemSize += (_DWORD)v10 - (_DWORD)v6;
      return 0;
    }
    return -1073741811;
  }
  return 0;
}
