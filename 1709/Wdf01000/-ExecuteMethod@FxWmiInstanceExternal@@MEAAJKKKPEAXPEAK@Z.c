/*
 * XREFs of ?ExecuteMethod@FxWmiInstanceExternal@@MEAAJKKKPEAXPEAK@Z @ 0x1C0071920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::ExecuteMethod(
        FxWmiInstanceExternal *this,
        __int64 MethodId,
        __int64 InBufferSize,
        __int64 OutBufferSize,
        void *Buffer,
        unsigned int *BufferUsed)
{
  unsigned __int16 m_ObjectSize; // cx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, unsigned int, void *, unsigned int *); // rax
  unsigned __int64 v9; // r10

  m_ObjectSize = this->m_ObjectSize;
  m_Method = this->m_ExecuteMethodCallback.m_Method;
  if ( !m_Method )
    return 3221226133LL;
  v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v9 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, void *, unsigned int *))m_Method)(
           v9,
           MethodId,
           InBufferSize,
           OutBufferSize,
           Buffer,
           BufferUsed);
}
