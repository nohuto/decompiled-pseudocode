/*
 * XREFs of DisplayFilter @ 0x1401DD050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_140388020 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1402B0048[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1402B0048[1];
  if ( v1 )
  {
LABEL_6:
    qword_14036B8A0 = 0LL;
    byte_140388020 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_1402B0488;
    *a1 = (unsigned __int8 *)&unk_1402B0488;
  }
  return (int)v2;
}
