/*
 * XREFs of ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@0AEBW4ShaderLinkingArgument@@@Z @ 0x1800D5AC8
 * Callers:
 *     HasLighting @ 0x1800D393C (HasLighting.c)
 *     HasWhiteNoise @ 0x1800D59A8 (HasWhiteNoise.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>(
        _OWORD *a1,
        __int128 *a2,
        __int128 *a3,
        _WORD *a4)
{
  __int128 v4; // xmm0
  unsigned __int64 i; // r8
  _OWORD *result; // rax
  __int128 v7; // [rsp+0h] [rbp-28h]

  v4 = *a3;
  v7 = *a2;
  for ( i = *((_QWORD *)a2 + 1); __PAIR128__(i, v7) != v4 && *(_WORD *)(*(_QWORD *)(v7 + 8) + 2 * i) != *a4; ++i )
    ;
  *((_QWORD *)&v7 + 1) = i;
  result = a1;
  *a2 = v7;
  *a1 = v7;
  return result;
}
