/*
 * XREFs of ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0006D98
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006C9C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(CInputQueueProp *this, struct tagWND *a2)
{
  _QWORD *v4; // r14
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == *((struct tagWND **)this + 1) )
  {
    if ( !*((_BYTE *)this + 40) )
    {
      v4 = (_QWORD *)((char *)this + 32);
      if ( *((_QWORD *)this + 4) )
      {
        HMAssignmentUnlock((char *)this + 32);
        *v4 = 0LL;
      }
    }
    *((_QWORD *)this + 4) = a2;
    *((_BYTE *)this + 40) = 1;
  }
  else
  {
    if ( *((_BYTE *)this + 40) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_BYTE *)this + 40) = 0;
    }
    v5[1] = a2;
    v5[0] = (char *)this + 32;
    HMAssignmentLock(v5);
  }
}
