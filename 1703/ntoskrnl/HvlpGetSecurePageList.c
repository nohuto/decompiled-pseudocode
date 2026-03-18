/*
 * XREFs of HvlpGetSecurePageList @ 0x1401EC374
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401E9254 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401E93F0 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401EA5FC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401EADB8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, __int64 a2, void *a3, PHYSICAL_ADDRESS *a4, _QWORD *a5, _BYTE *a6)
{
  PHYSICAL_ADDRESS *v8; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v12; // edx
  _BYTE v14[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v15; // [rsp+28h] [rbp-A0h]
  LONGLONG v16; // [rsp+30h] [rbp-98h]
  __int64 v17; // [rsp+38h] [rbp-90h]
  char v18; // [rsp+40h] [rbp-88h]

  v8 = (PHYSICAL_ADDRESS *)&HvlpIteratorCrashdump;
  if ( !a1 )
    v8 = (PHYSICAL_ADDRESS *)&HvlpIteratorHibernate;
  if ( a3 )
    PhysicalAddress = MmGetPhysicalAddress(a3);
  else
    PhysicalAddress = v8[2];
  if ( a4 )
    a4->QuadPart = 0LL;
  *a6 = 0;
  v17 = a2;
  v15 = a1 == 0;
  v16 = PhysicalAddress.QuadPart / 4096;
  v12 = VslpEnterIumSecureMode(1, 2050LL, 0LL, (__int64)v14);
  if ( v12 >= 0 )
  {
    if ( a5 )
      *a5 = v17;
    *a6 = v18;
    if ( a4 )
    {
      if ( a3 )
        a4->QuadPart = (LONGLONG)a3;
      else
        *a4 = v8[1];
    }
  }
  return (unsigned int)v12;
}
