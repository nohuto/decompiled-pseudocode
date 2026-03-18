/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C001ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C00028C4 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C001A1E0 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(__int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CInputQueueProp *v9; // rbx
  int v10; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v11; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  LOBYTE(v4) = 1;
  v6 = HMValidateHandleNoSecure(a1, v4);
  if ( v6 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v6) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(v6, &v11) )
      {
        v9 = v11;
        CInputQueueProp::DetachInputQueue(v11, a2, v7);
        if ( !*((_DWORD *)v9 + 6) )
          CWindowProp::RemoveAndDeleteProp(v9);
      }
    }
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
}
