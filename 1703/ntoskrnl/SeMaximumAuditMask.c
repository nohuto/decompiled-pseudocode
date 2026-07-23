/*
 * XREFs of SeMaximumAuditMask @ 0x14024687C
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406F9340 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 */

unsigned __int64 __fastcall SeMaximumAuditMask(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int8 v10; // cl
  int v11; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 0;
  if ( a1 )
  {
    result = *(unsigned __int16 *)(a1 + 4);
    if ( (_WORD)result )
    {
      v8 = a1 + 8;
      v9 = (unsigned __int16)result;
      do
      {
        v10 = *(_BYTE *)(v8 + 1);
        if ( (v10 & 8) == 0 && (*(_BYTE *)v8 == 2 || *(_BYTE *)v8 == 13) )
        {
          v11 = a2 & *(_DWORD *)(v8 + 4);
          if ( ((v10 >> 6) & (v11 != 0)) != 0
            && SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a3 + 232), 0LL, (void *)(v8 + 8), 1, 0, 0) )
          {
            *a4 |= v11;
          }
        }
        result = *(unsigned __int16 *)(v8 + 2);
        v8 += result;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
