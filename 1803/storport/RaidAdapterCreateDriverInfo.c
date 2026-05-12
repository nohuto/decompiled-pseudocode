/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1C0062BAC
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C0062DC8 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00260A8 (RaidAdapterFreeDriverInfo.c)
 *     RtlStringCbCopyW @ 0x1C002BE70 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, __int64 a2, const wchar_t *a3, PVOID **a4, _BYTE *a5)
{
  _BYTE *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  PVOID *v11; // rbp
  PVOID *Pool; // rax
  PVOID *v14; // rdi
  __int64 v15; // rax
  SIZE_T v16; // r14
  wchar_t *v17; // rax
  wchar_t *v18; // rsi
  wchar_t *v19; // rax
  wchar_t *v20; // rsi
  _QWORD *v21; // rsi
  PVOID v22; // rax
  PVOID v23; // rsi
  PVOID *v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = (PVOID *)a2;
  v5 = a5;
  v6 = (_QWORD *)(a2 + 56);
  v7 = *(_QWORD **)(a2 + 56);
  v8 = 0;
  *a4 = 0LL;
  v11 = (PVOID *)a2;
  *v5 = 0;
  if ( v7 == (_QWORD *)(a2 + 56) )
  {
LABEL_5:
    Pool = (PVOID *)RaidAllocatePool(NonPagedPoolNx, 0x78uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v25 = Pool;
    v14 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x78uLL);
      v14[2] = v14 + 1;
      v14[1] = v14 + 1;
      v15 = -1LL;
      *(_DWORD *)v14 = 120;
      do
        ++v15;
      while ( a3[v15] );
      v16 = (unsigned int)(2 * v15 + 2);
      v17 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, v16, 0x44436152u, *(_QWORD *)(a1 + 8));
      v18 = v17;
      if ( v17 )
      {
        memset(v17, 0, (unsigned int)v16);
        RtlStringCbCopyW(v18, (unsigned int)v16, a3);
        v14[3] = v18;
        v19 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x22uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
        v20 = v19;
        if ( v19 )
        {
          memset(v19, 0, 0x22uLL);
          RtlStringCbCopyW(v20, 0x22uLL, L"dumpstorport.sys");
          v14[5] = v20;
          v21 = RaidAllocatePool(NonPagedPoolNx, 0x1AuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
          if ( v21 )
          {
            *v21 = 0LL;
            v21[1] = 0LL;
            v21[2] = 0LL;
            *((_WORD *)v21 + 12) = 0;
            RtlStringCbCopyW((NTSTRSAFE_PWSTR)v21, 0x1AuLL, L"storport.sys");
            v14[6] = v21;
            v22 = RaidAllocatePool(NonPagedPoolNx, 0xD0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
            v23 = v22;
            if ( v22 )
            {
              memset(v22, 0, 0xD0uLL);
              *((_DWORD *)v14 + 15) = 208;
              v14[8] = v23;
              v14[13] = v11;
              *a4 = v14;
              return v8;
            }
          }
        }
      }
      RaidAdapterFreeDriverInfo(&v25);
    }
    return (unsigned int)-1073741670;
  }
  while ( _wcsicmp((const wchar_t *)v7[2], a3) )
  {
    v7 = (_QWORD *)*v7;
    if ( v7 == v6 )
    {
      v11 = v25;
      goto LABEL_5;
    }
  }
  *a4 = (PVOID *)(v7 - 1);
  *v5 = 1;
  return v8;
}
