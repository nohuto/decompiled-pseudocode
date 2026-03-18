/*
 * XREFs of PopProcessorInformation @ 0x14044D5F4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PpmPerfGetCurrentState @ 0x140031BD8 (PpmPerfGetCurrentState.c)
 *     KeQueryGroupAffinity @ 0x140031C80 (KeQueryGroupAffinity.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r14d
  __int64 Prcb; // rbp
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  KAFFINITY GroupAffinity; // [rsp+30h] [rbp-58h]
  unsigned __int16 *v18[2]; // [rsp+40h] [rbp-48h] BYREF
  USHORT v19; // [rsp+50h] [rbp-38h]
  ULONG v20; // [rsp+A0h] [rbp+18h] BYREF

  GroupAffinity = KeQueryGroupAffinity(a3);
  v7 = 0;
  v8 = ((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  v9 = (0x101010101010101LL * ((v8 + (v8 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (unsigned int)(24 * v9) > 0x600 )
  {
    if ( a4 )
      *a4 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v9 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      v18[1] = (unsigned __int16 *)GroupAffinity;
      v19 = a3;
      v18[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v20, v18) && v11 < (unsigned int)v9 )
      {
        Prcb = KeGetPrcb(v20);
        *(_DWORD *)(a1 + 24LL * v11) = *(unsigned __int8 *)(Prcb + 209);
        PpmPerfGetCurrentState(Prcb, a1 + 8 + 24LL * v11, (_DWORD *)(a1 + 12 + 24LL * v11), 0LL, 0LL, 0LL);
        v13 = *(_QWORD *)(Prcb + 24304);
        if ( v13 )
          v14 = *(_DWORD *)(v13 + 316);
        else
          v14 = *(_DWORD *)(Prcb + 68);
        *(_DWORD *)(a1 + 24LL * v11 + 4) = v14;
        v15 = *(_QWORD *)(Prcb + 23936);
        if ( v15 )
        {
          *(_DWORD *)(a1 + 24LL * v11 + 16) = *(_DWORD *)(v15 + 28);
          *(_DWORD *)(a1 + 24LL * v11 + 20) = *(_DWORD *)(v15 + 12) + 1;
        }
        else
        {
          *(_QWORD *)(a1 + 24LL * v11 + 16) = 0LL;
        }
        ++v11;
      }
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
    *a4 = 24 * v9;
  }
  return v7;
}
