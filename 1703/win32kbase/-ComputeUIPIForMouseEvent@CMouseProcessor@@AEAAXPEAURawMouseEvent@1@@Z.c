/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C00456A4
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
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
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rcx
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
    v7 = *(_QWORD *)((char *)a2 + 92);
    LOBYTE(v2) = *((_DWORD *)a2 + 25) != 0;
  }
  else
  {
    v6 = 0;
    if ( gptiCurrent && (v8 = *((_QWORD *)gptiCurrent + 47)) != 0 )
    {
      v7 = *(_QWORD *)(v8 + 824);
      v2 = *(_DWORD *)(v8 + 12) >> 31;
    }
    else
    {
      v7 = 0xFFFFFFFFLL;
    }
  }
  DWORD2(v9) = v2;
  *(_QWORD *)&v9 = v7;
  BYTE12(v9) = v6;
  *(_OWORD *)((char *)a2 + 108) = v9;
}
