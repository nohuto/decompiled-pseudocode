/*
 * XREFs of PdcPoQueryExpectedStandbyTime @ 0x1406FF250
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoQueryExpectedStandbyTime(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = 0LL;
  result = (unsigned int)(PopPdcLastCsEnterReason - 5);
  if ( (unsigned int)result <= 1 || PopPdcLastCsEnterReason == 12 )
  {
    PopAcquirePolicyLock();
    if ( dword_14036570C == -1 || dword_140365708 >= (unsigned int)dword_14036570C )
    {
      if ( ((dword_14036570C + 1) & 0xFFFFFFFE) == 0 )
        v1 = -1LL;
    }
    else
    {
      v1 = (unsigned int)PopIdleScanInterval + (unsigned __int64)(unsigned int)(dword_14036570C - dword_140365708);
    }
    result = PopReleasePolicyLock();
  }
  *a1 = v1;
  return result;
}
