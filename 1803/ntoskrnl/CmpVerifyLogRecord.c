/*
 * XREFs of CmpVerifyLogRecord @ 0x1404895F0
 * Callers:
 *     CmpRmReDoPhase @ 0x1406FA31C (CmpRmReDoPhase.c)
 * Callees:
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140489584 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifyRenameKeyLogRecord @ 0x1404896D0 (CmpVerifyRenameKeyLogRecord.c)
 *     CmpVerifySetOrDeleteValueLogRecord @ 0x14048972C (CmpVerifySetOrDeleteValueLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x1404897B0 (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     HvBufferCheckSum @ 0x1405DEB38 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  unsigned __int16 v7; // ax
  unsigned int v8; // eax

  if ( a2 < 0x30 )
    return 3222863920LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > a2 || v4 < 0x30 )
    return 3222863920LL;
  v5 = HvBufferCheckSum(a1, v4);
  result = v5 != *(_DWORD *)a1 ? 0xC0190030 : 0;
  if ( *(_DWORD *)a1 == v5 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( v6 >= 0xA )
      return 3222863920LL;
    if ( !v6 )
      return 0LL;
    if ( v6 <= 2 )
    {
      result = CmpVerifyCreateOrDeleteKeyLogRecord(a1);
    }
    else if ( v6 <= 5 )
    {
      result = CmpVerifySetOrDeleteValueLogRecord(a1);
    }
    else
    {
      if ( v6 == 6 || v6 == 7 )
      {
        if ( v4 < 0x38 )
          return 3222863920LL;
        v7 = *(_WORD *)(a1 + 32);
        if ( (v7 & 1) != 0 )
          return 3222863920LL;
        v8 = v7 + 56;
        if ( v8 < 0x38 || v4 < v8 )
          return 3222863920LL;
        return 0LL;
      }
      if ( v6 == 8 )
        result = CmpVerifySetSecurityDescriptorLogRecord(a1);
      else
        result = CmpVerifyRenameKeyLogRecord(a1);
    }
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
