/*
 * XREFs of ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011094C
 * Callers:
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C01108A0 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpUnhook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)a1;
  *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 26);
  *((_DWORD *)a1 + 27) = *((_DWORD *)a1 + 25);
  v1[354] = *((_QWORD *)a1 + 152);
  v1[352] = *((_QWORD *)a1 + 153);
  v1[353] = *((_QWORD *)a1 + 154);
  v1[356] = *((_QWORD *)a1 + 156);
  v1[357] = *((_QWORD *)a1 + 157);
  v1[358] = *((_QWORD *)a1 + 158);
  v1[361] = *((_QWORD *)a1 + 159);
  v1[369] = *((_QWORD *)a1 + 160);
  v1[412] = *((_QWORD *)a1 + 161);
  v1[409] = *((_QWORD *)a1 + 162);
  v1[408] = *((_QWORD *)a1 + 163);
  v1[406] = *((_QWORD *)a1 + 164);
  v1[407] = *((_QWORD *)a1 + 166);
  v1[378] = *((_QWORD *)a1 + 165);
  v1[428] = *((_QWORD *)a1 + 167);
  *((_DWORD *)a1 + 2) = 0;
}
