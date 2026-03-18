/*
 * XREFs of MiLockPageTableRange @ 0x140035428
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableRange @ 0x140017450 (MiUnlockPageTableRange.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r15
  int v12; // r8d
  __int64 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+28h] [rbp-70h]
  _BYTE v20[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = 0LL;
  v7 = a1;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v11 = v9;
  if ( v4 > v5 )
  {
LABEL_10:
    v6 = 0LL;
    v15 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v12 = 3;
    v13 = &v22;
    v22 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      --v13;
      *v13 = (((unsigned __int64)v13[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
    LOBYTE(v19) = 0;
    LOBYTE(v18) = v11;
    v14 = MiResolvePageTablePage(0LL, v7, v20, 0LL, v18, v19);
    v15 = v14;
    if ( v14 != -1073741802 )
    {
      if ( v14 != -1073740748 )
        goto LABEL_11;
      goto LABEL_9;
    }
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(v21);
    if ( !(unsigned int)MiLockPageTablePage(48 * v16 - 0x58000000000LL, 2LL) )
      break;
    v6 = v7;
    v4 += 8LL;
    v7 = (__int64)(v4 << 25) >> 16 << 25 >> 16;
LABEL_9:
    if ( v4 > v5 )
      goto LABEL_10;
  }
  v15 = -1073741670;
LABEL_11:
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v10);
  if ( v6 )
    MiUnlockPageTableRange(a1, v6);
  return v15;
}
