/*
 * XREFs of itrp_SH_Common @ 0x1C02D3718
 * Callers:
 *     itrp_SHC @ 0x1C02D2810 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C02D2C60 (itrp_SHE.c)
 *     itrp_SHP @ 0x1C02D3180 (itrp_SHP.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 */

_QWORD *__fastcall itrp_SH_Common(_DWORD *a1, _DWORD *a2, int *a3, char a4)
{
  int v7; // edi
  _QWORD *v8; // rbx
  int v9; // eax
  __int16 v10; // cx
  __int64 v11; // rsi
  bool v12; // zf
  __int16 v13; // ax
  _QWORD *result; // rax

  if ( (a4 & 1) != 0 )
  {
    v7 = HIDWORD(qword_1C0327CA0);
    v8 = (_QWORD *)LocalGS;
  }
  else
  {
    v7 = dword_1C0327CA8;
    v8 = (_QWORD *)qword_1C0327C58;
  }
  v9 = InvokeProject(
         dword_1C0327CC0,
         *(_DWORD *)(*v8 + 4LL * v7) - *(_DWORD *)(v8[2] + 4LL * v7),
         *(_DWORD *)(v8[1] + 4LL * v7) - *(_DWORD *)(v8[3] + 4LL * v7));
  v10 = word_1C0327CB8;
  v11 = v9;
  v12 = word_1C0327CB8 == 0x4000;
  *a2 = 0;
  v13 = dword_1C0327C6C;
  *a1 = 0;
  if ( v12 )
  {
    if ( v13 )
      *a1 = ((unsigned __int64)(v11 * v13) >> 32 << 18) + ((((unsigned int)(v11 * v13) >> 13) + 1) >> 1);
    if ( HIWORD(dword_1C0327C6C) )
      *a2 = ((unsigned __int64)(v11 * SHIWORD(dword_1C0327C6C)) >> 32 << 18)
          + ((((unsigned int)(v11 * SHIWORD(dword_1C0327C6C)) >> 13) + 1) >> 1);
  }
  else
  {
    if ( v13 )
      *a1 = CompDiv(v10, v11 * v13);
    if ( HIWORD(dword_1C0327C6C) )
      *a2 = CompDiv(word_1C0327CB8, v11 * SHIWORD(dword_1C0327C6C));
  }
  result = v8;
  *a3 = v7;
  return result;
}
