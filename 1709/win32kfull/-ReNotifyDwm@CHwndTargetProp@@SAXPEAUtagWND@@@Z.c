/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C0044A00
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 Prop; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  CompositionObject *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  CompositionObject *v8; // rcx
  __int64 v9; // rax
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  v3 = 0LL;
  v4 = Prop;
  if ( Prop )
  {
    v5 = *(CompositionObject **)(Prop + 16);
    if ( v5 && (int)CompositionObject::OpenDwmHandle(v5, &v10) >= 0 )
    {
      v6 = 0LL;
      if ( a1 )
        v6 = *(_QWORD *)a1;
      v7 = ReferenceDwmApiPort();
      DwmAsyncCreateDCompositionHwndTarget(v7, v6, 1LL, v10);
    }
    v8 = *(CompositionObject **)(v4 + 24);
    if ( v8 && (int)CompositionObject::OpenDwmHandle(v8, &v10) >= 0 )
    {
      if ( a1 )
        v3 = *(_QWORD *)a1;
      v9 = ReferenceDwmApiPort();
      DwmAsyncCreateDCompositionHwndTarget(v9, v3, 0LL, v10);
    }
  }
}
