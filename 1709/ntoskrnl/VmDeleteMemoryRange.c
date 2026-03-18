/*
 * XREFs of VmDeleteMemoryRange @ 0x14073D980
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     VmpRemoveMemoryRange @ 0x1402799A0 (VmpRemoveMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x14073DD48 (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmDeleteMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  volatile LONG *v9; // rbx
  unsigned __int64 v10; // rdi
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( (unsigned int)VmpValidateMemoryRangeParameters() )
    return 3221225485LL;
  v9 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16];
  if ( !v9 )
    return 3221225608LL;
  memset(v11, 0, sizeof(v11));
  v10 = a1 >> 12;
  v11[7] = v10 + a3 - 1;
  v11[6] = v10;
  v11[8] = a2 >> 12;
  v11[9] = (a2 >> 12) + a3 - 1;
  result = VmpRemoveMemoryRange(v9, v11, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
