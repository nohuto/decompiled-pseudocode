/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01B9560
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01B99AC (CreatePseudoDigitizerDevice.c)
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

  byte_1C0329302 = a3;
  v3 = a3 >> 8;
  byte_1C0329374 = a3;
  byte_1C03293E6 = a3;
  byte_1C0329458 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C03292FD = a2;
  word_1C032936F = a2;
  word_1C03293E1 = a2;
  word_1C0329453 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0329303 = v3;
  byte_1C0329375 = v3;
  byte_1C03293E7 = v3;
  byte_1C0329459 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C03292F0 = v5;
  byte_1C0329306 = BYTE1(v7);
  byte_1C0329378 = BYTE1(v7);
  byte_1C03293EA = BYTE1(v7);
  byte_1C032945C = BYTE1(v7);
  byte_1C03292F1 = v4;
  byte_1C0329305 = v6;
  byte_1C0329362 = v5;
  byte_1C0329363 = v4;
  byte_1C0329377 = v6;
  byte_1C03293D4 = v5;
  byte_1C03293D5 = v4;
  byte_1C03293E9 = v6;
  byte_1C0329446 = v5;
  byte_1C0329447 = v4;
  byte_1C032945B = v6;
}
