/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01E3734
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01E393C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 v7; // r9
  __int64 k; // rbx
  int v10; // r8d
  __int64 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rdi
  __int64 i; // rdx
  __int64 j; // rax

  if ( a1 )
  {
    if ( !(unsigned int)IsVisible((__int64)a1) )
      return 0LL;
    k = *(_QWORD *)(v6 + 8);
    v10 = *(_DWORD *)(v6 + 48) & 2;
    if ( v10 )
    {
      if ( (v7 & 0x400) != 0 )
        return 0LL;
    }
    v11 = *(_QWORD *)(k + 104);
    if ( v5 != v11 )
    {
      v12 = (__int64 *)(v5 + 104);
      v13 = v5;
      for ( i = *(_QWORD *)(v5 + 104); v11 != i; i = *(_QWORD *)(i + 104) )
      {
        v5 = i;
        if ( !i )
          return 0LL;
      }
      if ( v5 == k )
      {
        if ( v10 )
        {
          if ( v13 != k )
          {
            for ( j = *v12; k != j; j = *(_QWORD *)(j + 104) )
              v13 = j;
            for ( k = *(_QWORD *)(k + 112); k && k != v13; k = *(_QWORD *)(k + 88) )
            {
              if ( (*(_BYTE *)(k + 71) & 0x10) != 0
                && !*(_QWORD *)(k + 216)
                && (*(_BYTE *)(k + 66) & 8) == 0
                && !SubtractRect((__int64)a2, &a2->left, (int *)(k + 128)) )
              {
                return 0LL;
              }
LABEL_27:
              ;
            }
          }
          return IntersectRect(&a2->left, &a2->left, (int *)a3 + 6);
        }
      }
      else
      {
        v13 = v5;
        while ( v5 != k )
        {
          v5 = *(_QWORD *)(v5 + 88);
          if ( !v5 )
            goto LABEL_27;
        }
      }
      return 0LL;
    }
  }
  return IntersectRect(&a2->left, &a2->left, (int *)a3 + 6);
}
