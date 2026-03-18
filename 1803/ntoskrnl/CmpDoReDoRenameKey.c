/*
 * XREFs of CmpDoReDoRenameKey @ 0x1407071BC
 * Callers:
 *     CmpDoReDoRecord @ 0x1407070E4 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwRenameKey @ 0x1401AA200 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRenameKey(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, &a2[2], 131078LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwRenameKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
