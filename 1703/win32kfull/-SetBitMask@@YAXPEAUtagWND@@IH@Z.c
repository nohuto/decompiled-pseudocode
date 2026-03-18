/*
 * XREFs of ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C0110FF0
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0110E98 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00C66C8 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 */

void __fastcall SetBitMask(struct tagWND *a1, unsigned int a2)
{
  struct tagVWPLGESTUREDATA *GCData; // rax
  unsigned __int64 v4; // rcx
  char v5; // bl
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r11d
  int v10; // eax

  GCData = GetGCData(a1);
  v4 = a2;
  v5 = a2 & 7;
  v6 = v4 >> 3;
  v7 = *(_QWORD *)GCData;
  v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)GCData);
  if ( v9 )
    v10 = v8 | (1 << v5);
  else
    v10 = v8 & ~(1 << v5);
  *(_BYTE *)(v6 + v7) = v10;
}
