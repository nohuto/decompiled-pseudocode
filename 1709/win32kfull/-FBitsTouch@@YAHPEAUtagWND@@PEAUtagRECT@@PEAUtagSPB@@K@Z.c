/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01EF744
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01EF968 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     SubtractRect @ 0x1C00FB1A0 (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 v7; // r9
  __int64 i; // rbx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax

  if ( a1 )
  {
    if ( !(unsigned int)IsVisible((__int64)a1) )
      return 0LL;
    i = *(_QWORD *)(v6 + 8);
    v10 = *(_DWORD *)(v6 + 48) & 2;
    if ( v10 )
    {
      if ( (v7 & 0x400) != 0 )
        return 0LL;
    }
    v11 = *(_QWORD *)(i + 104);
    if ( v5 != v11 )
    {
      v12 = (__int64 *)(v5 + 104);
      v13 = v5;
      v14 = *(_QWORD *)(v5 + 104);
      v15 = v14;
      while ( v11 != v14 )
      {
        v5 = v14;
        if ( !v14 )
          return 0LL;
        v14 = *(_QWORD *)(v14 + 104);
      }
      if ( v5 == i )
      {
        if ( v10 )
        {
          if ( v13 != i )
          {
            if ( i != v15 )
            {
              v16 = *v12;
              do
              {
                v13 = v16;
                v16 = *(_QWORD *)(v16 + 104);
              }
              while ( i != v16 );
            }
            for ( i = *(_QWORD *)(i + 112); i && i != v13; i = *(_QWORD *)(i + 88) )
            {
              if ( (*(_BYTE *)(i + 71) & 0x10) != 0
                && !*(_QWORD *)(i + 216)
                && (*(_BYTE *)(i + 66) & 8) == 0
                && !SubtractRect((__int64)a2, &a2->left, (int *)(i + 128)) )
              {
                return 0LL;
              }
LABEL_27:
              ;
            }
          }
          return IntersectRect(a2, &a2->left, (int *)a3 + 6);
        }
      }
      else
      {
        v13 = v5;
        while ( v5 != i )
        {
          v5 = *(_QWORD *)(v5 + 88);
          if ( !v5 )
            goto LABEL_27;
        }
      }
      return 0LL;
    }
  }
  return IntersectRect(a2, &a2->left, (int *)a3 + 6);
}
