/*
 * XREFs of ExpGetObjectInformation @ 0x1407543C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1406F01B4 (ObGetObjectInformation.c)
 */

__int64 __fastcall ExpGetObjectInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int ObjectInformation; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v8, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    ObjectInformation = ObGetObjectInformation(a1, v8, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return ObjectInformation;
  }
  return result;
}
