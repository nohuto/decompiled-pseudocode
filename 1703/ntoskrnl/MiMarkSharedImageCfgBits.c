/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x140063450
 * Callers:
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 * Callees:
 *     MiIsCfgBitMapPageShared @ 0x1400637A0 (MiIsCfgBitMapPageShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiUnlockNestedVad @ 0x14049B404 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14049B43C (MiLockNestedVad.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r13
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  KIRQL v12; // bp
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbx
  int IsCfgBitMapPageShared; // eax
  int v16; // edi
  volatile signed __int32 *p_ProfileListHead; // rcx
  __int64 v18; // rdi
  int v19; // ebp
  LONG *v20; // rdi
  volatile LONG *v21; // rax
  unsigned int v23; // r15d
  unsigned int v24; // edi
  volatile LONG *SharedVm; // rax
  unsigned __int64 v26; // [rsp+40h] [rbp-78h]
  _BYTE v27[4]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v28[4]; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-68h]
  __int64 v30; // [rsp+58h] [rbp-60h]
  __int64 v31[2]; // [rsp+60h] [rbp-58h] BYREF
  int v32; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = **(_QWORD **)(**(_QWORD **)(a3 + 72) + 96LL);
  if ( v4 )
    v4 += 72LL;
  v5 = a1[2];
  v6 = (unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32;
  v7 = (unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32;
  v30 = *(_QWORD *)(v4 + 8);
  v8 = (*(unsigned int *)(a3 + 24) | v7) << 12;
  v9 = 2 * (((((*(unsigned int *)(a3 + 28) | v6) + 1) << 12) - v8) >> 4);
  v10 = *a1 + ((2 * (v8 >> 4)) >> 3);
  v26 = v10;
  v11 = v9 >> 3;
  MiLockNestedVad(v5);
  if ( (*(_DWORD *)(v5 + 48) & 0x80000) != 0 )
  {
    MiUnlockNestedVad(v5);
    return 3221225738LL;
  }
  else
  {
    v12 = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
    v29 = v10 + v11;
    v13 = (v10 + v11) | 0xFFF;
    v31[0] = 0LL;
    v14 = v10 & 0xFFFFFFFFFFFFF000uLL;
    v31[1] = 0LL;
    v32 = 0;
    if ( (v10 & 0xFFFFFFFFFFFFF000uLL) <= (v29 | 0xFFF) )
    {
      do
      {
        IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v14, v5, v12);
        v16 = IsCfgBitMapPageShared;
        if ( IsCfgBitMapPageShared != 1 )
        {
          if ( (unsigned int)(IsCfgBitMapPageShared - 2) > 1 )
          {
            if ( v14 < v10 )
              v23 = v10 - v14;
            else
              v23 = 0;
            if ( v14 + 4096 <= v29 )
            {
              v24 = 4096 - v23;
            }
            else
            {
              v24 = v29 - v14 - v23;
              if ( (_DWORD)v29 - (_DWORD)v14 == v23 )
                break;
            }
            SharedVm = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
            ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
            __writecr8(v12);
            v19 = MiCopyToCfgBitMap(
                    (void *)(v14 + v23),
                    (v23 + (_DWORD)v14 - (_DWORD)v26) >> 1 << 7,
                    (__int64)v31,
                    v24,
                    0);
            if ( v19 < 0 )
              goto LABEL_20;
            v10 = v26;
            v12 = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
          }
          else
          {
            if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
              p_ProfileListHead = &dword_14036D4C0;
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
            __writecr8(v12);
            if ( v16 == 3 )
            {
              v18 = v14 | 0x1FFFFF;
              if ( (v14 | 0x1FFFFF) > v13 )
                v18 = v13;
            }
            else
            {
              v18 = v14 | 0xFFF;
            }
            v19 = MiSetProtectionOnSection((_DWORD)Process, v5, v14, v18, 2, 0, (__int64)v28, (__int64)v27);
            if ( v19 < 0 )
              goto LABEL_20;
            v14 = v18 - 4095;
            if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
              v20 = &dword_14036D4C0;
            else
              v20 = (LONG *)&Process[2].ProfileListHead;
            v12 = ExAcquireSpinLockShared(v20);
            if ( v20[1] )
              _InterlockedExchange(v20 + 1, 0);
          }
        }
        v14 += 4096LL;
      }
      while ( v14 <= v13 );
    }
    v21 = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
    ExReleaseSpinLockSharedFromDpcLevel(v21);
    __writecr8(v12);
    v19 = 0;
LABEL_20:
    MiUnlockNestedVad(v5);
    return (unsigned int)v19;
  }
}
