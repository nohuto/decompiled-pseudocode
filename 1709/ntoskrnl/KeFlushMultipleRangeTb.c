/*
 * XREFs of KeFlushMultipleRangeTb @ 0x140057530
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     KiFlushRangeWorker @ 0x1400573A0 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x14005B830 (KiIpiSendRequest.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1401442BC (KiPrepareFlushParameters.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int8 v9; // di
  int p_ActiveProcessors; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rax
  volatile _KAFFINITY_EX *v15; // rdx
  unsigned __int16 Count; // r8
  _WORD *v17; // r11
  unsigned int v18; // r9d
  __int64 v19; // rcx
  int v20; // r10d
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int8 v25; // bl
  signed __int32 v26[8]; // [rsp+0h] [rbp-148h] BYREF
  char v27[8]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v28; // [rsp+38h] [rbp-110h] BYREF
  __int64 v29; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-100h]
  unsigned int v31; // [rsp+4Ch] [rbp-FCh]
  _WORD v32[2]; // [rsp+50h] [rbp-F8h] BYREF
  int v33; // [rsp+54h] [rbp-F4h]
  _QWORD v34[21]; // [rsp+58h] [rbp-F0h] BYREF

  v4 = 0;
  if ( a3 == 1 && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( (HvlEnlightenments & 6) == 0 || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
      goto LABEL_11;
  }
  KiPrepareFlushParameters(a3, &v28, v27);
  if ( a4 )
    p_ActiveProcessors = 0;
  else
    p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
  result = HvlFlushRangeListTb(v28, p_ActiveProcessors, (unsigned __int8)v27[0], v9, a1, a2);
  if ( !(_BYTE)result )
  {
LABEL_11:
    v29 = a2;
    v30 = a1;
    v31 = a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a4 )
    {
      v20 = 1;
      LODWORD(v17) = 0;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_26:
        v24 = 2147483652LL;
        if ( a4 != 1 )
          v24 = 4LL;
        KiIpiSendRequest((_DWORD)CurrentPrcb, v20, (_DWORD)v17, (unsigned int)&v29, a1, v24);
        KiFlushRangeWorker((__int64)&v29);
        while ( CurrentPrcb->PacketBarrier )
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        goto LABEL_34;
      }
    }
    else
    {
      _InterlockedOr(v26, 0);
      CurrentThread = CurrentPrcb->CurrentThread;
      v33 = 0;
      v15 = &CurrentThread->ApcState.Process->ActiveProcessors;
      Count = v15->Count;
      LOWORD(CurrentThread) = CurrentThread->ApcState.Process->ActiveProcessors.Size;
      v32[0] = Count;
      v32[1] = (_WORD)CurrentThread;
      if ( Count )
      {
        memmove(v34, v15->Bitmap, 8LL * Count);
        Count = v32[0];
      }
      v17 = v32;
      v18 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
      v19 = v18 >> 6;
      if ( Count > (unsigned int)v19 )
      {
        v34[v19] &= ~(1LL << (v18 & 0x3F));
        Count = v32[0];
      }
      v20 = 0;
      v21 = 0;
      if ( Count )
      {
        v28 = 0x5555555555555555LL;
        do
        {
          v22 = v34[v21];
          v23 = (0x101010101010101LL
               * ((((v22 - (v28 & (v22 >> 1))) & 0x3333333333333333LL)
                 + (((v22 - (v28 & (v22 >> 1))) >> 2) & 0x3333333333333333LL)
                 + ((((v22 - (v28 & (v22 >> 1))) & 0x3333333333333333LL)
                   + (((v22 - (v28 & (v22 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          if ( (unsigned __int8)v23 > 1u
            || (_BYTE)v23 == 1 && (CurrentPrcb->Group != v21 || (v22 & CurrentPrcb->GroupSetMember) == 0) )
          {
            goto LABEL_26;
          }
        }
        while ( ++v21 < Count );
      }
    }
    KiFlushRangeWorker((__int64)&v29);
LABEL_34:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(a1, a2, a3);
  if ( ExTbFlushActive )
  {
    v25 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(a1, a2, a3);
    result = v25;
    __writecr8(v25);
  }
  return result;
}
