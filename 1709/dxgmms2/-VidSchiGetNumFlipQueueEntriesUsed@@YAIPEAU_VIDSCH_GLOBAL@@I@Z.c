/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002DBC0
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00B58D0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int *v8; // r8
  __int64 v9; // r11
  int v10; // r10d
  bool v11; // r10
  unsigned int v12; // ecx

  v2 = *((_DWORD *)a1 + 32);
  v3 = a2;
  v4 = 0;
  v5 = *((_QWORD *)a1 + v3 + 376);
  if ( v2 )
  {
    v6 = (_QWORD *)(v5 + 24);
    v7 = v2;
    do
    {
      if ( *v6 )
      {
        v8 = (unsigned int *)(*v6 + 1108LL);
        v9 = 64LL;
        do
        {
          v11 = 0;
          if ( *v8 <= 0xC )
          {
            v10 = 4673;
            if ( _bittest(&v10, *v8) )
              v11 = 1;
          }
          v8 += 308;
          v12 = v4 + 1;
          if ( v11 )
            v12 = v4;
          v4 = v12;
          --v9;
        }
        while ( v9 );
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
