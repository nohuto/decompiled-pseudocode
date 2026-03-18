/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x14022EF40
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14022BCEC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14022BDBC (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14022C7CC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14022CF7C (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpSetupPageListIteration @ 0x14022EE94 (HvlpSetupPageListIteration.c)
 */

NTSTATUS __fastcall HvlpStartSecurePageListIteration(int a1, unsigned int a2)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  int *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  _BOOL8 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]

  v2 = a2;
  if ( !HvlpSetupPageListIteration(a1, 1) )
    return -1073741823;
  v8 = v2;
  v7 = a1 == 0;
  result = VslpEnterIumSecureMode(2u, 2048LL, 0, (__int64)v6);
  if ( result < 0 )
  {
    v5 = &HvlpIteratorCrashdump;
    if ( !a1 )
      v5 = &HvlpIteratorHibernate;
    *((_QWORD *)v5 + 1) = 0LL;
    *v5 = 0;
  }
  return result;
}
