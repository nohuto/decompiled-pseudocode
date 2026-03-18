/*
 * XREFs of IopStartApcHardError @ 0x14068AC20
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

void __fastcall IopStartApcHardError(PIRP *a1)
{
  HANDLE v2; // [rsp+68h] [rbp+10h] BYREF

  if ( (int)PsCreateSystemThreadEx((__int64)&v2, 0, 0LL, 0LL, 0LL, (__int64)IopApcHardError, (__int64)a1, 0LL, 0LL) >= 0 )
  {
    ZwClose(v2);
  }
  else
  {
    IofCompleteRequest(a1[4], 1);
    ExFreePoolWithTag(a1, 0);
  }
}
