/*
 * XREFs of NtSetInformationVirtualMemory @ 0x14049A7B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x14049AD94 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 *     MiSetPriorityVaRanges @ 0x1404C9C9C (MiSetPriorityVaRanges.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        int a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  ULONG_PTR v9; // r11
  char v10; // si
  int v11; // ebx
  _BYTE *v12; // r12
  unsigned int valid; // edi
  __int64 v14; // rcx
  bool v15; // zf
  struct _KTHREAD *CurrentThread; // r9
  _DWORD *p_LockNV; // r8
  unsigned int v18; // r15d
  _QWORD *PoolWithTag; // rsi
  __int64 v20; // r8
  int v21; // r9d
  int v22; // r14d
  ULONG_PTR v23; // r14
  __int64 result; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  char *v27; // rdx
  __int64 v28; // rdx
  int v29; // r10d
  _BYTE *v30; // rax
  unsigned int v32; // [rsp+50h] [rbp-2E8h]
  char v33; // [rsp+58h] [rbp-2E0h]
  PVOID Object; // [rsp+60h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+68h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+70h] [rbp-2C8h]
  void *v37; // [rsp+80h] [rbp-2B8h]
  int v38; // [rsp+88h] [rbp-2B0h] BYREF
  PVOID v39; // [rsp+90h] [rbp-2A8h]
  struct _KTHREAD *v40; // [rsp+98h] [rbp-2A0h]
  ULONG_PTR v41; // [rsp+A0h] [rbp-298h]
  void *Src; // [rsp+A8h] [rbp-290h]
  $5BC46E0569261879018906DEC3127961 v43; // [rsp+C0h] [rbp-278h] BYREF
  _BYTE v44[256]; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v45[256]; // [rsp+1F0h] [rbp-148h] BYREF

  Src = a4;
  v9 = BugCheckParameter1;
  v41 = BugCheckParameter1;
  v10 = 0;
  v33 = 0;
  v11 = 0;
  v12 = v45;
  v39 = v45;
  valid = 0;
  v32 = 0;
  if ( a2 < 0 )
    return 3221225712LL;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v14 = a6;
      v15 = a6 == 24;
      goto LABEL_5;
    }
    return 3221225712LL;
  }
  if ( !a5 )
    return 3221225715LL;
  v14 = a6;
  v15 = a6 == 4;
LABEL_5:
  if ( !v15 )
    return 3221225716LL;
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( a2 == 2 && (p_LockNV[192] & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v33 = v10;
  }
  Address[0] = 0LL;
  Address[1] = 0LL;
  v37 = 0LL;
  if ( CurrentThread->PreviousMode )
  {
    v25 = 16 * a3;
    if ( 16 * a3 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[v25] > 0x7FFFFFFF0000LL || &a4[v25] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a2 == 2 )
    {
      if ( (_DWORD)v14 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = a5 + v14;
        if ( v26 > 0x7FFFFFFF0000LL || v26 < a5 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)a5;
      v37 = *(void **)(a5 + 16);
      v18 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v18 || HIDWORD(Address[0]) )
        return 3221225715LL;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((unsigned __int8)v37 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = (char *)v37 + 16 * v18;
      if ( (unsigned __int64)v27 > 0x7FFFFFFF0000LL || v27 < v37 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v9 = BugCheckParameter1;
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v32 = *(_DWORD *)a5;
      v18 = (unsigned int)Address[0];
    }
    p_LockNV = P;
    goto LABEL_13;
  }
  if ( a2 != 2 )
  {
    v32 = *(_DWORD *)a5;
    v18 = (unsigned int)Address[0];
    goto LABEL_13;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  v37 = *(void **)(a5 + 16);
  v18 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v18 || HIDWORD(Address[0]) )
    return 3221225715LL;
LABEL_13:
  if ( v9 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v9, 1716546893, (__int64)&Object, 0LL, 0LL);
    valid = result;
    if ( (int)result < 0 )
      return result;
  }
  PoolWithTag = v44;
  P = v44;
  if ( a3 > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a3, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v44;
LABEL_86:
      valid = -1073741670;
      goto LABEL_73;
    }
  }
  if ( v18 > 0x10 && a2 == 2 )
  {
    v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v18, 0x724D6D4Du);
    v12 = v30;
    v39 = v30;
    if ( !v30 )
    {
      v12 = v45;
      goto LABEL_86;
    }
  }
  memmove(PoolWithTag, Src, 16 * a3);
  if ( a2 == 2 )
    memmove(v12, v37, 16LL * v18);
  if ( v40->ApcState.Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v43);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, a3, v20, 0LL) )
  {
LABEL_89:
    valid = -1073741582;
    goto LABEL_73;
  }
  if ( !a2 )
  {
    if ( v32 == v21 )
    {
      MiGetEffectivePagePriorityThread((__int64)v40);
      if ( (int)PsGetIoPriorityThread(v28) <= 1 )
        v29 |= 0x400u;
      valid = MiPrefetchVirtualMemory(a3, (__int64)PoolWithTag, (__int64)Object + 1280, v29);
      goto LABEL_73;
    }
    goto LABEL_90;
  }
  v22 = a2 - 1;
  if ( !v22 )
  {
    if ( v32 <= 5 )
    {
      MiSetPriorityVaRanges(a3, PoolWithTag, v32);
      valid = 0;
      goto LABEL_73;
    }
LABEL_90:
    valid = -1073741581;
    goto LABEL_73;
  }
  if ( v22 == 1 )
  {
    if ( a3 == 1 )
    {
      valid = MiCfgMarkValidEntries((_DWORD)Object, *PoolWithTag, PoolWithTag[1], (_DWORD)v12, v18, (__int64)&v38, v33);
      if ( v11 )
      {
        KiUnstackDetachProcess(&v43, 0LL);
        v11 = 0;
      }
      *(_DWORD *)Address[1] = v38;
      v23 = BugCheckParameter1;
      goto LABEL_29;
    }
    goto LABEL_89;
  }
LABEL_73:
  v23 = BugCheckParameter1;
LABEL_29:
  if ( v11 )
    KiUnstackDetachProcess(&v43, 0LL);
  if ( v23 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v44 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v12 != v45 )
    ExFreePoolWithTag(v12, 0);
  return valid;
}
