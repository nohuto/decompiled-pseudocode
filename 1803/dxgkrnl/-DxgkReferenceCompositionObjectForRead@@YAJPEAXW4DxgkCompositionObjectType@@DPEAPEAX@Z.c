/*
 * XREFs of ?DxgkReferenceCompositionObjectForRead@@YAJPEAXW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C000D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DxgkReferenceCompositionObjectForRead(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = DxgkCompositionObject::ResolveHandle(a1, 1LL, a3, a2, v6);
  if ( (int)result >= 0 )
    *a4 = v6[0];
  return result;
}
