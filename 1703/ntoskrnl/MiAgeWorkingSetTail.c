/*
 * XREFs of MiAgeWorkingSetTail @ 0x1400D7E80
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     KxFlushMultipleTb @ 0x1400D8FB0 (KxFlushMultipleTb.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1, _KPROCESS *Process, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v7; // rdi
  unsigned int v8; // ebp
  _KPROCESS *v9; // rcx
  unsigned __int64 v10; // r8
  unsigned int v11; // esi
  unsigned int v12; // ebx
  unsigned __int8 v13; // r12
  int p_ActiveProcessors; // edx
  unsigned __int8 CurrentIrql; // bl
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int8 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  v5 = *(_QWORD *)(a1 + 136);
  v7 = *(_QWORD *)(v5 + 64);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 12);
    if ( v8 )
    {
      v9 = (_KPROCESS *)*(unsigned __int8 *)(v7 + 4);
      v10 = qword_14036C218;
      if ( ((unsigned __int8)v9 & 2) != 0 )
        goto LABEL_8;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[2].ActiveProcessors.Bitmap[13] )
      {
        if ( !Process->SecurePid )
          goto LABEL_8;
        v11 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 != 1 )
          goto LABEL_10;
      }
      v10 = -1LL;
LABEL_8:
      v11 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 == 1 )
      {
        v12 = 0;
LABEL_11:
        if ( *(_BYTE *)(v7 + 5) || *(_QWORD *)(v7 + 16) > v10 )
        {
          if ( ((unsigned __int8)v9 & 1) != 0 )
            result = KeFlushCurrentTbOnly(v11, Process, v10);
          else
            result = KeFlushTb(v11, v12);
          *(_BYTE *)(v7 + 5) = 0;
          goto LABEL_32;
        }
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          result = KeFlushMultipleRangeCurrentTb(v8, v7 + 24, v11);
LABEL_32:
          *(_BYTE *)(v7 + 4) &= ~8u;
          *(_DWORD *)(v7 + 12) = 0;
          *(_QWORD *)(v7 + 16) = 0LL;
          goto LABEL_33;
        }
        if ( v11 == 1 && (v9 = KeGetCurrentThread()->ApcState.Process, v9->SecurePid) )
        {
          v13 = 1;
        }
        else
        {
          v13 = 0;
          if ( !(unsigned int)KiFlushViaHypervisor(v9, Process, v10, a4) )
          {
LABEL_23:
            result = KxFlushMultipleTb(v8, v7 + 24, v11, v12);
LABEL_24:
            if ( VmTbFlushEnabled )
              result = VmFlushTb(v8, v7 + 24);
            if ( ExTbFlushActive )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              ExFlushTb(v8, v7 + 24, v11);
              result = CurrentIrql;
              __writecr8(CurrentIrql);
            }
            goto LABEL_32;
          }
        }
        KiPrepareFlushParameters(v11, &v18, &v17);
        if ( v12 )
          p_ActiveProcessors = 0;
        else
          p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        result = HvlFlushRangeListTb(v18, p_ActiveProcessors, v17, v13, v8, v7 + 24);
        if ( (_BYTE)result )
          goto LABEL_24;
        goto LABEL_23;
      }
LABEL_10:
      v12 = (((unsigned __int8)v9 & 8) != 0) + 1;
      goto LABEL_11;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(v5 + 84) )
  {
    result = MiFreeWsleList(*(_QWORD *)(a1 + 8), v5 + 72, 0);
    *(_DWORD *)(v5 + 84) = 0;
  }
  if ( *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(v5 + 6) = 1;
  return result;
}
