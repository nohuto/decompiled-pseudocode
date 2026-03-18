/*
 * XREFs of ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0273D8C
 * Callers:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0273C54 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bRemoveColorTransform(XDCOBJ *this, void *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rax

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 2512LL);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  while ( *(void **)v3 != a2 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    if ( !v3 )
      return 0LL;
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( v4 == v3 )
    *(_QWORD *)(v2 + 2512) = v6;
  else
    *(_QWORD *)(v4 + 8) = v6;
  Win32FreePool(v3);
  return 1LL;
}
