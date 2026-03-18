/*
 * XREFs of RtlpHpMetadataAlloc @ 0x140295B48
 * Callers:
 *     RtlpHpHeapAllocate @ 0x140294D44 (RtlpHpHeapAllocate.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140295D90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataHeapStart @ 0x140295DD8 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  int v5; // ebp
  __int64 v7; // rbx
  _DWORD **v8; // rsi
  _QWORD *v9; // r9
  char v10; // r8
  _DWORD *v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  v17 = *a4;
  v7 = 0LL;
  v8 = (_DWORD **)RtlpHpMetadataHeapCtxGet(&v17, a2, a3, a4);
  *(_QWORD *)&v17 = *v9;
  v10 = BYTE1(v17);
  BYTE3(v17) = 0;
  *((_QWORD *)&v17 + 1) = 0LL;
  if ( BYTE1(v17) >= 2u )
    v10 = 2;
  BYTE1(v17) = v10;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v17) >= 0 )
  {
    v11 = *v8;
    if ( !v5 )
      return RtlpHpAllocateHeap(v11, a1, 0x1000000, 0);
    v12 = (_DWORD)v11 + 112;
    v13 = (unsigned int)v11[32];
    v14 = (_DWORD)v11 + 232;
    if ( a1 <= v13 )
      v14 = v12;
    return (void *)RtlpHpSegAlloc(v14, a1, a1, a2, a2 < a1 ? 83886080 : 0x1000000);
  }
  return (void *)v7;
}
