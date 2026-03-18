/*
 * XREFs of SmEtwEnableCallback @ 0x1405C22D0
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024F4B0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreRundown @ 0x1405C2328 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax

  if ( ControlCode <= 1 && (dword_1403FA51C = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_1403FA510, &SmGlobals, Level);
    if ( SmEtwEnabled(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v5 = SmKmStoreReferenceEx((__int64)&SmGlobals, i);
        if ( v5 )
          SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)&SmGlobals, v5);
      }
    }
  }
}
