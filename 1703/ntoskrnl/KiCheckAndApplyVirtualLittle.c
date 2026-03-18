/*
 * XREFs of KiCheckAndApplyVirtualLittle @ 0x14000B920
 * Callers:
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 * Callees:
 *     KeUpdatePendingVirtualLittleRequest @ 0x140203B98 (KeUpdatePendingVirtualLittleRequest.c)
 *     PoSetVirtualProcessorType @ 0x14022D2FC (PoSetVirtualProcessorType.c)
 */

__int64 __fastcall KiCheckAndApplyVirtualLittle(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v4; // al
  char v5; // bl
  __int16 v6; // [rsp+20h] [rbp-8h]

  result = (unsigned __int8)KeHeteroSystem;
  if ( (unsigned __int8)(KeHeteroSystem - 1) <= 1u && *(_QWORD *)(a1 + 24) != a2 )
  {
    v4 = KeHeteroSystem == 2 && (*(_DWORD *)(a2 + 120) & 4) == 0;
    _disable();
    v5 = *(_BYTE *)(a1 + 25575);
    result = PoSetVirtualProcessorType(a1, v4);
    *(_BYTE *)(a1 + 25575) = (_BYTE)result == 0;
    if ( v5 != ((_BYTE)result == 0) )
      result = KeUpdatePendingVirtualLittleRequest(a1);
    if ( (v6 & 0x200) != 0 )
      _enable();
  }
  return result;
}
