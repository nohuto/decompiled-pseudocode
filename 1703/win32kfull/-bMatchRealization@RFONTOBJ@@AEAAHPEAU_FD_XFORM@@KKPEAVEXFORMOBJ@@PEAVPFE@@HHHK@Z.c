/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002D34
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct PFE *a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v10; // r10
  int v16; // r9d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rcx
  BOOL v20; // eax
  int v21; // edx

  v10 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 112LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v10 + 68) & 6) )
    return 0LL;
  v16 = *(_DWORD *)(v10 + 12);
  v17 = a3 ^ v16;
  if ( (v17 & 0xE000) != 0 )
    return 0LL;
  v18 = v17 & 0x50010000;
  if ( v18 )
  {
    v21 = v18 & 0x50000000;
    if ( (a3 & 0x10000) == 0 || (v16 & 0x20000) == 0 )
      v21 = v18;
    if ( (v16 & 0x12000000) == 0x2000000 && (a3 & 0x10000000) != 0 )
      v21 = 0;
    if ( v21 )
      return 0LL;
  }
  if ( *(_DWORD *)(v10 + 40) != a4 )
    return 0LL;
  v19 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v10 + 128);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v10 + 128) )
    v19 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v10 + 136);
  if ( !v19
    && a7 == *(_DWORD *)(v10 + 680)
    && (!a5 || EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v10 + 164)))
    && *(_DWORD *)(*(_QWORD *)this + 200LL) == a8
    && (a9 ? (v20 = 1) : (v20 = *(_DWORD *)(*(_QWORD *)this + 652LL) == 0), v20) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
