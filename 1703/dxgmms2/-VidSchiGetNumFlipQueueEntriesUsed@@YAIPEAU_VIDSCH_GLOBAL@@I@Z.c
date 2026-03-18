/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002B5F4
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00ACEE0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned int *v8; // rdx
  __int64 v9; // r10
  int v10; // r11d

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
      if ( *v6 )
      {
        v8 = (unsigned int *)(*v6 + 1100LL);
        v9 = 64LL;
        do
        {
          if ( *v8 > 0xC || (v10 = 4673, !_bittest(&v10, *v8)) )
            result = (unsigned int)(result + 1);
          v8 += 306;
          --v9;
        }
        while ( v9 );
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
