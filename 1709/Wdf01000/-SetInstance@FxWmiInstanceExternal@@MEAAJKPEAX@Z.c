/*
 * XREFs of ?SetInstance@FxWmiInstanceExternal@@MEAAJKPEAX@Z @ 0x1C0071ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::SetInstance(
        FxWmiInstanceExternal *this,
        __int64 InBufferSize,
        void *InBuffer)
{
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v5; // rcx

  m_Method = this->m_SetInstanceCallback.m_Method;
  m_ObjectSize = this->m_ObjectSize;
  if ( !m_Method )
    return 3221226182LL;
  v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, void *))m_Method)(v5, InBufferSize, InBuffer);
}
