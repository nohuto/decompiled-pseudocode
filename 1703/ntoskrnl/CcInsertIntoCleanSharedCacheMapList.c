/*
 * XREFs of CcInsertIntoCleanSharedCacheMapList @ 0x1400ADDA8
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 */

_QWORD *__fastcall CcInsertIntoCleanSharedCacheMapList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v1 = *(_QWORD *)(a1 + 528);
  v3 = v1 + 160;
  v4 = v1 + 176;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v5 = (_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v6 + 8) != a1 + 120 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(a1 + 128) = v8;
    *v8 = v5;
    *(_QWORD *)(v4 + 8) = v5;
  }
  result = (_QWORD *)(a1 + 136);
  v10 = *(_QWORD *)(a1 + 136);
  v11 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD *)(v10 + 8) != a1 + 136 || (_QWORD *)*v11 != result )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = *(_QWORD **)(v3 + 8);
  if ( *v12 != v3 )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(a1 + 144) = v12;
  *v12 = result;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
