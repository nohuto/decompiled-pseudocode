/*
 * XREFs of KiInitializeMTRR @ 0x1408B2DEC
 * Callers:
 *     KiInitMachineDependent @ 0x140178EA4 (KiInitMachineDependent.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiReadFixedMtrr @ 0x140477F4C (KiReadFixedMtrr.c)
 *     KiMaskToLength @ 0x14047C57C (KiMaskToLength.c)
 *     KeRestoreMtrrBroadcast @ 0x14047C5A8 (KeRestoreMtrrBroadcast.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
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
  PVOID PoolWithTag; // rax
  size_t v13; // rbx
  PVOID v14; // rax
  __int64 v16; // [rsp+78h] [rbp+10h]

  v1 = a1;
  v2 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_1403ADB88 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_1403ADB91 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
      byte_1403ADB91 = (__readmsr(0xC0010010) & 0x40000) != 0;
    if ( (((_BYTE)qword_1403ADB88 != 0) & _bittest64(&KiMtrrInfo, 0xBu)) != 0 )
    {
      if ( (KeFeatureBits & 0x40) == 0 && (qword_1403ADB88 & 0x400) != 0 )
        qword_1403ADB88 &= ~0x400uLL;
      PoolWithTag = qword_1403ADB98;
      v13 = 16 * (unsigned int)(unsigned __int8)qword_1403ADB88;
      byte_1403ADB92 = 0;
      if ( qword_1403ADB98
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v13, 0x2020654Bu),
            (qword_1403ADB98 = PoolWithTag) != 0LL) )
      {
        memset(PoolWithTag, 0, v13);
      }
      v14 = qword_1403ADBA0;
      if ( qword_1403ADBA0
        || (qword_1403ADB88 & 0x100) != 0
        && (v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu), (qword_1403ADBA0 = v14) != 0LL) )
      {
        memset(v14, 0, 0x58uLL);
      }
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_1403ADB88 & 0x1FF) != 0
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
  if ( qword_1403ADB98 && (qword_1403ADBA0 || (qword_1403ADB88 & 0x100) == 0) )
  {
    v3 = __readmsr(0xFEu);
    if ( (KeFeatureBits & 0x40) == 0 && (v3 & 0x400) != 0 )
      v3 &= ~0x400uLL;
    if ( v3 != qword_1403ADB88 )
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
    if ( qword_1403ADBA0 )
      KiReadFixedMtrr(qword_1403ADBA0);
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
        v16 = v7 & KiMtrrMaskBase;
        if ( (v8 & 0x800) != 0 )
        {
          v10 = KiMaskToLength(v9);
          if ( ((v9 + v10) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
          {
            DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
            v2 = 0;
          }
          if ( (unsigned __int64)(v10 + v16) > 0x100000 || (KiMtrrInfo & 0x400) == 0 )
          {
            *((_QWORD *)qword_1403ADB98 + 2 * (unsigned __int8)byte_1403ADB92) = v7;
            *((_QWORD *)qword_1403ADB98 + 2 * (unsigned __int8)byte_1403ADB92++ + 1) = v8;
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
      byte_1403ADB90 = 1;
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
    if ( qword_1403ADB98 )
    {
      ExFreePoolWithTag(qword_1403ADB98, 0);
      qword_1403ADB98 = 0LL;
    }
    if ( qword_1403ADBA0 )
    {
      ExFreePoolWithTag(qword_1403ADBA0, 0);
      qword_1403ADBA0 = 0LL;
    }
  }
}
