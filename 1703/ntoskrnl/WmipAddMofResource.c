/*
 * XREFs of WmipAddMofResource @ 0x1405A12B0
 * Callers:
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipInitializeDataStructs @ 0x1407FF6C4 (WmipInitializeDataStructs.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     WmipAllocEntry @ 0x1405A125C (WmipAllocEntry.c)
 *     WmipInsertMofResource @ 0x1405A1470 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405A14F4 (WmipFindMRByNames.c)
 */

__int64 __fastcall WmipAddMofResource(__int64 a1, const wchar_t *a2, char a3, const wchar_t *a4, _BYTE *a5)
{
  unsigned int inserted; // ebx
  __int64 MRByNames; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  SIZE_T v15; // r12
  SIZE_T v16; // rsi
  PVOID PoolWithTag; // rax
  wchar_t *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx

  inserted = 0;
  MRByNames = WmipFindMRByNames(a2, a4);
  if ( MRByNames )
  {
    *a5 = 0;
  }
  else
  {
    v12 = WmipAllocEntry((__int64)&WmipMRChunkInfo);
    MRByNames = (__int64)v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    if ( a3 )
      *((_DWORD *)v12 + 4) |= 1u;
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
    v15 = 2 * v14 + 2;
    *(_QWORD *)(MRByNames + 40) = ExAllocatePoolWithTag(PagedPool, v15, 0x70696D57u);
    do
      ++v13;
    while ( a4[v13] );
    v16 = 2 * v13 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x70696D57u);
    v18 = *(wchar_t **)(MRByNames + 40);
    *(_QWORD *)(MRByNames + 48) = PoolWithTag;
    if ( !v18 || !PoolWithTag )
    {
      inserted = -1073741670;
      goto LABEL_5;
    }
    RtlStringCbCopyW(v18, v15, a2);
    RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(MRByNames + 48), v16, a4);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v19 = WmipMRHeadPtr;
    v20 = *(__int64 **)(WmipMRHeadPtr + 8);
    if ( *v20 != WmipMRHeadPtr )
      __fastfail(3u);
    *(_QWORD *)(MRByNames + 8) = v20;
    *(_QWORD *)MRByNames = v19;
    *v20 = MRByNames;
    *(_QWORD *)(v19 + 8) = MRByNames;
    KeReleaseMutex(&WmipSMMutex, 0);
    *a5 = 1;
  }
  if ( a1 )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    inserted = WmipInsertMofResource(a1, MRByNames);
    KeReleaseMutex(&WmipSMMutex, 0);
LABEL_5:
    WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, (volatile signed __int64 *)MRByNames);
  }
  return inserted;
}
