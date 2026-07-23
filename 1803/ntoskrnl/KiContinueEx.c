/*
 * XREFs of KiContinueEx @ 0x1401323B0
 * Callers:
 *     NtContinue @ 0x1401AB600 (NtContinue.c)
 * Callees:
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x140132520 (KeTestAlertThread.c)
 *     KeContextToKframes @ 0x1401AB000 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  unsigned int v13; // [rsp+34h] [rbp-24h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v13 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( a2 )
    {
      if ( (a1 & 0xF) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v10 = a1;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1231) = *(_BYTE *)(v10 + 1231);
      LOBYTE(v10) = 1;
      KeTestAlertThread(v10);
      if ( ((*(_QWORD *)(a1 + 152) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL) - 1232 == a1
        && CurrentThread->ApcState.UserApcPending )
      {
        *(_QWORD *)(a4 + 208) = a1;
        *(_QWORD *)(a4 + 352) = a3;
        KiDeliverApc(1, 0LL, a4);
        v13 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v11 = KiContinuePreviousModeUser(a1, a3, a4, (__int64)CurrentThread);
    if ( v11 >= 0 )
      v11 = 1;
    v13 = v11;
  }
  else
  {
    KeContextToKframes(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( a2 )
      KeTestAlertThread(0LL);
  }
LABEL_18:
  if ( !CurrentIrql )
    __writecr8(0LL);
  return v13;
}
