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

void __fastcall __noreturn sub_1800F0640(__int64 a1)
{
  int v2; // eax
  int HeapInformation; // edi
  unsigned __int64 *v4; // rsi
  _QWORD **v5; // r12
  int v6; // r15d
  _QWORD v7[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v8[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v9[14]; // [rsp+88h] [rbp-19h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 0x10000000 )
  {
    v7[0] = 1LL;
    v7[1] = -1LL;
    WORD1(v7[0]) = *(_WORD *)(a1 + 80);
    v2 = RtlSetHeapInformation(0LL, 5, (__int64)v7, 0x10uLL);
    HeapInformation = v2;
LABEL_3:
    *(_DWORD *)(a1 + 28) = v2;
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
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 == 0x40000000 )
    {
      (*v5)[1] = -1LL;
      v2 = sub_180006F80(*v5, *v4, (_QWORD *)(a1 + 32));
      goto LABEL_3;
    }
    if ( v6 == 0x20000000 )
    {
      memset(v8, 0, sizeof(v8));
      *(_DWORD *)(a1 + 28) = 0;
      LODWORD(v8[0]) = 1;
      v8[1] = -1LL;
      v8[2] = sub_1800F0B70;
      v8[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v8, 0x20uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
    else
    {
      memset(v9, 0, 0x58uLL);
      v9[1] = *(_QWORD *)(a1 + 16);
      v9[0] = -1LL;
      v9[3] = sub_1800F0530;
      LODWORD(v9[2]) = v6;
      v9[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v9, 0x58uLL, 0LL);
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
