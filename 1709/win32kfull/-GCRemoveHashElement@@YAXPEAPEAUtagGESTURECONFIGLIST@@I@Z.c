/*
 * XREFs of ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01F9538
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0119DC4 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GCRemoveHashElement(struct tagGESTURECONFIGLIST **a1, __int64 a2)
{
  struct tagGESTURECONFIGLIST **v2; // r9
  __int64 v3; // r8
  struct tagGESTURECONFIGLIST *v5; // rax
  struct tagGESTURECONFIGLIST *v6; // rcx
  bool v7; // zf
  struct tagGESTURECONFIGLIST *v8; // rax

  v2 = 0LL;
  v3 = a2 & 7;
  v5 = a1[v3];
  v6 = v5;
  if ( v5 )
  {
    while ( *((_DWORD *)v6 + 2) != (_DWORD)a2 )
    {
      v2 = (struct tagGESTURECONFIGLIST **)v6;
      v6 = *(struct tagGESTURECONFIGLIST **)v6;
      if ( !v6 )
        return;
    }
    v7 = v6 == v5;
    v8 = *(struct tagGESTURECONFIGLIST **)v6;
    if ( v7 )
      a1[v3] = v8;
    else
      *v2 = v8;
    Win32FreePool(v6, a2, v3);
  }
}
