/*
 * XREFs of sub_1800865E8 @ 0x1800865E8
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x1800A5E70 (ZwSetInformationObject.c)
 */

NTSTATUS __fastcall sub_1800865E8(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v4 = 0;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &v4, 4u);
    ObjectInformation = 0;
    ZwSetInformationObject(ThreadInformation, ObjectHandleFlagInformation, &ObjectInformation, 2u);
    ZwClose(ThreadInformation);
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
