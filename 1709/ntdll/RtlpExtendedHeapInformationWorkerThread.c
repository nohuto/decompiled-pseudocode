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

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  int Tags; // eax
  int HeapInformation; // edi
  unsigned __int64 *v4; // rsi
  _QWORD **v5; // r12
  __int64 v6; // r9
  int v7; // r15d
  _QWORD v8[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v9[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v10[14]; // [rsp+88h] [rbp-19h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 0x10000000 )
  {
    v8[0] = 1LL;
    v8[1] = -1LL;
    WORD1(v8[0]) = *(_WORD *)(a1 + 80);
    Tags = RtlSetHeapInformation(0LL, 5, (__int64)v8, 0x10uLL);
    HeapInformation = Tags;
LABEL_3:
    *(_DWORD *)(a1 + 28) = Tags;
    goto LABEL_16;
  }
  v4 = (unsigned __int64 *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
    *v4 = *(_QWORD *)(a1 + 8);
  else
    *v4 = 0x10000LL;
  v5 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 == 0x40000000 )
    {
      (*v5)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v5, *v4, (_QWORD *)(a1 + 32), v6);
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      memset(v9, 0, sizeof(v9));
      *(_DWORD *)(a1 + 28) = 0;
      LODWORD(v9[0]) = 1;
      v9[1] = -1LL;
      v9[2] = RtlpHpRemoteStackSerializeWriter;
      v9[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v9, 0x20uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
    else
    {
      memset(v10, 0, 0x58uLL);
      v10[1] = *(_QWORD *)(a1 + 16);
      v10[0] = -1LL;
      v10[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v10[2]) = v7;
      v10[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v10, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_16:
  if ( *(_QWORD *)(a1 + 48) )
    NtUnmapViewOfSection();
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
