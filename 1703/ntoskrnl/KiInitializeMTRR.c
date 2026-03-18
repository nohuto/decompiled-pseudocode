/*
 * XREFs of KiInitializeMTRR @ 0x140817890
 * Callers:
 *     KiInitMachineDependent @ 0x14015D6B8 (KiInitMachineDependent.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KiReadFixedMtrr @ 0x14040E738 (KiReadFixedMtrr.c)
 *     KiMaskToLength @ 0x140412344 (KiMaskToLength.c)
 *     KeRestoreMtrrBroadcast @ 0x140412370 (KeRestoreMtrrBroadcast.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 */

void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // di
  char v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  ULONGLONG v9; // r12
  __int64 v10; // r13
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v12; // ebx
  __int64 v14; // [rsp+78h] [rbp+10h]

  v1 = a1;
  v2 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_14034FFA8 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_14034FFB1 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
      byte_14034FFB1 = (__readmsr(0xC0010010) & 0x40000) != 0;
    if ( (((_BYTE)qword_14034FFA8 != 0) & _bittest64(&KiMtrrInfo, 0xBu)) != 0 )
    {
      if ( (KeFeatureBits & 0x40) == 0 && (qword_14034FFA8 & 0x400) != 0 )
        qword_14034FFA8 &= ~0x400uLL;
      v12 = 16 * (unsigned __int8)qword_14034FFA8;
      byte_14034FFB2 = 0;
      if ( qword_14034FFB8 || (qword_14034FFB8 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2020654Bu)) != 0LL )
        memset(qword_14034FFB8, 0, v12);
      if ( qword_14034FFC0
        || (qword_14034FFA8 & 0x100) != 0
        && (qword_14034FFC0 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu)) != 0LL )
      {
        memset(qword_14034FFC0, 0, 0x58uLL);
      }
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_14034FFA8 & 0x1FF) != 0
        && (KiMtrrInfo & 0x800) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v2 = 0;
    }
  }
  if ( qword_14034FFB8 && (qword_14034FFC0 || (qword_14034FFA8 & 0x100) == 0) )
  {
    v3 = __readmsr(0xFEu);
    if ( (KeFeatureBits & 0x40) == 0 && (v3 & 0x400) != 0 )
      v3 &= ~0x400uLL;
    if ( v3 != qword_14034FFA8 )
      KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
    if ( __readmsr(0x2FFu) != KiMtrrInfo )
      DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  }
  else
  {
    v2 = 0;
    LOBYTE(v3) = 0;
  }
  if ( !v2 )
    goto LABEL_53;
  if ( !KeGetPcr()->Prcb.Number )
  {
    if ( qword_14034FFC0 )
      KiReadFixedMtrr(qword_14034FFC0);
    v4 = (unsigned __int8)v3;
    v5 = 0;
    if ( (_BYTE)v3 )
    {
      v6 = 513;
      do
      {
        v7 = __readmsr(v6 - 1);
        v8 = __readmsr(v6);
        v9 = v8 & KiMtrrMaskMask;
        v14 = v7 & KiMtrrMaskBase;
        if ( (v8 & 0x800) != 0 )
        {
          v10 = KiMaskToLength(v9);
          if ( ((v9 + v10) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
          {
            DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
            v2 = 0;
          }
          if ( (unsigned __int64)(v10 + v14) > 0x100000 || (KiMtrrInfo & 0x400) == 0 )
          {
            *((_QWORD *)qword_14034FFB8 + 2 * (unsigned __int8)byte_14034FFB2) = v7;
            *((_QWORD *)qword_14034FFB8 + 2 * (unsigned __int8)byte_14034FFB2++ + 1) = v8;
          }
        }
        ++v5;
        v6 += 2;
      }
      while ( v5 < v4 );
      v1 = a1;
    }
  }
  if ( v2 )
  {
    if ( v1 )
    {
      byte_14034FFB0 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ExPageLockHandle);
        KeRestoreMtrrBroadcast();
        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
      }
    }
  }
  else
  {
LABEL_53:
    if ( qword_14034FFB8 )
    {
      ExFreePoolWithTag(qword_14034FFB8, 0);
      qword_14034FFB8 = 0LL;
    }
    if ( qword_14034FFC0 )
    {
      ExFreePoolWithTag(qword_14034FFC0, 0);
      qword_14034FFC0 = 0LL;
    }
  }
}
