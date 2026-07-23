/*
 * XREFs of sub_18008B4B0 @ 0x18008B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18008B4B0()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r11
  unsigned __int64 v2; // r10

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] + 8 * (v0 >> 9));
  v2 = v0 >> 3;
  if ( (v0 & 0xF) != 0 )
  {
    v2 &= ~1uLL;
    if ( !_bittest64(&v1, v2) )
      goto LABEL_6;
  }
  else if ( _bittest64(&v1, v2) )
  {
LABEL_3:
    ((void (*)(void))v0)();
    return;
  }
  if ( _bittest64(&v1, v2 | 1) )
    goto LABEL_3;
LABEL_6:
  sub_18008B350();
}
