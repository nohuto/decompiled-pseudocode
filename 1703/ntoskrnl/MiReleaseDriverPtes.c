/*
 * XREFs of MiReleaseDriverPtes @ 0x140583170
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x140583130 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x1406B3390 (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlAreBitsSet @ 0x140025E10 (RtlAreBitsSet.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     MiUnlockDriverMappings @ 0x140125548 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x140125758 (MiLockDriverMappings.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  __int64 v14; // r9
  int v15; // r11d
  __int64 v16; // rax
  char v18[192]; // [rsp+40h] [rbp-108h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v7 = (unsigned int)(a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v9 = (_RTL_BITMAP *)qword_14036C0C8[v4];
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
      v15 = 11;
      v14 = 0LL;
    }
    else
    {
      MiInitializeTbFlushList((__int64)v18, 0, 20);
    }
    MiReturnSystemVa(v13, v13 + (SizeOfBitMap << 16), v15, v14);
    v16 = *(_QWORD *)&v9->SizeOfBitMap;
    if ( v8 )
      *(_QWORD *)&v8->SizeOfBitMap = v16;
    else
      qword_14036C0C8[a1] = v16;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v9, 0);
  }
}
