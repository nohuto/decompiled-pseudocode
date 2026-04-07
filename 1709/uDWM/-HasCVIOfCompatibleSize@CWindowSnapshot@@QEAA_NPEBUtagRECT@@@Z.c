/*
 * XREFs of ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18007D594
 * Callers:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000BA4C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x1800752E0 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007D534 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowSnapshot::HasCVIOfCompatibleSize(CWindowSnapshot *this, const struct tagRECT *a2)
{
  char v2; // r9
  _DWORD *v3; // r11
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 4);
    v4 = 0;
    if ( a2->right - a2->left >= 0 )
      v4 = a2->right - a2->left;
    v5 = 0;
    if ( v3[14] - v3[12] >= 0 )
      v5 = v3[14] - v3[12];
    if ( v5 == v4 )
    {
      v6 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v6 = a2->bottom - a2->top;
      v7 = 0;
      if ( v3[15] - v3[13] >= 0 )
        v7 = v3[15] - v3[13];
      if ( v7 == v6 )
        return 1;
    }
  }
  return v2;
}
