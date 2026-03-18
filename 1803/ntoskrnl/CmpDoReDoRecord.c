/*
 * XREFs of CmpDoReDoRecord @ 0x1407070E4
 * Callers:
 *     CmpRmReDoPhase @ 0x1406FA31C (CmpRmReDoPhase.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401A8E60 (ZwDeleteKey.c)
 *     CmpDoReDoCreateKey @ 0x140706F88 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140707090 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRenameKey @ 0x1407071BC (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140707210 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140707278 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1407072E0 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x14070733C (CmpDoReDoSetValueExisting.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
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
