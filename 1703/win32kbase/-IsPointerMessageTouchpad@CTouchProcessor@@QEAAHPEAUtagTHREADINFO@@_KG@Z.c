/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004560
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004628 (ApiSetEditionFindThreadPointerData.c)
 *     IsMouseInPointerActive @ 0x1C00046B4 (IsMouseInPointerActive.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned __int16 a4)
{
  char *v4; // rbx
  BOOL v9; // esi
  __int64 ThreadPointerData; // rax
  struct _ERESOURCE *v11; // rcx
  struct CPointerInputFrame *FrameById; // rax
  int v14; // edi

  v4 = (char *)this + 200;
  v9 = 0;
  CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)this + 200));
  if ( (*((_DWORD *)a2 + 274) & 0x2000) == 0 )
  {
    if ( a3 )
    {
      if ( a3 == -1 )
      {
LABEL_9:
        v9 = 1;
        goto LABEL_4;
      }
      if ( !(unsigned int)IsMouseInPointerActive(a2) || !a4 )
      {
        FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a3 + 28));
        if ( FrameById )
        {
          _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
          v14 = *(_DWORD *)(608LL * *(unsigned int *)(a3 + 32) + *((_QWORD *)FrameById + 12) + 248);
          CTouchProcessor::UnreferenceFrameInt(this, FrameById);
          v9 = v14 == 5;
        }
      }
    }
    else
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 968, a4);
      if ( ThreadPointerData && *(_DWORD *)(ThreadPointerData + 20) == 5 )
        goto LABEL_9;
    }
  }
LABEL_4:
  v11 = *(struct _ERESOURCE **)v4;
  *((_QWORD *)v4 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v11);
  return v9;
}
