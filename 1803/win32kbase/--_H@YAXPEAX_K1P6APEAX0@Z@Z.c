/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C009FB24
 * Callers:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C01218A4 (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C01339CC (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
