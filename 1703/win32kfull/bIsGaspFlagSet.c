/*
 * XREFs of bIsGaspFlagSet @ 0x1C0230ADC
 * Callers:
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C0231A8C (vSetClearTypeState__FONTCONTEXT.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C0231C30 (vSetGrayState__FONTCONTEXT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsGaspFlagSet(__int64 a1, unsigned __int16 a2, unsigned int a3, unsigned __int16 a4)
{
  int v4; // r10d
  _WORD *v5; // rcx
  _WORD *v6; // r11
  _WORD *i; // rdx
  __int16 v8; // ax

  v4 = -1;
  v5 = (_WORD *)(a1 + 4);
  v6 = &v5[2 * a2];
  for ( i = v5 + 2; ; i += 2 )
  {
    if ( i > v6 )
      return 0LL;
    if ( v4 < (int)a3 && a3 <= (unsigned __int16)__ROR2__(*v5, 8) && (__ROR2__(*(i - 1), 8) & a4) != 0 )
      break;
    v8 = *v5;
    v5 += 2;
    v4 = (unsigned __int16)__ROR2__(v8, 8);
  }
  return 1LL;
}
