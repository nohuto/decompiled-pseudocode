/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0117530
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C011792C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C011F604 (IsMouseInPointerActive.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C013E280 (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // edi
  __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v10; // rbp

  IsTouchpad = 0;
  CInpLockGuard::LockExclusive(this + 9);
  if ( (*((_DWORD *)a2 + 300) & 0x2000) == 0 )
  {
    if ( a3 )
    {
      if ( a3 == -1 )
      {
LABEL_7:
        IsTouchpad = 1;
        goto LABEL_12;
      }
      if ( !(unsigned int)IsMouseInPointerActive(a2) || !a4 )
      {
        v10 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(a3 + 28));
        if ( v10 )
        {
          IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v10 + 12)
                                                                       + 576LL * *(unsigned int *)(a3 + 32)));
          CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v10);
        }
      }
    }
    else
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1072, a4);
      if ( ThreadPointerData && *(_DWORD *)(ThreadPointerData + 20) == 5 )
        goto LABEL_7;
    }
  }
LABEL_12:
  CInpLockGuard::UnLock(this + 9);
  return IsTouchpad;
}
