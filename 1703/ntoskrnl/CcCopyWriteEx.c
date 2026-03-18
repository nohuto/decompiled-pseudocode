/*
 * XREFs of CcCopyWriteEx @ 0x14009D530
 * Callers:
 *     CcCopyWrite @ 0x1401DD900 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1401DDA30 (CcFastCopyWrite.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r11d
  int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  __int64 v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v10 = 0;
  if ( ((v10 >= 2 || CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart) && !v10
     || (*(_DWORD *)(a1 + 80) & 0x10) != 0)
    && !a4 )
  {
    return 0;
  }
  v11 = 2;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v13 = *a2;
  v19 = v13;
  if ( (v13 & 0xFFF) == 0 && a3 >= 0x1000 )
    v11 = 3;
  HIDWORD(v17) = HIDWORD(v13);
  v14 = v11 | 4;
  if ( (((_WORD)v13 + (_WORD)a3) & 0xFFF) != 0 )
    v14 = v11;
  LODWORD(v17) = v13 & 0xFFFFF000;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( v18 - v17 <= 0 )
  {
    v15 = v14 | 7;
  }
  else
  {
    v15 = v14;
    if ( (unsigned __int64)(v18 - v17) <= 0x1000 )
      v15 = v14 | 6;
  }
  return CcMapAndCopyInToCache(v12, a5, (unsigned int)&v19, a3, v15, a1, (__int64)&v18, a4, a6);
}
