/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x140257C70
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  unsigned int v2; // ebp
  __int16 v5; // ax
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax

  v2 = 0;
  KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 32), WrPageIn, 0, 0, 0LL);
  v5 = *(_WORD *)(BugCheckParameter4 + 274);
  if ( (v5 & 0x200) != 0 )
  {
    MiRetardMdl(BugCheckParameter4 + 264);
    *(_QWORD *)(BugCheckParameter4 + 88) = 0LL;
    v5 = *(_WORD *)(BugCheckParameter4 + 274);
    *(_DWORD *)(BugCheckParameter4 + 80) = -1073741670;
  }
  if ( (v5 & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter4 + 288), (PMDL)(BugCheckParameter4 + 264));
  if ( *(int *)(BugCheckParameter4 + 80) < 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter4 + 80);
  }
  else
  {
    v6 = *(unsigned int *)(BugCheckParameter4 + 304);
    v7 = *(_QWORD *)(BugCheckParameter4 + 88);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, BugCheckParameter4);
  }
  v8 = (__int64 *)(BugCheckParameter4 + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *(_DWORD *)(BugCheckParameter4 + 80);
    if ( *(int *)(BugCheckParameter4 + 80) < 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 180);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( v12 < 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter4, 0);
  return v2;
}
