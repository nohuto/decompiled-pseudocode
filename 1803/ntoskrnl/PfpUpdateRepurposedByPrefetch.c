/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x1404BB98C
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140491FC0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PfpGetPageListCount @ 0x1404BBA90 (PfpGetPageListCount.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 PageListCount; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  _OWORD *result; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD *v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v22[6]; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v23[5]; // [rsp+A0h] [rbp-68h] BYREF

  MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v22, 0xB0u, a4, &v21);
  PfpGetPageListCount((char *)a1 + 104, 0LL, 7LL);
  PageListCount = PfpGetPageListCount((char *)v23 + 8, 0LL, v6);
  v9 = PageListCount - v8;
  if ( v9 <= a2 )
    a2 = v9;
  if ( a2 )
    _InterlockedExchangeAdd64(&qword_1403CD830, a2);
  result = v22;
  v11 = v22[1];
  *a1 = v22[0];
  v12 = v22[2];
  a1[1] = v11;
  v13 = v22[3];
  a1[2] = v12;
  v14 = v22[4];
  a1[3] = v13;
  v15 = v22[5];
  a1[4] = v14;
  v16 = v23[0];
  a1[5] = v15;
  v17 = v23[2];
  a1[6] = v16;
  v18 = a1 + 8;
  *(v18 - 1) = v23[1];
  v19 = v23[3];
  *v18 = v17;
  v20 = v23[4];
  v18[1] = v19;
  v18[2] = v20;
  return result;
}
