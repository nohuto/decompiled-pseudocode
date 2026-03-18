/*
 * XREFs of ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C0152D30
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C003A25C (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 */

__int64 __fastcall CCompositionBuffer::RemoveRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  result = CCompositionBuffer::FindRealization(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)v4 + 8LL;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(*(_QWORD *)v4 + 16LL), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  return result;
}
