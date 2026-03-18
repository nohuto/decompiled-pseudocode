/*
 * XREFs of ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0023124
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C0023920 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C0097920 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 * Callees:
 *     newpathalloc @ 0x1C0023B80 (newpathalloc.c)
 */

__int64 __fastcall EPATHOBJ::newpathrec(EPATHOBJ *this, struct _PATHRECORD **a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax
  __int64 result; // rax

  v4 = *((_QWORD *)this + 1);
  *a3 = 0;
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8) + 24LL;
    v10 = v8 + *(unsigned int *)(v8 + 16);
    if ( v10 > v9 )
      *a3 = (__int64)(v10 - v9) >> 3;
  }
  if ( *a3 >= 8 || *a3 >= a4 )
    goto LABEL_5;
  result = newpathalloc();
  v8 = result;
  if ( result )
  {
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    *a3 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
LABEL_5:
    *a2 = *(struct _PATHRECORD **)(v8 + 8);
    return 1LL;
  }
  return result;
}
