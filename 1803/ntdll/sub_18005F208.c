/*
 * XREFs of sub_18005F208 @ 0x18005F208
 * Callers:
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 * Callees:
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_18005F2D0 @ 0x18005F2D0 (sub_18005F2D0.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 */

__int64 __fastcall sub_18005F208(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v13; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 <= (unsigned int)(*(_DWORD *)(a1 + 592) - 16) )
  {
    v10 = sub_18005F2D0(a1 + 512);
    LODWORD(a3) = v6;
    LODWORD(a2) = v7;
    if ( v10 != -1 )
    {
      v9 = 2;
      goto LABEL_6;
    }
  }
  if ( v6 > 0x20000 )
  {
    if ( v6 > *(unsigned int *)(a1 + 128) )
    {
      if ( v6 > *(unsigned int *)(a1 + 248) )
      {
        v11 = (void *)sub_180081CA0(a1);
        goto LABEL_5;
      }
      v13 = a1 + 232;
    }
    else
    {
      v13 = a1 + 112;
    }
    v11 = sub_180022F0C(v13, v7, v6, v6, a4);
  }
  else
  {
    v11 = sub_180020E70((PRTL_SRWLOCK)(a1 + 392), a2, a3, a4);
  }
LABEL_5:
  v10 = (__int64)v11;
LABEL_6:
  *a5 = v9;
  return v10;
}
