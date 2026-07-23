/*
 * XREFs of sub_1800F0640 @ 0x1800F0640
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x180005740 (RtlQueryHeapInformation.c)
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall __noreturn sub_1800F0640(char *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // edi
  SIZE_T *ViewSize; // rsi
  _QWORD **v5; // r12
  int v6; // r15d
  void *v7; // rdx
  _QWORD HeapInformation[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v9[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v10[14]; // [rsp+88h] [rbp-19h] BYREF

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
    *ViewSize = *((_QWORD *)a1 + 1);
  else
    *ViewSize = 0x10000LL;
  v5 = (_QWORD **)(a1 + 48);
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
    v6 = *((_DWORD *)a1 + 6);
    if ( v6 == 0x40000000 )
    {
      (*v5)[1] = -1LL;
      v2 = sub_180006F80(*v5, *ViewSize, (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v6 == 0x20000000 )
    {
      memset(v9, 0, sizeof(v9));
      *((_DWORD *)a1 + 7) = 0;
      LODWORD(v9[0]) = 1;
      v9[1] = -1LL;
      v9[2] = sub_1800F0B70;
      v9[3] = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, v9, 0x20uLL, 0LL);
      if ( v3 >= 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
    else
    {
      memset(v10, 0, 0x58uLL);
      v10[1] = *((_QWORD *)a1 + 2);
      v10[0] = -1LL;
      v10[3] = sub_1800F0530;
      LODWORD(v10[2]) = v6;
      v10[4] = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v10, 0x58uLL, 0LL);
      if ( v3 >= 0 && *((int *)a1 + 7) < 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_16:
  v7 = (void *)*((_QWORD *)a1 + 6);
  if ( v7 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v3;
  RtlExitUserThread(0);
}
