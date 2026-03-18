/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1404D43D0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 *     MiValidateMemoryRangeEntries @ 0x1404D4A08 (MiValidateMemoryRangeEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        char *a4,
        __m128i *a5,
        unsigned int a6)
{
  ULONG_PTR v9; // r10
  char v10; // r11
  int v11; // edi
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r9
  LONG *p_LockNV; // rdx
  char PreviousMode; // si
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 result; // rax
  unsigned __int64 *PoolWithTag; // rsi
  _KPROCESS *v23; // r13
  _BYTE *v24; // rbx
  unsigned int valid; // r14d
  ULONG_PTR v26; // r15
  int v27; // r12d
  __int64 v28; // r9
  int IoPriorityThread; // eax
  int v30; // r8d
  int v31; // r9d
  _BYTE *v32; // rax
  _BYTE *v34; // [rsp+48h] [rbp-2F0h]
  unsigned int v35; // [rsp+5Ch] [rbp-2DCh]
  char v36; // [rsp+60h] [rbp-2D8h]
  _KPROCESS *BugCheckParameter1; // [rsp+68h] [rbp-2D0h]
  __m128i Address; // [rsp+70h] [rbp-2C8h]
  void *Src; // [rsp+80h] [rbp-2B8h]
  PVOID Object; // [rsp+88h] [rbp-2B0h] BYREF
  int v41; // [rsp+90h] [rbp-2A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-2A0h]
  struct _KTHREAD *v43; // [rsp+A0h] [rbp-298h]
  ULONG_PTR v44; // [rsp+A8h] [rbp-290h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v45; // [rsp+C0h] [rbp-278h] BYREF
  _BYTE v46[256]; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v47[256]; // [rsp+1F0h] [rbp-148h] BYREF

  v9 = a1;
  v44 = a1;
  v10 = 0;
  v36 = 0;
  v11 = 0;
  v34 = v46;
  v35 = 0;
  if ( a2 == 2 )
  {
    v12 = a6;
    if ( a6 != 24 )
      return 3221225716LL;
  }
  else
  {
    if ( a2 < 0 || a2 > 1 && a2 != 3 )
      return 3221225712LL;
    if ( !a5 )
      return 3221225715LL;
    v12 = a6;
    if ( a6 != 4 )
      return 3221225716LL;
  }
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  BugCheckParameter1 = (_KPROCESS *)p_LockNV;
  if ( a2 == 2 && (p_LockNV[522] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v36 = v10;
  }
  Address.m128i_i64[1] = 0LL;
  Src = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a2 != 2 )
    {
      v20 = a5->m128i_i32[0];
      v18 = 0;
      goto LABEL_34;
    }
    Address = *a5;
    Src = (void *)a5[1].m128i_i64[0];
    v18 = _mm_cvtsi128_si32(*a5);
    if ( v18 && !Address.m128i_i32[1] )
    {
      v20 = 0;
      goto LABEL_34;
    }
    return 3221225715LL;
  }
  v16 = 16 * a3;
  if ( 16 * a3 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v16] > 0x7FFFFFFF0000LL || &a4[v16] < a4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 == 2 )
  {
    if ( (_DWORD)v12 )
    {
      if ( ((unsigned __int8)a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)a5->m128i_u64 + v12;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)a5 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    Address = *a5;
    Src = (void *)a5[1].m128i_i64[0];
    v18 = _mm_cvtsi128_si32(*a5);
    if ( !v18 || Address.m128i_i32[1] )
      return 3221225715LL;
    ProbeForWrite((volatile void *)Address.m128i_i64[1], 4uLL, 4u);
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int64)Src + 16 * v18;
    if ( v19 > 0x7FFFFFFF0000LL || v19 < (unsigned __int64)Src )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v20 = 0;
      v9 = a1;
    }
    else
    {
      v20 = 0;
      v9 = a1;
    }
  }
  else
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = a5->m128i_i32[0];
    v18 = 0;
  }
  p_LockNV = &BugCheckParameter1->Header.LockNV;
LABEL_34:
  if ( v9 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v9,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               1716546893,
               &Object,
               0LL,
               0LL);
    v35 = result;
    if ( (int)result < 0 )
      return result;
    BugCheckParameter1 = (_KPROCESS *)Object;
  }
  PoolWithTag = (unsigned __int64 *)v47;
  P = v47;
  if ( a3 > 0x10 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a3, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = (unsigned __int64 *)v47;
      valid = -1073741670;
      v23 = BugCheckParameter1;
      v24 = v46;
      goto LABEL_71;
    }
  }
  if ( v18 > 0x10 && a2 == 2 )
  {
    v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v18, 0x724D6D4Du);
    v34 = v32;
    if ( !v32 )
    {
      v24 = v46;
      valid = -1073741670;
      v23 = BugCheckParameter1;
      goto LABEL_71;
    }
  }
  memmove(PoolWithTag, a4, 16 * a3);
  if ( a2 == 2 )
    memmove(v34, Src, 16LL * v18);
  v23 = BugCheckParameter1;
  if ( v43->ApcState.Process != BugCheckParameter1 )
  {
    if ( a2 == 3 )
    {
      valid = -1073741637;
LABEL_70:
      v24 = v34;
      goto LABEL_71;
    }
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v45);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, a3, 0LL) )
  {
    valid = -1073741582;
    goto LABEL_70;
  }
  if ( a2 != 2 )
  {
    if ( a2 )
    {
      v27 = a2 - 1;
      if ( v27 )
      {
        if ( v27 == 2 )
        {
          if ( v20 )
          {
            valid = -1073741581;
          }
          else if ( (BugCheckParameter1[1].DirectoryTableBase & 0x1000000000LL) != 0 )
          {
            valid = MiProcessVaRangesInfoClass(a3, PoolWithTag, 3LL);
          }
          else
          {
            valid = -1073741637;
          }
        }
        else
        {
          valid = v35;
        }
      }
      else if ( v20 > 5 )
      {
        valid = -1073741581;
      }
      else
      {
        valid = MiProcessVaRangesInfoClass(a3, PoolWithTag, 1LL);
      }
    }
    else if ( v20 )
    {
      valid = -1073741581;
    }
    else
    {
      MiGetEffectivePagePriorityThread((__int64)v43);
      IoPriorityThread = PsGetIoPriorityThread(v28);
      v31 = v30 | 0x400;
      if ( IoPriorityThread > 1 )
        v31 = v30;
      valid = MiPrefetchVirtualMemory(a3, (__int64)PoolWithTag, (__int64)&BugCheckParameter1[1].IdealNode[12], v31);
    }
    goto LABEL_70;
  }
  v24 = v34;
  if ( a3 == 1 )
  {
    valid = MiCfgMarkValidEntries((__int64)BugCheckParameter1, *PoolWithTag, PoolWithTag[1], v34, v18, &v41, v36);
    if ( v11 )
    {
      KiUnstackDetachProcess(&v45, 0LL);
      v11 = 0;
    }
    *(_DWORD *)Address.m128i_i64[1] = v41;
    v26 = a1;
    goto LABEL_47;
  }
  valid = -1073741582;
LABEL_71:
  v26 = a1;
LABEL_47:
  if ( v11 )
    KiUnstackDetachProcess(&v45, 0LL);
  if ( v26 != -1LL )
    ObfDereferenceObjectWithTag(v23, 0x66506D4Du);
  if ( PoolWithTag != (unsigned __int64 *)v47 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v24 != v46 )
    ExFreePoolWithTag(v24, 0);
  return valid;
}
