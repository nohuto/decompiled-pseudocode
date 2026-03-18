/*
 * XREFs of ResolveInputSinkToPwnd @ 0x1C01A0DB8
 * Callers:
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019D530 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     EditionSetManipulationInputTarget @ 0x1C01D6740 (EditionSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResolveInputSinkToPwnd(void *a1, int a2, _DWORD *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  int IsImplicit; // eax
  CompositionObject *v11; // rcx
  struct CompositionInputObject *v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v14 = 0LL;
  if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, &v13) >= 0 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
LABEL_7:
        v9 = 3LL;
LABEL_10:
        CompositionInputObject::GetWindowForInputType(v13, v9, &v14);
        goto LABEL_11;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        v9 = 4LL;
        goto LABEL_10;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_11:
          IsImplicit = CompositionInputObject::IsImplicit(v13);
          v11 = v13;
          *a3 = IsImplicit;
          CompositionObject::Release(v11);
          return v14;
        }
        goto LABEL_7;
      }
    }
    v9 = 1LL;
    goto LABEL_10;
  }
  return v14;
}
