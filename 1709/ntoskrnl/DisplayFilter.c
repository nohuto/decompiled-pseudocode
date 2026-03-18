/*
 * XREFs of DisplayFilter @ 0x1401DFCE0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_1403A35C0 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401930C0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401930C0[1];
  if ( v1 )
  {
LABEL_6:
    qword_140387810 = 0LL;
    byte_1403A35C0 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_1402D5610;
    *a1 = (unsigned __int8 *)&unk_1402D5610;
  }
  return (int)v2;
}
