/*
 * XREFs of ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002DC3C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00B58D0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumHistoryLayersUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 i; // r15
  __int64 v6; // rdi
  _DWORD **v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // eax
  int v10; // ecx

  v2 = 0;
  v3 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 376); (unsigned int)v3 < *((_DWORD *)a1 + 32); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(i + 8 * v3 + 24);
    if ( v6 )
    {
      v7 = (_DWORD **)(v6 + 1216);
      v8 = 64LL;
      do
      {
        v9 = *((_DWORD *)v7 - 27);
        if ( v9 > 0xC || (v10 = 4673, !_bittest(&v10, v9)) )
          v2 += RtlNumberOfSetBitsUlongPtr(**v7 & 0x3FF);
        v7 += 154;
        --v8;
      }
      while ( v8 );
    }
  }
  return v2;
}
