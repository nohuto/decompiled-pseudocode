/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C003FC78
 * Callers:
 *     GreCreateBitmap @ 0x1C003C550 (GreCreateBitmap.c)
 *     GreSetBitmapOwner @ 0x1C003E1F0 (GreSetBitmapOwner.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C009B88C (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0040094 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(struct HOBJ__ *a1, unsigned int a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // r8
  struct OBJECT *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v5 = HmgShareLockCheck(a1);
  v7 = (struct OBJECT *)v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 200) || a2) && ((unsigned int)a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v3 = HmgSetOwner(a1, a2, v6);
    }
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v11, v7, 0, 0, 1);
    if ( v12 )
    {
      v8 = v11;
      if ( *(_BYTE *)(v11 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v9 = (unsigned __int16)*(_DWORD *)v7 | ((unsigned __int64)*(unsigned int *)v7 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v9 | ((unsigned int)v9 >> 8) & 0xFF0000);
      }
      TrackHmgrReferenceDecrement(*(_BYTE *)(v8 + 14), v7);
      --*((_DWORD *)v7 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      if ( v12 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    }
  }
  return v3;
}
