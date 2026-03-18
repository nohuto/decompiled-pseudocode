/*
 * XREFs of ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02A74B0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS32D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r13d
  int v3; // ebp
  ULONG *v4; // rdi
  __int64 v5; // rsi
  ULONG *v6; // r15
  int v7; // r12d
  XLATEOBJ *pxlo; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (ULONG *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = *((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14);
  pxlo = *(XLATEOBJ **)a1;
  while ( 1 )
  {
    v6 = v4;
    v7 = v2;
    if ( v2 )
    {
      do
      {
        *(ULONG *)((char *)v6 + v5 - (_QWORD)v4) = XLATEOBJ_iXlate(pxlo, *v6);
        ++v6;
        --v7;
      }
      while ( v7 );
      v1 = a1;
    }
    if ( !--v3 )
      break;
    v4 = (ULONG *)((char *)v4 + *((int *)v1 + 10));
    v5 += *((int *)v1 + 11);
  }
}
