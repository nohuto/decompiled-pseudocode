/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C00063E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C005ED7C (--0CMouseAcceleration@@IEAA@I@Z.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(unsigned int a1)
{
  __int64 v2; // rbx
  CMouseAcceleration *v3; // rax
  CMouseAcceleration *v4; // rax

  v2 = 0LL;
  v3 = (CMouseAcceleration *)Win32AllocPool(120LL, 1682006883LL);
  if ( v3 )
    v4 = CMouseAcceleration::CMouseAcceleration(v3, a1);
  else
    v4 = 0LL;
  if ( v4 )
    return v4;
  return (CMouseAcceleration *)v2;
}
