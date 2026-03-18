/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C0051CA4
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0053A84 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int16 v9; // di
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v7 = HMValidateHandleNoRip(v4, a2);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v9 = *(_WORD *)(v7 + 74);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v12 = GetDpiForSystem();
    v13 = GetDpiDependentMetric(20LL, v12);
    v14 = xxxClientCopyImage(*v8, (unsigned int)(v9 != 3) + 1, v13, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v14 )
    {
      v6 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_DWORD *)(v14 + 80) |= 0x80u;
        InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), v6, 5LL);
        if ( !a3 )
          SetOrClrWF(1LL, a1, 1824LL, 1LL);
      }
    }
  }
  return v6;
}
