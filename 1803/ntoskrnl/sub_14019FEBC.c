/*
 * XREFs of sub_14019FEBC @ 0x14019FEBC
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     sub_14019FF9C @ 0x14019FF9C (sub_14019FF9C.c)
 *     sub_1401A0EC4 @ 0x1401A0EC4 (sub_1401A0EC4.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     sub_14087CF84 @ 0x14087CF84 (sub_14087CF84.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_14019FEBC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
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
