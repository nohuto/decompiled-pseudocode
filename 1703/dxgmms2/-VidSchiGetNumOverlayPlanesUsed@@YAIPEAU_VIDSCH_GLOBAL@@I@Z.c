/*
 * XREFs of ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002B700
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00ACEE0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumOverlayPlanesUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 result; // rax
  _QWORD *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ecx

  v2 = a2;
  v3 = *((_DWORD *)a1 + 32);
  v4 = *((_QWORD *)a1 + v2 + 374);
  result = 0LL;
  if ( v3 )
  {
    v6 = (_QWORD *)(v4 + 24);
    v7 = v3;
    do
    {
      v8 = result + 1;
      if ( *v6++ == 0LL )
        v8 = result;
      result = v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
