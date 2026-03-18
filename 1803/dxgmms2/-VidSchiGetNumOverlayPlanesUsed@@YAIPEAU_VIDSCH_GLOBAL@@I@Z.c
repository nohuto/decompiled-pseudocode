/*
 * XREFs of ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0034A94
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00BF1F0 (VidSchCollectDbgInfo.c)
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
  bool v8; // zf
  unsigned int v9; // edx

  v2 = a2;
  v3 = *((_DWORD *)a1 + 33);
  v4 = *((_QWORD *)a1 + v2 + 379);
  result = 0LL;
  if ( v3 )
  {
    v6 = (_QWORD *)(v4 + 24);
    v7 = v3;
    do
    {
      v8 = *v6 == 0LL;
      v9 = result + 1;
      ++v6;
      if ( v8 )
        v9 = result;
      result = v9;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
