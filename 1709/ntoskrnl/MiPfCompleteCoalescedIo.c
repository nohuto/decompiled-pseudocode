/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x14021BACC
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14002083C (MiPfCompleteInPageSupport.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(char *P, __int64 a2)
{
  int v4; // ecx
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r8
  char *v7; // rsi
  unsigned int v8; // ebp
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ecx

  KeWaitForSingleObject(P + 32, WrPageIn, 0, 0, 0LL);
  if ( (*((_WORD *)P + 133) & 0x200) != 0 )
  {
    MiRetardMdl((__int64)(P + 256));
    *((_QWORD *)P + 11) = 0LL;
    *((_DWORD *)P + 20) = -1073741670;
  }
  if ( (P[266] & 1) != 0 )
    MmUnmapLockedPages(*((PVOID *)P + 35), (PMDL)(P + 256));
  v4 = *((_DWORD *)P + 20);
  if ( v4 >= 0 )
  {
    v5 = *((unsigned int *)P + 74);
    v6 = *((_QWORD *)P + 11);
    if ( v6 != v5 )
      KeBugCheckEx(0x7Au, 5uLL, v6, v5, (ULONG_PTR)P);
  }
  v7 = P + 16;
  v8 = 0;
  if ( v4 < 0 )
    v8 = *((_DWORD *)P + 20);
  while ( *(char **)v7 != v7 )
  {
    v9 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *(_QWORD *)v7 = v10;
    *(_QWORD *)(v10 + 8) = v7;
    *(_DWORD *)(v9 + 80) = *((_DWORD *)P + 20);
    if ( *((int *)P + 20) < 0 )
      *(_QWORD *)(v9 + 88) = 0LL;
    else
      *(_QWORD *)(v9 + 88) = *(unsigned int *)(v9 + 180);
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v11 = MiPfCompleteInPageSupport(v9, a2);
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073740748 )
      v8 = v11;
  }
  ExFreePoolWithTag(P, 0);
  return v8;
}
