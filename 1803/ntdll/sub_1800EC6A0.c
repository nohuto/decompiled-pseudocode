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

void __fastcall __noreturn sub_1800EC6A0(__int64 a1)
{
  int v2; // eax
  int HeapInformation; // edi
  unsigned __int64 *v4; // r15
  __int64 v5; // rax
  _QWORD **v6; // r12
  __int64 v7; // r9
  int v8; // r14d
  _QWORD v9[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v11[14]; // [rsp+88h] [rbp-19h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 0x10000000 )
  {
    v9[0] = 1LL;
    v9[1] = -1LL;
    WORD1(v9[0]) = *(_WORD *)(a1 + 80);
    v2 = RtlSetHeapInformation(0LL, 5, (__int64)v9, 0x10uLL);
    HeapInformation = v2;
LABEL_3:
    *(_DWORD *)(a1 + 28) = v2;
    goto LABEL_16;
  }
  v4 = (unsigned __int64 *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
    v5 = *(_QWORD *)(a1 + 8);
  else
    v5 = 0x10000LL;
  v6 = (_QWORD **)(a1 + 48);
  *v4 = v5;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      v2 = sub_180060EC8(*v6, *v4, (_QWORD *)(a1 + 32), v7);
      goto LABEL_3;
    }
    if ( v8 == 0x20000000 )
    {
      memset(v10, 0, sizeof(v10));
      *(_DWORD *)(a1 + 28) = 0;
      LODWORD(v10[0]) = 1;
      v10[1] = -1LL;
      v10[2] = sub_1800ECE90;
      v10[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v10, 0x20uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
    else
    {
      memset(v11, 0, 0x58uLL);
      v11[1] = *(_QWORD *)(a1 + 16);
      v11[0] = -1LL;
      v11[3] = sub_1800EC590;
      LODWORD(v11[2]) = v8;
      v11[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v11, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_16:
  if ( *(_QWORD *)(a1 + 48) )
    ZwUnmapViewOfSection();
  if ( *(_QWORD *)a1 )
    ZwClose();
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
