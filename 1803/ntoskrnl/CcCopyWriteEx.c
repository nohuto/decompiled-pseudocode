/*
 * XREFs of CcCopyWriteEx @ 0x1400AABC0
 * Callers:
 *     CcCopyWrite @ 0x14021FE70 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x140220020 (CcFastCopyWrite.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v9; // eax
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v9 = 0;
  if ( ((v9 >= 2 || CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart) && !v9
     || (*(_DWORD *)(a1 + 80) & 0x10) != 0)
    && !a4 )
  {
    return 0;
  }
  v10 = 2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v12 = *a2;
  v18 = v12;
  if ( (v12 & 0xFFF) == 0 && a3 >= 0x1000 )
    v10 = 3;
  HIDWORD(v16) = HIDWORD(v12);
  v13 = v10 | 4;
  if ( (((_WORD)a3 + (_WORD)v12) & 0xFFF) != 0 )
    v13 = v10;
  LODWORD(v16) = v12 & 0xFFFFF000;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( v17 - v16 > 0 )
  {
    v14 = v13;
    if ( (unsigned __int64)(v17 - v16) <= 0x1000 )
      v14 = v13 | 6;
  }
  else
  {
    v14 = 7;
  }
  return CcMapAndCopyInToCache(v11, a5, (unsigned int)&v18, a3, v14, a1, (__int64)&v17, a4, a6);
}
