/*
 * XREFs of _anonymous_namespace_::FramesReport::FramesReport @ 0x180022974
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::State::State @ 0x1800C7B2C (_anonymous_namespace_--State--State.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::FramesReport::FramesReport(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 48LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[16] = v2;
  a1[18] = 0LL;
  a1[19] = 0LL;
  v3 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 64LL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  a1[18] = v3;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}
