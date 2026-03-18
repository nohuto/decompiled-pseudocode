/*
 * XREFs of KxFlushMultipleTb @ 0x1400D8FB0
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x140040C60 (KiIpiWaitForRequestBarrier.c)
 *     KiFlushRangeWorker @ 0x1400D6990 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall KxFlushMultipleTb(int a1, __int64 a2, int a3, int a4)
{
  char v4; // r14
  unsigned int v5; // ebp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  int v8; // edi
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  _WORD *v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v20; // [rsp+30h] [rbp-108h] BYREF
  int v21; // [rsp+38h] [rbp-100h]
  int v22; // [rsp+3Ch] [rbp-FCh]
  _WORD v23[2]; // [rsp+40h] [rbp-F8h] BYREF
  int v24; // [rsp+44h] [rbp-F4h]
  _QWORD v25[21]; // [rsp+48h] [rbp-F0h] BYREF

  v4 = a1;
  v5 = 4;
  v20 = a2;
  v21 = a1;
  if ( a4 == 1 )
    v5 = -2147483644;
  v22 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( !a4 )
  {
    _InterlockedOr(v19, 0);
    CurrentThread = CurrentPrcb->CurrentThread;
    v24 = 0;
    Process = CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
    v23[0] = Count;
    v23[1] = (_WORD)CurrentThread;
    if ( Count )
    {
      memmove(v25, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v23[0];
    }
    v12 = v23;
    v13 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
    v14 = v13 >> 6;
    if ( Count > (unsigned int)v14 )
    {
      v25[v14] &= ~(1LL << (v13 & 0x3F));
      Count = v23[0];
    }
    v15 = 0;
    if ( Count )
    {
      do
      {
        v16 = v25[v15];
        v17 = (0x101010101010101LL
             * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( (unsigned __int8)v17 > 1u
          || (_BYTE)v17 == 1 && (CurrentPrcb->Group != v15 || (v16 & CurrentPrcb->GroupSetMember) == 0) )
        {
          goto LABEL_18;
        }
      }
      while ( ++v15 < Count );
    }
LABEL_16:
    if ( KiFlushRangeWorker )
      KiFlushRangeWorker((__int64)&v20);
    goto LABEL_21;
  }
  LODWORD(v12) = 0;
  v8 = 1;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    goto LABEL_16;
LABEL_18:
  KiIpiSendRequest((_DWORD)CurrentPrcb, v8, (_DWORD)v12, (unsigned int)&v20, v4, v5);
  if ( KiFlushRangeWorker )
    KiFlushRangeWorker((__int64)&v20);
  KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
LABEL_21:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
