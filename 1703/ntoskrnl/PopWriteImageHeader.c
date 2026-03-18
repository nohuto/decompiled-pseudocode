/*
 * XREFs of PopWriteImageHeader @ 0x140419DFC
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140189130 (tcpxsum.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 */

__int64 (*__fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int128 v19; // xmm1
  __int64 (*result)(void); // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_14034B5F0 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  HIDWORD(qword_14034B7B0) = ((unsigned int)dword_14034B2C0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  qword_14034B620 = PerformanceCounter.QuadPart;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v11 = qword_14034B780;
    v12 = qword_14034B600;
    v13 = qword_14034B5F8;
    do
    {
      v14 = v10++;
      v14 <<= 7;
      v11 += *(_QWORD *)(v14 + *(_QWORD *)(a1 + 272) + 56);
      qword_14034B780 = v11;
      v13 += *(_QWORD *)(v14 + *(_QWORD *)(a1 + 272) + 40);
      qword_14034B5F8 = v13;
      v12 += *(_QWORD *)(v14 + *(_QWORD *)(a1 + 272) + 80);
      qword_14034B600 = v12;
    }
    while ( v10 < *(_DWORD *)(a1 + 264) );
  }
  qword_14034B790 = qword_14034B7A8;
  qword_14034B7A0 = (unsigned int)qword_14034B7B0;
  qword_14034B7A8 += qword_14034B788;
  v15 = qword_14034B778;
  LODWORD(qword_14034B7B0) = qword_14034B798 + qword_14034B7B0;
  *(_QWORD *)(a2 + 88) = qword_14034B778;
  if ( byte_14034B2E1 )
    *(_QWORD *)(a2 + 88) = qword_14034B780 + v15;
  v16 = 3LL;
  v17 = a2 + 136;
  v18 = &qword_14034B5D8;
  do
  {
    *(_OWORD *)v17 = *(_OWORD *)v18;
    *(_OWORD *)(v17 + 16) = *((_OWORD *)v18 + 1);
    *(_OWORD *)(v17 + 32) = *((_OWORD *)v18 + 2);
    *(_OWORD *)(v17 + 48) = *((_OWORD *)v18 + 3);
    *(_OWORD *)(v17 + 64) = *((_OWORD *)v18 + 4);
    *(_OWORD *)(v17 + 80) = *((_OWORD *)v18 + 5);
    *(_OWORD *)(v17 + 96) = *((_OWORD *)v18 + 6);
    v17 += 128LL;
    v19 = *((_OWORD *)v18 + 7);
    v18 += 16;
    *(_OWORD *)(v17 - 16) = v19;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v17 = *(_OWORD *)v18;
  *(_OWORD *)(v17 + 16) = *((_OWORD *)v18 + 1);
  *(_OWORD *)(v17 + 32) = *((_OWORD *)v18 + 2);
  *(_OWORD *)(v17 + 48) = *((_OWORD *)v18 + 3);
  *(_OWORD *)(v17 + 64) = *((_OWORD *)v18 + 4);
  *(_OWORD *)(v17 + 80) = *((_OWORD *)v18 + 5);
  *(_OWORD *)(v17 + 96) = *((_OWORD *)v18 + 6);
  *(_QWORD *)(v17 + 112) = v18[14];
  *(_DWORD *)a2 = 1380075848;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x3D8u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(__int64 (**)(void))(*(_QWORD *)(a1 + 168) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
