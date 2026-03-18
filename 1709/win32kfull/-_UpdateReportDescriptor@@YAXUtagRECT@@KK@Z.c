/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01BE188
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01BE290 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C0324172 = a3;
  v3 = a3 >> 8;
  byte_1C03241E4 = a3;
  byte_1C0324256 = a3;
  byte_1C03242C8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C032416D = a2;
  word_1C03241DF = a2;
  word_1C0324251 = a2;
  word_1C03242C3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0324173 = v3;
  byte_1C03241E5 = v3;
  byte_1C0324257 = v3;
  byte_1C03242C9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0324160 = v5;
  byte_1C0324176 = BYTE1(v7);
  byte_1C03241E8 = BYTE1(v7);
  byte_1C032425A = BYTE1(v7);
  byte_1C03242CC = BYTE1(v7);
  byte_1C0324161 = v4;
  byte_1C0324175 = v6;
  byte_1C03241D2 = v5;
  byte_1C03241D3 = v4;
  byte_1C03241E7 = v6;
  byte_1C0324244 = v5;
  byte_1C0324245 = v4;
  byte_1C0324259 = v6;
  byte_1C03242B6 = v5;
  byte_1C03242B7 = v4;
  byte_1C03242CB = v6;
}
