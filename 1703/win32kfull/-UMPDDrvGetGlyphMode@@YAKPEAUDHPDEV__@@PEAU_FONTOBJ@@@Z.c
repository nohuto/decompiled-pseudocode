/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C010A160
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v10; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  memset(Src, 0, sizeof(Src));
  v4 = v10;
  if ( !v10
    || (Src[0] = 0x2500000028LL,
        Src[2] = *(_QWORD *)v10,
        Src[3] = a1,
        Src[4] = a2,
        !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 176), (const void **)&Src[4], 0x40u))
    || (LODWORD(Size) = 4, v5 = UMPDOBJ::Thunk(v4, Src, 0x28u, &v9, Size), v6 = v9, v5 == -1) )
  {
    v6 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
