/*
 * XREFs of ExpGetLockInformation @ 0x1407BB0FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     ExQuerySystemLockInformation @ 0x140487610 (ExQuerySystemLockInformation.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLockInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int SystemLockInformation; // ebx
  _DWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    SystemLockInformation = ExQuerySystemLockInformation(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return SystemLockInformation;
  }
  return result;
}
