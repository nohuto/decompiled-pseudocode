/*
 * XREFs of sub_1800EC6A0 @ 0x1800EC6A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall __noreturn sub_1800EC6A0(char *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // edi
  SIZE_T *ViewSize; // r15
  __int64 v5; // rax
  _QWORD **v6; // r12
  int v7; // r14d
  void *v8; // rdx
  _QWORD HeapInformation[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v11[14]; // [rsp+88h] [rbp-19h] BYREF

  if ( *((_DWORD *)a1 + 6) == 0x10000000 )
  {
    HeapInformation[0] = 1LL;
    HeapInformation[1] = -1LL;
    WORD1(HeapInformation[0]) = *((_WORD *)a1 + 40);
    v2 = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x10uLL);
    v3 = v2;
LABEL_3:
    *((_DWORD *)a1 + 7) = v2;
    goto LABEL_16;
  }
  ViewSize = (SIZE_T *)(a1 + 56);
  if ( *((_DWORD *)a1 + 6) == 0x40000000 )
    v5 = *((_QWORD *)a1 + 1);
  else
    v5 = 0x10000LL;
  v6 = (_QWORD **)(a1 + 48);
  *ViewSize = v5;
  *((_QWORD *)a1 + 8) = 0LL;
  v3 = ZwMapViewOfSection(
         *(HANDLE *)a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         *ViewSize,
         (PLARGE_INTEGER)a1 + 8,
         ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v3 >= 0 )
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    v7 = *((_DWORD *)a1 + 6);
    if ( v7 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      v2 = sub_180060EC8(*v6, *ViewSize, (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      memset(v10, 0, sizeof(v10));
      *((_DWORD *)a1 + 7) = 0;
      LODWORD(v10[0]) = 1;
      v10[1] = -1LL;
      v10[2] = sub_1800ECE90;
      v10[3] = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, v10, 0x20uLL, 0LL);
      if ( v3 >= 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
    else
    {
      memset(v11, 0, 0x58uLL);
      v11[1] = *((_QWORD *)a1 + 2);
      v11[0] = -1LL;
      v11[3] = sub_1800EC590;
      LODWORD(v11[2]) = v7;
      v11[4] = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v11, 0x58uLL, 0LL);
      if ( v3 >= 0 && *((int *)a1 + 7) < 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_16:
  v8 = (void *)*((_QWORD *)a1 + 6);
  if ( v8 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v3;
  RtlExitUserThread(0);
}
