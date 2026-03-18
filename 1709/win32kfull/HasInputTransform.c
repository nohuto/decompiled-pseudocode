/*
 * XREFs of HasInputTransform @ 0x1C01D1880
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

bool __fastcall HasInputTransform(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  bool result; // al

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  result = 0;
  if ( v4 )
    return *(_QWORD *)(v4 + 352) != 0LL;
  return result;
}
