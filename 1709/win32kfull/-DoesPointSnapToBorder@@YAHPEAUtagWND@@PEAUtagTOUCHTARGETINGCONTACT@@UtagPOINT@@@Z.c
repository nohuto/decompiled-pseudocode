/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D37D0
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D3668 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  __int64 v3; // r11
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _BOOL8 result; // rax

  v3 = *((int *)a2 + 46);
  v5 = v3 * (int)abs32(a3.x - *((_DWORD *)a1 + 36)) / 1000;
  result = 1;
  if ( (unsigned __int64)(v5 + 0x80000000LL) > 0xFFFFFFFF || (int)v5 >= 120 )
  {
    v6 = v3 * (int)abs32(a3.x - *((_DWORD *)a1 + 38)) / 1000;
    if ( (unsigned __int64)(v6 + 0x80000000LL) > 0xFFFFFFFF || (int)v6 >= 120 )
    {
      v7 = *((int *)a2 + 47) * (__int64)(int)abs32(a3.y - *((_DWORD *)a1 + 39)) / 1000;
      if ( (unsigned __int64)(v7 + 0x80000000LL) > 0xFFFFFFFF || (int)v7 >= 120 )
        return 0;
    }
  }
  return result;
}
