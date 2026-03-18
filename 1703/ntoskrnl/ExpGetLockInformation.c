/*
 * XREFs of ExpGetLockInformation @ 0x14071517C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExQuerySystemLockInformation @ 0x14041AE34 (ExQuerySystemLockInformation.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLockInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int SystemLockInformation; // ebx
  _DWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  struct _MDL *v8; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, &v8);
  if ( (int)result >= 0 )
  {
    SystemLockInformation = ExQuerySystemLockInformation(v7, a2, a3);
    ExUnlockUserBuffer(v8);
    return SystemLockInformation;
  }
  return result;
}
