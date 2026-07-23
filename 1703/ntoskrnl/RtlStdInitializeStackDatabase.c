/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x1406E7DFC
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1406E7F30 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlStdInitializeStackDatabase(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  size_t v6; // r9
  size_t v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  _SLIST_HEADER *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  if ( a2 && (a2 != a3 || !a1) )
    return 3221225485LL;
  v6 = 24LL * (a3 < 0x1000000 ? 5569 : 9551);
  v7 = v6 + 752;
  if ( a3 <= v6 + 752 || !a1 || a2 != a3 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 720) = a3 < 0x1000000 ? 5569 : 9551;
  *(_QWORD *)(a1 + 168) = a1 + a3;
  *(_QWORD *)(a1 + 184) = a1 + a3;
  *(_BYTE *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = a1;
  memset((void *)(a1 + 728), 0, v6);
  v8 = 32LL;
  v9 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = (_SLIST_HEADER *)(a1 + 208);
  v11 = a1 + v9;
  *(_QWORD *)(a1 + 160) = v11;
  *(_QWORD *)(a1 + 120) = v11;
  do
  {
    InitializeSListHead(v10++);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)a1 = 0LL;
  v12 = 0LL;
  for ( *(_BYTE *)(a1 + 8) = 0; (unsigned int)v12 < *(_DWORD *)(a1 + 720); *(_BYTE *)(a1 + 8 * v13 + 744) = 0 )
  {
    v13 = 3 * v12;
    v12 = (unsigned int)(v12 + 1);
    *(_QWORD *)(a1 + 8 * v13 + 736) = 0LL;
  }
  *a4 = a1;
  return 0LL;
}
