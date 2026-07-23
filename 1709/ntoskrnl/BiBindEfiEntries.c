/*
 * XREFs of BiBindEfiEntries @ 0x14077A784
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14077A9B8 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x140779A48 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14077A474 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x14077A8C4 (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x14077B3C8 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14077B8DC (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14077CA00 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, __int64 *a2)
{
  __int64 v2; // rbx
  NTSTATUS updated; // edi
  int v6; // eax
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  updated = 0;
  if ( (__int64 *)*a2 != a2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 48);
      if ( (v6 & 0x10) != 0 )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x24) == 0x20 )
        {
          if ( (int)BiDeleteBootEntry((PUNICODE_STRING)*(unsigned int *)(v2 + 32)) < 0 )
            goto LABEL_20;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(BcdStoreHandle, v2);
        if ( updated < 0 || (updated = BiUpdateBcdObject(BcdStoreHandle, v2), updated < 0) )
        {
LABEL_22:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)updated);
          return (unsigned int)updated;
        }
      }
      else if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          updated = BcdOpenObject(BcdStoreHandle, (const GUID *)(v2 + 16), &BcdObjectHandle);
          if ( updated < 0 )
            goto LABEL_22;
          BcdDeleteObject(BcdObjectHandle);
          *(_DWORD *)(v2 + 48) &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v2) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v2);
        }
      }
LABEL_20:
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == a2 )
        return (unsigned int)updated;
    }
    if ( (v6 & 1) == 0 )
      goto LABEL_20;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", *(unsigned int *)(v2 + 32));
    if ( (int)BiDeleteBootEntry((PUNICODE_STRING)*(unsigned int *)(v2 + 32)) < 0 )
      goto LABEL_20;
    *(_DWORD *)(v2 + 48) &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder(v2);
    goto LABEL_20;
  }
  return (unsigned int)updated;
}
