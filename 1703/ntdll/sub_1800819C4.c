/*
 * XREFs of sub_1800819C4 @ 0x1800819C4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 sub_1800819C4()
{
  struct _PEB *v0; // rsi
  unsigned int v1; // edi
  char *Heap; // rax
  char *v3; // rbx
  __int64 v4; // rax
  signed __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *Src; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentPeb();
  Src = v0->ProcessParameters;
  v1 = *((_DWORD *)Src + 1);
  Heap = (char *)RtlAllocateHeap(v0->ProcessHeap, 0, v1);
  v3 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, Src, v1);
  v4 = *((_QWORD *)v3 + 8);
  v5 = v3 - (_BYTE *)Src;
  if ( v4 )
    *((_QWORD *)v3 + 8) = v5 + v4;
  v6 = *((_QWORD *)v3 + 11);
  if ( v6 )
    *((_QWORD *)v3 + 11) = v5 + v6;
  v7 = *((_QWORD *)v3 + 13);
  if ( v7 )
    *((_QWORD *)v3 + 13) = v5 + v7;
  v8 = *((_QWORD *)v3 + 15);
  if ( v8 )
    *((_QWORD *)v3 + 15) = v5 + v8;
  v9 = *((_QWORD *)v3 + 23);
  if ( v9 )
    *((_QWORD *)v3 + 23) = v5 + v9;
  v10 = *((_QWORD *)v3 + 25);
  if ( v10 )
    *((_QWORD *)v3 + 25) = v5 + v10;
  v11 = *((_QWORD *)v3 + 27);
  if ( v11 )
    *((_QWORD *)v3 + 27) = v5 + v11;
  v12 = *((_QWORD *)v3 + 29);
  if ( v12 )
    *((_QWORD *)v3 + 29) = v5 + v12;
  v0->ProcessParameters = (PRTL_USER_PROCESS_PARAMETERS)v3;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Src, &RegionSize, 0x8000u);
  return 0LL;
}
