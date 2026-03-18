/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C001456C
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::ComputeUIPIForMouseEvent(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  int v2; // esi
  __int64 v3; // rdi
  bool v5; // bl
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v3 + 40);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 && *((_BYTE *)a2 + 104) )
  {
    v6 = 1;
    v8 = *(_QWORD *)((char *)a2 + 92);
    LOBYTE(v2) = *((_DWORD *)a2 + 25) != 0;
  }
  else
  {
    v6 = 0;
    if ( gptiCurrent )
    {
      v7 = *((_QWORD *)gptiCurrent + 50);
      v8 = *(_QWORD *)(v7 + 832);
      v2 = *(_DWORD *)(v7 + 12) >> 31;
    }
    else
    {
      v8 = 0xFFFFFFFFLL;
    }
  }
  DWORD2(v9) = v2;
  *(_QWORD *)&v9 = v8;
  BYTE12(v9) = v6;
  *(_OWORD *)((char *)a2 + 108) = v9;
}
