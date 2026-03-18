/*
 * XREFs of HandleBaseWindowDestruction @ 0x1C012E150
 * Callers:
 *     DestroyBaseWindow @ 0x1C00EBC40 (DestroyBaseWindow.c)
 * Callees:
 *     HandleInputDestDestruction @ 0x1C0016E5C (HandleInputDestDestruction.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall HandleBaseWindowDestruction(__int64 a1)
{
  _OWORD v2[12]; // [rsp+20h] [rbp-188h] BYREF
  _OWORD v3[12]; // [rsp+E0h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  if ( a1 )
  {
    LODWORD(v2[0]) = 4;
    *(_QWORD *)&v2[5] = a1;
    HIDWORD(v2[5]) = 1;
  }
  v3[0] = v2[0];
  v3[1] = v2[1];
  v3[2] = v2[2];
  v3[3] = v2[3];
  v3[4] = v2[4];
  v3[5] = v2[5];
  v3[6] = v2[6];
  v3[7] = v2[7];
  v3[8] = v2[8];
  v3[9] = v2[9];
  v3[10] = v2[10];
  v3[11] = v2[11];
  HandleInputDestDestruction((struct CInputDest *)v3);
}
