/*
 * XREFs of PopCompressHiberBlocks @ 0x140432774
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopGetNextTable @ 0x140241D08 (PopGetNextTable.c)
 *     PopAddPagesToCompressedPageSet @ 0x1404321C8 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14043290C (PopCountDataAsProduced.c)
 */

__int64 __fastcall PopCompressHiberBlocks(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  const void *v8; // r9
  const void *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-188h]
  unsigned int v11[4]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-158h] BYREF
  const void *v13; // [rsp+68h] [rbp-140h]
  _BYTE v14[128]; // [rsp+100h] [rbp-A8h] BYREF

  while ( 1 )
  {
    LOBYTE(v10) = a3;
    result = PopGetNextTable(a1, (__int64)v11, (__int64)v14, (__int64)v12, v10, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v13;
    *(_QWORD *)(a2 + 56) += result;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v11, v8, a3, result, 0LL);
    PopCountDataAsProduced(a2, v9, v11, v14, v7, 0);
  }
  return result;
}
