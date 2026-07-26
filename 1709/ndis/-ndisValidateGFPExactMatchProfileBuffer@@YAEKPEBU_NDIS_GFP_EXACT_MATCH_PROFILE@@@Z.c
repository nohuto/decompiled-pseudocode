/*
 * XREFs of ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C0076D38
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C0076F4C (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C00771C4 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidateGFPExactMatchProfileBuffer(unsigned int a1, const struct _NDIS_GFP_EXACT_MATCH_PROFILE *a2)
{
  char v4; // bl
  unsigned int HeaderGroupExactMatchProfileArrayOffset; // r14d
  unsigned int HeaderGroupExactMatchProfileArrayElementSize; // ebp
  unsigned int v7; // r9d
  int v8; // r8d
  unsigned int v9; // ecx
  UCHAR *v10; // rdx

  if ( a1 < 0x20 || a2->Header.Size < 0x20u || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v4 = 0;
  if ( !a2->Flags && a2->TableType == NdisGfpTableTypePacketDirect )
  {
    if ( a2->NumSupportedEntries )
    {
      HeaderGroupExactMatchProfileArrayOffset = a2->HeaderGroupExactMatchProfileArrayOffset;
      HeaderGroupExactMatchProfileArrayElementSize = a2->HeaderGroupExactMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             HeaderGroupExactMatchProfileArrayOffset,
             a2->HeaderGroupExactMatchProfileArrayNumElements,
             HeaderGroupExactMatchProfileArrayElementSize) )
      {
        v8 = 0;
        if ( v7 )
        {
          while ( 1 )
          {
            v9 = HeaderGroupExactMatchProfileArrayOffset + v8 * HeaderGroupExactMatchProfileArrayElementSize;
            v10 = &a2->Header.Type + v9;
            if ( a1 - v9 < 0x18
              || *((_WORD *)v10 + 1) < 0x18u
              || *v10 != 0x80
              || v10[1] != 1
              || *((_DWORD *)v10 + 1)
              || (*((_DWORD *)v10 + 2) & 0xFFFFF000) != 0
              || (*((_QWORD *)v10 + 2) & 0xFFFFFFFFFF000000uLL) != 0 )
            {
              break;
            }
            if ( ++v8 >= v7 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v4;
}
