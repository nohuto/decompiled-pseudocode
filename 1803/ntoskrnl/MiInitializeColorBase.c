/*
 * XREFs of MiInitializeColorBase @ 0x1400494D0
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiInitializeColorBaseSession @ 0x14007F688 (MiInitializeColorBaseSession.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiInitializeColorBase(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int16 *v3; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return MiInitializeColorBaseSession(v1);
  if ( v2 > 0x7FFFFFFEFFFFLL
    && (v2 > qword_1403CBB70 || v2 < qword_1403CD100)
    && (v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  }
  return MiInitializePageColorBase(v3, 0LL, v1);
}
