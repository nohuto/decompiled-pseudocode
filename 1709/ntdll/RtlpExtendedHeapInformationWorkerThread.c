/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800F02A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x1800137A0 (RtlQueryHeapInformation.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x180084D80 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  NTSTATUS Tags; // eax
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
    Tags = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x10uLL);
    v3 = Tags;
LABEL_3:
    *((_DWORD *)a1 + 7) = Tags;
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
      Tags = RtlpHpTagQueryTags(*v5, *ViewSize, (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v6 == 0x20000000 )
    {
      memset(v9, 0, sizeof(v9));
      *((_DWORD *)a1 + 7) = 0;
      LODWORD(v9[0]) = 1;
      v9[1] = -1LL;
      v9[2] = RtlpHpRemoteStackSerializeWriter;
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
      v10[3] = RtlpExtendedHeapInformationWorkerCallback;
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
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v3;
  RtlExitUserThread(0);
}
