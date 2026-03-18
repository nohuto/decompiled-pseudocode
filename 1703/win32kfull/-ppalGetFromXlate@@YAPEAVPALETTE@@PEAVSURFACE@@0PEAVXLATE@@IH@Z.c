/*
 * XREFs of ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C0032E7C
 * Callers:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C0032E7C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 * Callees:
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C0032E7C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 */

struct PALETTE *__fastcall ppalGetFromXlate(struct SURFACE *a1, struct SURFACE *a2, struct XLATE *a3, int a4, int a5)
{
  __int64 v5; // r10
  __int64 v7; // rax
  bool v8; // zf

  if ( a4 == 1 )
    v5 = *((_QWORD *)a1 + 16);
  else
    v5 = *((_QWORD *)a2 + 16);
  if ( v5 )
    return (struct PALETTE *)v5;
  if ( a3 )
  {
    v5 = a4 == 1 ? *((_QWORD *)a3 + 5) : *((_QWORD *)a3 + 6);
    if ( v5 )
      return (struct PALETTE *)v5;
  }
  if ( a4 == 1 )
  {
    v7 = *((_QWORD *)a1 + 6);
    if ( v7 && (*(_DWORD *)(v7 + 2188) & 0x100) != 0 )
    {
      v8 = *((_DWORD *)a1 + 24) == *(_DWORD *)(v7 + 2124);
      goto LABEL_15;
    }
  }
  else
  {
    v7 = *((_QWORD *)a2 + 6);
    if ( v7 && (*(_DWORD *)(v7 + 2188) & 0x100) == 0 )
    {
      v8 = *((_DWORD *)a2 + 24) == *(_DWORD *)(v7 + 2124);
LABEL_15:
      if ( v8 )
      {
        v5 = *(_QWORD *)(v7 + 1824);
        if ( v5 )
          return (struct PALETTE *)v5;
      }
    }
  }
  if ( !a3 || (*((_DWORD *)a3 + 1) & 1) != 0 )
  {
    if ( a5 )
      return ppalGetFromXlate(a1, a2, a3, (unsigned int)(a4 == 1) + 1, 0);
  }
  return (struct PALETTE *)v5;
}
