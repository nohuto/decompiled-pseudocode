/*
 * XREFs of ?GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800A1230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CBitmap::GetDirtyRects(CBitmap *this, const struct tagRECT **a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  char v5; // r10
  unsigned int v6; // r11d

  v4 = *((_DWORD *)this + 30);
  v5 = 1;
  *((_BYTE *)this + 188) = 1;
  v6 = *a4;
  *a4 = v4;
  if ( *(_QWORD *)((char *)this + 180) == __PAIR64__(v4, v6) && *((_DWORD *)this + 44) )
  {
    *a2 = (const struct tagRECT *)*((_QWORD *)this + 21);
    *a3 = *((_DWORD *)this + 44);
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0;
    return v6 == v4;
  }
  return v5;
}
