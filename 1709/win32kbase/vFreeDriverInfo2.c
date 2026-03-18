/*
 * XREFs of vFreeDriverInfo2 @ 0x1C00A2630
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall vFreeDriverInfo2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1 - 32;
    PopThreadGuardedObject((_QWORD *)(a1 - 32));
    return Win32FreePool(v1);
  }
  return result;
}
