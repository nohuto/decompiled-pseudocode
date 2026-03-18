/*
 * XREFs of MiDoStackCopy @ 0x140034560
 * Callers:
 *     <none>
 * Callees:
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a2;
  v6 = (_QWORD *)(48 * *a2 - 0x58000000000LL);
  v12[1] = a3;
  v12[2] = a4;
  v7 = a2[6];
  v12[0] = a2;
  if ( !(unsigned int)MiIsPfnInline(v4, v6, *v6, v7)
    || ((*(_QWORD *)(v8 + 40) >> 54) & 7) != 2
    || (*(_BYTE *)(v8 + 34) & 7) != 6
    || *(_WORD *)(v8 + 32) != (v10 != 0) + 1
    || v9 == -5 )
  {
    *((_DWORD *)a2 + 8) = -1073740748;
    return MiJumpStackTarget(v12);
  }
  if ( v9 != -3 || a2[3] == ((unsigned __int64)KeGetCurrentThread() | 1) )
    return MiJumpStackTarget(v12);
  result = KeExpandKernelStackAndCalloutInternal((unsigned int)MiJumpStackTarget, (unsigned int)v12, 24576, 1, 0LL);
  if ( (int)result < 0 )
  {
    *((_DWORD *)a2 + 8) = result;
    return MiJumpStackTarget(v12);
  }
  return result;
}
