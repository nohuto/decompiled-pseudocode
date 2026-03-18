/*
 * XREFs of MiDoStackCopy @ 0x140003EE0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  __int64 v4; // rcx
  __int16 v6; // r8
  __int64 v7; // r10
  __int64 LeafPfnBuddy; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  BugCheckParameter3[0] = a2;
  if ( (unsigned int)MiIsPfnInline(v4) && ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 2 )
    LeafPfnBuddy = MiGetLeafPfnBuddy(v7);
  else
    LeafPfnBuddy = -32LL;
  if ( LeafPfnBuddy == -32 || (*(_BYTE *)(v7 + 34) & 7) != 6 || *(_WORD *)(v7 + 32) != v6 )
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  if ( LeafPfnBuddy != -16 || *(struct _KTHREAD **)(a2 + 24) == KeGetCurrentThread() )
    return MiJumpStackTarget(BugCheckParameter3);
  result = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStackTarget, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 32) = result;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  return result;
}
