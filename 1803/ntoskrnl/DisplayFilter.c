/*
 * XREFs of DisplayFilter @ 0x14021F4F0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_1403E9B00 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401BCDB0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401BCDB0[1];
  if ( v1 )
  {
LABEL_6:
    qword_1403CAD38 = 0LL;
    byte_1403E9B00 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_14030F8B8;
    *a1 = (unsigned __int8 *)&unk_14030F8B8;
  }
  return (int)v2;
}
