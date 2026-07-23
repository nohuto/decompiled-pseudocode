/*
 * XREFs of MiReleaseDriverPtes @ 0x1405413F0
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x1405413B0 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x1406DF360 (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiUnlockDriverMappings @ 0x1400F8C80 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400F8E80 (MiLockDriverMappings.c)
 *     RtlAreBitsSet @ 0x1400F8EB0 (RtlAreBitsSet.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rbx
  ULONG v7; // r13d
  _RTL_BITMAP *v8; // r14
  _RTL_BITMAP *v9; // rbx
  unsigned int *Buffer; // rdx
  ULONG v11; // ebp
  unsigned int SizeOfBitMap; // edi
  unsigned __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rax
  char v18[192]; // [rsp+40h] [rbp-108h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v7 = (unsigned int)(a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v9 = (_RTL_BITMAP *)qword_140388408[v4];
  if ( !v9 )
    goto LABEL_18;
  do
  {
    Buffer = v9->Buffer;
    if ( a2 >= (unsigned __int64)Buffer
      && a2 < (unsigned __int64)&Buffer[2 * ((unsigned __int64)(v9[1].SizeOfBitMap << 16) >> 12)] )
    {
      break;
    }
    v8 = v9;
    v9 = *(_RTL_BITMAP **)&v9->SizeOfBitMap;
  }
  while ( v9 );
  if ( !v9 )
LABEL_18:
    KeBugCheckEx(0x1Au, 0x2102uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  v11 = (unsigned int)((__int64)(a2 - (unsigned __int64)v9->Buffer) >> 3) >> 4;
  if ( !RtlAreBitsSet(v9 + 1, v11, v7) )
    KeBugCheckEx(0x1Au, 0x2103uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  RtlClearBits(v9 + 1, v11, v7);
  if ( RtlNumberOfSetBits(v9 + 1) )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
  else
  {
    SizeOfBitMap = v9[1].SizeOfBitMap;
    v13 = (__int64)v9->Buffer << 25 >> 16;
    if ( a1 )
    {
      v14 = 11;
      v15 = 0LL;
    }
    else
    {
      MiInitializeTbFlushList((__int64)v18, 0, 20);
    }
    MiReturnSystemVa(v13, v13 + (SizeOfBitMap << 16), v14, v15);
    v16 = *(_QWORD *)&v9->SizeOfBitMap;
    if ( v8 )
      *(_QWORD *)&v8->SizeOfBitMap = v16;
    else
      qword_140388408[a1] = v16;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v9, 0);
  }
}
