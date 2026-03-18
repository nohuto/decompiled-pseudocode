/*
 * XREFs of CmpDoReDoRecord @ 0x1406779DC
 * Callers:
 *     CmpRmReDoPhase @ 0x14066C234 (CmpRmReDoPhase.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F8A0 (ZwDeleteKey.c)
 *     CmpDoReDoCreateKey @ 0x140677878 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140677988 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRenameKey @ 0x140677AB4 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140677B08 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140677B70 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140677BD8 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140677C34 (CmpDoReDoSetValueExisting.c)
 *     CmpDoReOpenTransKey @ 0x140677CA0 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRecord(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x1C) == 0 )
  {
    switch ( *(_DWORD *)(a2 + 12) )
    {
      case 1:
        return (unsigned int)CmpDoReDoCreateKey(a1, a2);
      case 2:
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 0x10000LL, &KeyHandle);
        if ( v4 >= 0 )
        {
          v4 = ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        return (unsigned int)v4;
      case 3:
      case 4:
        return (unsigned int)CmpDoReDoSetValueExisting();
      case 5:
        return (unsigned int)CmpDoReDoDeleteValue(a1, (UNICODE_STRING *)a2);
      case 6:
        return (unsigned int)CmpDoReDoSetKeyUserFlags();
      case 7:
        return (unsigned int)CmpDoReDoSetLastWriteTime();
      case 8:
        return (unsigned int)CmpDoReDoSetSecurityDescriptor();
      case 9:
        return (unsigned int)CmpDoReDoRenameKey();
      default:
        return v2;
    }
  }
  return 0LL;
}
