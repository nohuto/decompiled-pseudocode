/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x140028D80
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140028B90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x1401846D0 (KiSwitchKernelStackAndCallout.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v6; // bp
  unsigned int v7; // r14d
  __int64 v8; // r15
  LARGE_INTEGER *Timeout; // r13
  unsigned __int8 CurrentIrql; // r12
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  __int64 KernelStack; // rsi
  unsigned __int64 v14; // r8
  int MiscFlags; // eax
  unsigned int v16; // ebx
  unsigned __int8 v17; // al
  _BYTE *v19; // rax
  bool v20; // zf
  _BYTE *v21; // rax
  struct _KMUTANT *v22; // rsi
  _BYTE *v23; // rcx
  unsigned __int8 v24; // r8
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0;
  v8 = a3;
  Timeout = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    v6 = 0;
    v27 = 0LL;
    if ( a5 )
      v6 = 16;
    Timeout = (LARGE_INTEGER *)&v27;
  }
  v11 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v6 |= 1u;
    v11 = 1;
    v7 = 1;
    if ( a5 && a5[4] )
      v11 = 5;
  }
  else
  {
    a4 |= 4u;
    v8 = 0LL;
  }
  v12 = v11;
  if ( (v6 & 0xF0) == 0 )
  {
    v11 |= 2u;
    if ( (a4 & 2) != 0 )
      v11 = v12;
    if ( (a4 & 4) != 0 )
    {
      v11 |= 0x10u;
      v7 |= 4u;
    }
    KernelStack = MmCreateKernelStack(
                    v11,
                    *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    CurrentThread);
    if ( KernelStack )
      goto LABEL_10;
  }
  v21 = a5;
  if ( !a5 || (v6 & 1) != 0 && !a5[4] )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v6 |= 4u;
  v22 = (struct _KMUTANT *)(v21 + 8);
  if ( KeWaitForSingleObject(v21 + 8, WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v6 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v23 = a5;
  v24 = a5[6];
  if ( v24 >= a5[5] )
  {
    KeReleaseMutant(v22, 1, 0, 0);
    return 3221225495LL;
  }
  v6 |= 8u;
  KernelStack = *(_QWORD *)&a5[8 * v24 + 64];
  a5[6] = v24 + 1;
  if ( (v6 & 1) == 0 && v23[4] )
  {
    LOBYTE(v11) = 5;
    v8 = 71680LL;
    v6 |= 1u;
  }
LABEL_10:
  *(_QWORD *)(KernelStack - 48) = KernelStack;
  v14 = KernelStack - 48;
  if ( (v6 & 1) != 0 )
    *(_QWORD *)(v14 + 8) = KernelStack - 73727;
  else
    *(_QWORD *)(v14 + 8) = KernelStack - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v14 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v14 + 40) = CurrentThread->InitialStack;
  if ( (v11 & 1) != 0 )
  {
    v14 |= 1uLL;
    if ( (v11 & 4) != 0 )
      v14 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
    v6 |= 2u;
  else
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
  v16 = KiSwitchKernelStackAndCallout(a2, a1, v14, v8);
  if ( (v6 & 8) != 0 )
  {
    v19 = a5;
    v20 = a5[6]-- == 1;
    if ( v20 && (v6 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(v19 + 8), 1, 0, 0);
  }
  else
  {
    MmDeleteKernelStack(KernelStack, v7);
  }
  if ( (v6 & 2) == 0 )
    CurrentThread->MiscFlags &= ~0x1000u;
  v17 = KeGetCurrentIrql();
  if ( v17 != CurrentIrql )
    KeBugCheckEx(0xC8u, CurrentIrql, v17, 0LL, 0LL);
  return v16;
}
