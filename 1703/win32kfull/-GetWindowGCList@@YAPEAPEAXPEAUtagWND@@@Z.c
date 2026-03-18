/*
 * XREFs of ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C011105C
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0110E98 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C01EF214 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C00C9730 (VWPLGetData.c)
 */

void **__fastcall GetWindowGCList(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  if ( (unsigned int)VWPLGetData(*(_DWORD **)(*(_QWORD *)(v1 + 376) + 816LL), (__int64)a1, &v3) && v3 )
    return *(void ***)(v3 + 16);
  else
    return 0LL;
}
