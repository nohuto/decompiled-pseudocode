/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x140742F28
 * Callers:
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x1405905A0 (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140019CFC (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  SIZE_T v9; // r14
  __int64 v10; // rbp
  char *PoolWithTag; // rax
  char *v12; // rdi
  int v13; // eax
  size_t v14; // rbp
  char *v15; // r14
  int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v6) );
        v7 = v6 + 2;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v8 + 4) );
        v7 = v8 + 7;
      }
      v9 = 2 * v7 + 74;
      v10 = 2 * v7;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x70696D57u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        *(_DWORD *)v12 = v9;
        *((_DWORD *)v12 + 1) = 3;
        *((_QWORD *)v12 + 1) = 1LL;
        *((_DWORD *)v12 + 11) = 10;
        *(_OWORD *)(v12 + 24) = *a2;
        *((_QWORD *)v12 + 2) = MEMORY[0xFFFFF78000000014];
        v13 = v10 + 2;
        *((_DWORD *)v12 + 14) = 72;
        v14 = v10 - 2;
        *((_DWORD *)v12 + 15) = v13;
        *((_DWORD *)v12 + 12) = 64;
        *((_WORD *)v12 + 32) = 0;
        v15 = &v12[*((unsigned int *)v12 + 14)];
        *(_WORD *)v15 = 0;
        v16 = *(_DWORD *)(a1 + 16);
        if ( (v16 & 2) != 0 )
        {
          *((_WORD *)v15 + 1) = v14;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v15 + 2, v14, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 88) + 8LL * v4));
        }
        else if ( (v16 & 1) != 0 )
        {
          v17 = *(_DWORD **)(a1 + 88);
          LODWORD(v18) = v4 + *v17;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v15 + 2, v14, 0LL, 0LL, 0x200u, L"%ws%d", v17 + 1, v18);
          *((_WORD *)v15 + 1) = v14;
        }
        WmipProcessEvent(v12, 1, 0);
        ExFreePoolWithTag(v12, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
