/*
 * XREFs of ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1C0273980
 * Callers:
 *     NtGdiEngCreateClip @ 0x1C0291300 (NtGdiEngCreateClip.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::CreateCLIPOBJ(UMPDOBJ *this)
{
  CLIPOBJ *v2; // rbx
  void *Clip; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 17) )
    return 0LL;
  Clip = EngCreateClip();
  v2 = (CLIPOBJ *)Clip;
  if ( !Clip )
    return 0LL;
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 128), (const void **)&Clip, 0x18u) )
  {
    EngDeleteClip(v2);
    return 0LL;
  }
  return (struct _CLIPOBJ *)Clip;
}
