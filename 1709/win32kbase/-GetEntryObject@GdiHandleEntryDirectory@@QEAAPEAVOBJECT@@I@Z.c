/*
 * XREFs of ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E7B0
 * Callers:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleEntryDirectory::GetEntryObject(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // r11

  v2 = *((_DWORD *)this + 514);
  if ( a2 >= v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v3 = 0LL;
  if ( a2 >= v2 )
    v4 = ((a2 - v2) >> 16) + 1;
  else
    v4 = 0;
  v5 = *((_QWORD *)this + v4 + 1);
  if ( v4 )
    a2 += ((1 - v4) << 16) - v2;
  if ( a2 < *(_DWORD *)(v5 + 20) )
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v5 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                             + 16LL * (unsigned __int8)a2
                             + 8);
  return (struct OBJECT *)v3;
}
