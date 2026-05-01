/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4135c6296786dedba9398dc027119617___::Run @ 0x18001C8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4135c6296786dedba9398dc027119617___::Run()
{
  char *v0; // rcx

  v0 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[11].Ptr + 5;
  BYTE5(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) = 1;
  WakeByAddressAll(v0);
}
