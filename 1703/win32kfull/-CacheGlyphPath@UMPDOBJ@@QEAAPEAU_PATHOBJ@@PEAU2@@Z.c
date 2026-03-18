/*
 * XREFs of ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C0273928
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0292C90 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::CacheGlyphPath(UMPDOBJ *this, struct _PATHOBJ *a2)
{
  struct _PATHOBJ *v2; // r8
  struct _PATHOBJ *result; // rax
  int v4; // eax
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct _PATHOBJ *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    *v2 = *a2;
    result = (struct _PATHOBJ *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 32) = a2;
  }
  else
  {
    v4 = UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 256), (const void **)&v5, 8u);
    return (struct _PATHOBJ *)((unsigned __int64)v5 & -(__int64)(v4 != 0));
  }
  return result;
}
