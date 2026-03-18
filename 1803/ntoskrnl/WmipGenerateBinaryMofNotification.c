/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x140652BAC
 * Callers:
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x140604960 (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfExW @ 0x14006E6CC (RtlStringCbPrintfExW.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  SIZE_T v10; // r15
  __int64 v11; // rbp
  char *PoolWithTag; // rax
  char *v13; // rdi
  __int64 v14; // rdx
  int v15; // eax
  size_t v16; // rbp
  char *v17; // r15
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 88);
    do
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( (v6 & 2) != 0 )
      {
        v9 = v4;
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v19) );
        v8 = v19 + 2;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          return;
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(*v5 + 2 * v7 + 4) );
        v8 = v7 + 7;
        v9 = v4;
      }
      v10 = 2 * v8 + 74;
      v11 = 2 * v8;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x70696D57u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        *(_DWORD *)v13 = v10;
        *((_DWORD *)v13 + 1) = 3;
        *((_QWORD *)v13 + 1) = 1LL;
        *((_DWORD *)v13 + 11) = 10;
        *(_OWORD *)(v13 + 24) = *a2;
        *((_QWORD *)v13 + 2) = MEMORY[0xFFFFF78000000014];
        v15 = v11 + 2;
        *((_DWORD *)v13 + 14) = 72;
        v16 = v11 - 2;
        *((_DWORD *)v13 + 15) = v15;
        *((_DWORD *)v13 + 12) = 64;
        *((_WORD *)v13 + 32) = 0;
        v17 = &v13[*((unsigned int *)v13 + 14)];
        *(_WORD *)v17 = 0;
        v18 = *(_DWORD *)(a1 + 16);
        if ( (v18 & 2) != 0 )
        {
          *((_WORD *)v17 + 1) = v16;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v17 + 2, v16, *(NTSTRSAFE_PCWSTR *)(*v5 + 8 * v9));
        }
        else if ( (v18 & 1) != 0 )
        {
          LODWORD(v20) = v4 + *(_DWORD *)*v5;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v17 + 2, v16, 0LL, 0LL, 0x200u, L"%ws%d", *v5 + 4LL, v20);
          *((_WORD *)v17 + 1) = v16;
        }
        LOBYTE(v14) = 1;
        WmipProcessEvent(v13, v14, 0);
        ExFreePoolWithTag(v13, 0);
        v5 = (_QWORD *)(a1 + 88);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
