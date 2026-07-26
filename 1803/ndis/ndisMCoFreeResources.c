/*
 * XREFs of ndisMCoFreeResources @ 0x1C0114844
 * Callers:
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMCoFreeResources(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx

  v2 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 512LL);
  while ( 1 )
  {
    v3 = *v2;
    if ( !*v2 )
      break;
    if ( v3[1] == a1 )
    {
      *v2 = (_QWORD *)*v3;
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      v2 = (_QWORD **)*v2;
    }
  }
}
