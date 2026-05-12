/*
 * XREFs of RaidUnitCreateDumpDriver @ 0x1C003D2B0
 * Callers:
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidUnitFreeDumpDriver @ 0x1C003D5A8 (RaidUnitFreeDumpDriver.c)
 *     RtlStringCbCopyW @ 0x1C003F730 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RaidUnitCreateDumpDriver(__int64 a1, __int64 a2, const wchar_t *a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // r15
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  _BYTE *Pool; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  SIZE_T v15; // rbp
  wchar_t *v16; // rax
  wchar_t *v17; // rsi
  wchar_t *v18; // rax
  wchar_t *v19; // rsi
  _QWORD *v20; // rsi
  PVOID v21; // rax
  PVOID v22; // rsi

  v5 = a5;
  v6 = (_QWORD *)(a2 + 48);
  v7 = *(_QWORD **)(a2 + 48);
  v8 = 0;
  *a4 = 0LL;
  *v5 = 0;
  while ( v7 != v6 )
  {
    if ( !_wcsicmp((const wchar_t *)v7[2], a3) )
    {
      *a4 = v7 - 1;
      *v5 = 1;
      return v8;
    }
    v7 = (_QWORD *)*v7;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x80uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  a5 = Pool;
  v13 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x80uLL);
    v14 = -1LL;
    *(_DWORD *)v13 = 128;
    do
      ++v14;
    while ( a3[v14] );
    v15 = (unsigned int)(2 * v14 + 2);
    v16 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, v15, 0x44436152u, *(_QWORD *)(a1 + 8));
    v17 = v16;
    if ( !v16 )
      goto LABEL_14;
    memset(v16, 0, (unsigned int)v15);
    RtlStringCbCopyW(v17, (unsigned int)v15, a3);
    v13[3] = v17;
    v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x22uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v19 = v18;
    if ( !v18 )
      goto LABEL_14;
    memset(v18, 0, 0x22uLL);
    RtlStringCbCopyW(v19, 0x22uLL, L"dumpstorport.sys");
    v13[5] = v19;
    v20 = RaidAllocatePool(NonPagedPoolNx, 0x1AuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    if ( !v20 )
      goto LABEL_14;
    *v20 = 0LL;
    v20[1] = 0LL;
    v20[2] = 0LL;
    *((_WORD *)v20 + 12) = 0;
    RtlStringCbCopyW((NTSTRSAFE_PWSTR)v20, 0x1AuLL, L"storport.sys");
    v13[6] = v20;
    v21 = RaidAllocatePool(NonPagedPoolNx, 0xD0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v22 = v21;
    if ( v21 )
    {
      memset(v21, 0, 0xD0uLL);
      *((_DWORD *)v13 + 14) = 208;
      v13[8] = v22;
      *a4 = v13;
    }
    else
    {
LABEL_14:
      v8 = -1073741670;
      RaidUnitFreeDumpDriver(&a5);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
