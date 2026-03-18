/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x1400A5EA0
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1404D20E8 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsCfgBitMapPageShared @ 0x1400A6230 (MiIsCfgBitMapPageShared.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     MiUnlockNestedVad @ 0x1404D4DA0 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1404D4DD8 (MiLockNestedVad.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r13
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  int IsCfgBitMapPageShared; // eax
  int v17; // edi
  volatile signed __int32 *p_ProfileListHead; // rcx
  unsigned __int64 v19; // rdi
  int v20; // ebp
  LONG *v21; // rdi
  signed __int32 v22; // ett
  LONG *v23; // rax
  unsigned int v25; // r15d
  unsigned int v26; // edi
  LONG *SharedVm; // rax
  unsigned __int64 v28; // [rsp+40h] [rbp-78h]
  int v29; // [rsp+48h] [rbp-70h] BYREF
  int v30; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-68h]
  __int64 v32; // [rsp+58h] [rbp-60h]
  __int64 v33[2]; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = **(_QWORD **)(**(_QWORD **)(a3 + 72) + 96LL);
  if ( v4 )
    v5 = v4 + 80;
  else
    v5 = 8LL;
  v6 = a1[2];
  v7 = (unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32;
  v8 = (unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32;
  v32 = *(_QWORD *)v5;
  v9 = (*(unsigned int *)(a3 + 24) | v8) << 12;
  v10 = 2 * (((((*(unsigned int *)(a3 + 28) | v7) + 1) << 12) - v9) >> 4);
  v11 = *a1 + ((2 * (v9 >> 4)) >> 3);
  v28 = v11;
  v12 = v10 >> 3;
  MiLockNestedVad(v6);
  if ( (*(_DWORD *)(v6 + 48) & 0x80000) != 0 )
  {
    MiUnlockNestedVad(v6);
    return 3221225738LL;
  }
  else
  {
    CurrentIrql = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
    v31 = v11 + v12;
    v14 = (v11 + v12) | 0xFFF;
    v33[0] = 0LL;
    v15 = v11 & 0xFFFFFFFFFFFFF000uLL;
    v33[1] = 0LL;
    v34 = 0;
    if ( (v11 & 0xFFFFFFFFFFFFF000uLL) <= (v31 | 0xFFF) )
    {
      do
      {
        IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v15, v6, CurrentIrql);
        v17 = IsCfgBitMapPageShared;
        if ( IsCfgBitMapPageShared != 1 )
        {
          if ( (unsigned int)(IsCfgBitMapPageShared - 2) > 1 )
          {
            if ( v15 < v11 )
              v25 = v11 - v15;
            else
              v25 = 0;
            if ( v15 + 4096 <= v31 )
            {
              v26 = 4096 - v25;
            }
            else
            {
              v26 = v31 - v15 - v25;
              if ( (_DWORD)v31 - (_DWORD)v15 == v25 )
                break;
            }
            SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
            ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
            __writecr8(CurrentIrql);
            v20 = MiCopyToCfgBitMap(
                    (void *)(v15 + v25),
                    (v25 + (_DWORD)v15 - (_DWORD)v28) >> 1 << 7,
                    (__int64)v33,
                    v26,
                    0);
            if ( v20 < 0 )
              goto LABEL_23;
            v11 = v28;
            CurrentIrql = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
          }
          else
          {
            if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
              p_ProfileListHead = &dword_140389780;
            else
              p_ProfileListHead = (volatile signed __int32 *)&Process[2].ProfileListHead;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(p_ProfileListHead, retaddr);
            }
            else
            {
              _InterlockedAnd(p_ProfileListHead, 0xBFFFFFFF);
              _InterlockedDecrement(p_ProfileListHead);
            }
            __writecr8(CurrentIrql);
            if ( v17 == 3 )
            {
              v19 = v15 | 0x1FFFFF;
              if ( (v15 | 0x1FFFFF) > v14 )
                v19 = v14;
            }
            else
            {
              v19 = v15 | 0xFFF;
            }
            v20 = MiSetProtectionOnSection((__int64)Process, v6, v15, v19, 2u, 0, &v30, &v29);
            if ( v20 < 0 )
              goto LABEL_23;
            v15 = v19 - 4095;
            if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
              v21 = &dword_140389780;
            else
              v21 = (LONG *)&Process[2].ProfileListHead;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v21, CurrentIrql);
            }
            else
            {
              _m_prefetchw(v21);
              v22 = *v21 & 0x7FFFFFFF;
              if ( v22 != _InterlockedCompareExchange(v21, v22 + 1, v22) )
                ExpWaitForSpinLockSharedAndAcquire(v21, CurrentIrql);
            }
            if ( v21[1] )
              _InterlockedExchange(v21 + 1, 0);
          }
        }
        v15 += 4096LL;
      }
      while ( v15 <= v14 );
    }
    v23 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    ExReleaseSpinLockSharedFromDpcLevel(v23);
    __writecr8(CurrentIrql);
    v20 = 0;
LABEL_23:
    MiUnlockNestedVad(v6);
    return (unsigned int)v20;
  }
}
