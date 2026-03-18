/*
 * XREFs of MiDoStackCopy @ 0x1400CFFD0
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 LeafPfnBuddy; // rdx
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a2;
  v12[1] = a3;
  v12[2] = a4;
  v12[0] = a2;
  if ( (unsigned int)MiIsPfnInline(v4) && ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 2 )
    LeafPfnBuddy = MiGetLeafPfnBuddy(v9, v6, v7, v8);
  else
    LeafPfnBuddy = -32LL;
  if ( LeafPfnBuddy == -32 || (*(_BYTE *)(v9 + 34) & 7) != 6 || *(_WORD *)(v9 + 32) != (_WORD)v7 )
  {
    *((_DWORD *)a2 + 8) = -1073740748;
    return MiJumpStackTarget(v12);
  }
  if ( LeafPfnBuddy != -16 || (struct _KTHREAD *)a2[3] == KeGetCurrentThread() )
    return MiJumpStackTarget(v12);
  result = KeExpandKernelStackAndCalloutInternal(
             (void (__fastcall *)(__int64))MiJumpStackTarget,
             (__int64)v12,
             24576,
             v8,
             0LL);
  if ( (int)result < 0 )
  {
    *((_DWORD *)a2 + 8) = result;
    return MiJumpStackTarget(v12);
  }
  return result;
}
