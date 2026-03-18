/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x14012FA80
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14012F950 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x1401AE320 (KiSwitchKernelStackAndCallout.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // r14
  unsigned int v12; // ebp
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // r9d
  __int64 KernelStack; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  int MiscFlags; // eax
  char v20; // bp
  unsigned int v21; // r15d
  bool v23; // zf
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // al
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  PRKMUTANT Mutant; // [rsp+38h] [rbp-40h]
  LARGE_INTEGER *Timeout; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = a3;
  v8 = 0;
  Timeout = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a5;
  if ( CurrentIrql == 2 )
  {
    v26 = 0LL;
    Timeout = (LARGE_INTEGER *)&v26;
    if ( a5 )
      v6 = 16;
  }
  v12 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v6 |= 1u;
    v12 = 1;
    v8 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v12 = 5;
  }
  else
  {
    a4 |= 4u;
    v7 = 0LL;
  }
  v13 = v8;
  if ( (v6 & 0xF0) == 0 )
  {
    v14 = v12 | 2;
    if ( (a4 & 2) != 0 )
      v14 = v12;
    v12 = v14 | 0x10;
    v15 = a4 & 4;
    if ( !v15 )
      v12 = v14;
    v8 |= 4u;
    if ( !v15 )
      v8 = v13;
    KernelStack = MmCreateKernelStack(
                    v12,
                    *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    CurrentThread);
    if ( KernelStack )
      goto LABEL_12;
    v11 = a5;
  }
  if ( !v11 || (v6 & 1) != 0 && !*(_BYTE *)(v11 + 4) )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v6 |= 4u;
  Mutant = (PRKMUTANT)(v11 + 8);
  if ( KeWaitForSingleObject((PVOID)(v11 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v6 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v24 = *(_BYTE *)(v11 + 6);
  if ( v24 >= *(_BYTE *)(v11 + 5) )
  {
    KeReleaseMutant(Mutant, 1, 0, 0);
    return 3221225495LL;
  }
  v6 |= 8u;
  KernelStack = *(_QWORD *)(v11 + 8LL * v24 + 64);
  *(_BYTE *)(a5 + 6) = v24 + 1;
  if ( (v6 & 1) == 0 && *(_BYTE *)(a5 + 4) )
  {
    LOBYTE(v12) = 5;
    v7 = 71680LL;
    v6 |= 1u;
  }
LABEL_12:
  *(_QWORD *)(KernelStack - 48) = KernelStack;
  v17 = KernelStack - 48;
  if ( (v6 & 1) != 0 )
    v18 = KernelStack - 73727;
  else
    v18 = KernelStack - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v17 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v17 + 40) = CurrentThread->InitialStack;
  if ( (v12 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v12 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
  {
    v6 |= 2u;
    v20 = 2;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
    v20 = 0;
  }
  v21 = KiSwitchKernelStackAndCallout(a2, a1, v17, v7);
  if ( (v6 & 8) != 0 )
  {
    v23 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v23 && (v6 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
  }
  else
  {
    MmDeleteKernelStack(KernelStack, v8);
  }
  if ( !v20 )
    CurrentThread->MiscFlags &= ~0x1000u;
  if ( KeGetCurrentIrql() != CurrentIrql )
  {
    v25 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, ((CurrentIrql | (v25 << 8)) << 8) | 2u, a1, a2, 0LL);
  }
  return v21;
}
