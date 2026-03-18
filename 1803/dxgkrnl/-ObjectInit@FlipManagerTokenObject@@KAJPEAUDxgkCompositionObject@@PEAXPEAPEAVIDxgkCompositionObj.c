/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C004AB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        _QWORD *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rcx
  __int64 result; // rax

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 4) = 6LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *(_QWORD *)v3 = &CFlipManagerToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)v3 + 1) = &CFlipManagerToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)v3 + 5) = &CFlipManagerToken::`vftable'{for `CPushLock'};
    *((_QWORD *)v3 + 8) = 0LL;
    v3[72] = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 8) = *a2;
  result = 0LL;
  *a2 = 0LL;
  v3[72] = 1;
  return result;
}
