/*
 * XREFs of ExpUpdateComPlusPackage @ 0x14071633C
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_14033DF00);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_14033DF00, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_14033C3B0, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
