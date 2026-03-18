/*
 * XREFs of sub_140175FBC @ 0x140175FBC
 * Callers:
 *     sub_1401760BC @ 0x1401760BC (sub_1401760BC.c)
 *     sub_140177004 @ 0x140177004 (sub_140177004.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 */

char __fastcall sub_140175FBC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  __int64 v6; // rax
  int v7; // ecx
  char v8; // al
  char result; // al
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1008))(a2, a3, v10);
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = a4 - (_QWORD)v10 + 4 * i;
    v7 = v10[i] ^ v10[i + 4];
    *(_DWORD *)((char *)v10 + v6) = v7;
  }
  v8 = *(_BYTE *)(a4 + 15);
  if ( v8 < 0 )
    v8 ^= (unsigned __int8)v8 >> 7;
  result = v8 & 0x7F;
  *(_BYTE *)(a4 + 15) = result;
  return result;
}
