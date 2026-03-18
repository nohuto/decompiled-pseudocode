/*
 * XREFs of ViQueryObjectContext @ 0x140766FEC
 * Callers:
 *     VfQueryDeviceContext @ 0x140250110 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140250150 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1402501A0 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1402501F0 (VfQueryThreadContext.c)
 * Callees:
 *     ViGetContextPointer @ 0x140766F20 (ViGetContextPointer.c)
 *     ViLockContextPointer @ 0x140766FA8 (ViLockContextPointer.c)
 */

signed __int64 *__fastcall ViQueryObjectContext(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  signed __int64 *result; // rax
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rdx

  v3 = a3;
  v4 = 0LL;
  result = (signed __int64 *)ViGetContextPointer(a1, a2);
  v6 = result;
  if ( result )
  {
    if ( ViLockContextPointer(result) )
    {
      v7 = *(_QWORD *)(*v6 + 8 * v3 + 8);
      if ( v7 )
      {
        v4 = *(_QWORD *)(*v6 + 8 * v3 + 8);
        _InterlockedAdd((volatile signed __int32 *)(v7 + 4), 1u);
      }
      _InterlockedExchangeAdd64(v6, 1uLL);
    }
    return (signed __int64 *)v4;
  }
  return result;
}
