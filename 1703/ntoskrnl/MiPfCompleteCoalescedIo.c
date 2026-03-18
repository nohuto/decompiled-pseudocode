/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x140213BC8
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiPfCompleteInPageSupport @ 0x14010B0F0 (MiPfCompleteInPageSupport.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(char *P, char *a2)
{
  int v4; // ecx
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r8
  __int64 **v7; // rsi
  unsigned int v8; // ebp
  __int64 *v9; // rdi
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
  v7 = (__int64 **)(P + 16);
  v8 = 0;
  if ( v4 < 0 )
    v8 = *((_DWORD *)P + 20);
  while ( *v7 != (__int64 *)v7 )
  {
    v9 = *v7;
    v10 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v7 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v7;
    *((_DWORD *)v9 + 20) = *((_DWORD *)P + 20);
    if ( *((int *)P + 20) < 0 )
      v9[11] = 0LL;
    else
      v9[11] = *((unsigned int *)v9 + 45);
    KeSetEvent((PRKEVENT)(v9 + 4), 0, 0);
    v11 = MiPfCompleteInPageSupport((ULONG_PTR)v9, a2);
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073740748 )
      v8 = v11;
  }
  ExFreePoolWithTag(P, 0);
  return v8;
}
