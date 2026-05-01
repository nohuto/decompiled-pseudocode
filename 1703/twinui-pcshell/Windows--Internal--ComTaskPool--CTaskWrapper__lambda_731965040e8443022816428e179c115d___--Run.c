/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731965040e8443022816428e179c115d___::Run @ 0x18001B990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731965040e8443022816428e179c115d___::Run()
{
  char *v0; // rcx

  v0 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[11].Ptr + 5;
  BYTE5(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
  WakeByAddressAll(v0);
}
