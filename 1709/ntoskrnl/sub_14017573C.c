/*
 * XREFs of sub_14017573C @ 0x14017573C
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     sub_140175834 @ 0x140175834 (sub_140175834.c)
 *     sub_140176734 @ 0x140176734 (sub_140176734.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_14017573C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1000))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
