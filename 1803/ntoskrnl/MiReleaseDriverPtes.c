/*
 * XREFs of MiReleaseDriverPtes @ 0x1405F6694
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x1405F6654 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x14074A2D0 (MmUnmapLockedRestartPages.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 *     MiReleaseNewAddressForBootImage @ 0x1408E0B9C (MiReleaseNewAddressForBootImage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     RtlAreBitsSet @ 0x1400BAB30 (RtlAreBitsSet.c)
 *     MiUnlockDriverMappings @ 0x140160550 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x140160750 (MiLockDriverMappings.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  ULONG v6; // r12d
  _QWORD *v8; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  ULONG v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v6 = (unsigned int)(a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v20 = v4;
  v9 = qword_1403CB588[v4];
  if ( !v9 )
    goto LABEL_16;
  do
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( a2 >= v10 && a2 < v10 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v9 + 16) << 16) >> 12) )
      break;
    v8 = (_QWORD *)v9;
    v9 = *(_QWORD *)v9;
  }
  while ( v9 );
  if ( !v9 )
LABEL_16:
    KeBugCheckEx(0x1Au, 0x2102uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  v11 = (unsigned int)((__int64)(a2 - *(_QWORD *)(v9 + 8)) >> 3) >> 4;
  if ( !RtlAreBitsSet((PRTL_BITMAP)(v9 + 16), v11, v6) )
    KeBugCheckEx(0x1Au, 0x2103uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  if ( (*(_DWORD *)(v9 + 36) & 1) != 0
    || (RtlClearBits((PRTL_BITMAP)(v9 + 16), v11, v6), RtlNumberOfSetBits((PRTL_BITMAP)(v9 + 16))) )
  {
    MiUnlockDriverMappings((__int64)CurrentThread, v12, v13, v14);
  }
  else
  {
    MiReturnSystemVa(
      (__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16,
      ((__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16) + (unsigned int)(*(_DWORD *)(v9 + 16) << 16),
      12 - (a1 != 0));
    v18 = *(_QWORD *)v9;
    if ( v8 )
    {
      *v8 = v18;
    }
    else
    {
      v15 = qword_1403CB588;
      qword_1403CB588[v20] = v18;
    }
    MiUnlockDriverMappings((__int64)CurrentThread, (__int64)v15, v16, v17);
    ExFreePoolWithTag((PVOID)v9, 0);
  }
}
