/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C008DDE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C008A488 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C008E020 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(__int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  CInputQueueProp *Prop; // rax
  CInputQueueProp *v8; // rbx
  int v9; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  LOBYTE(v4) = 1;
  v6 = HMValidateHandleNoSecure(a1, v4);
  if ( v6 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v6) )
    {
      Prop = (CInputQueueProp *)GetProp(v6, CInputQueueProp::s_atom, 1);
      v8 = Prop;
      if ( Prop )
      {
        CInputQueueProp::DetachInputQueue(Prop, a2);
        if ( !*((_DWORD *)v8 + 6) )
          CWindowProp::RemoveAndDeleteProp(v8);
      }
    }
  }
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v6, v5);
}
