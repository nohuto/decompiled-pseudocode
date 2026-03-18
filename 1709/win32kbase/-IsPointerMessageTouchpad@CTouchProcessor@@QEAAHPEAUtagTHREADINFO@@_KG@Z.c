/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004480
 * Callers:
 *     <none>
 * Callees:
 *     IsMouseInPointerActive @ 0x1C000453C (IsMouseInPointerActive.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004570 (ApiSetEditionFindThreadPointerData.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned __int16 a4)
{
  char *v4; // rbx
  unsigned int v9; // edi
  __int64 ThreadPointerData; // rax
  struct _ERESOURCE *v11; // rcx
  struct CPointerInputFrame *FrameById; // rax
  int v14; // ebx
  bool v15; // zf
  char *v16; // [rsp+50h] [rbp+8h]

  v4 = (char *)this + 224;
  v16 = (char *)this + 224;
  v9 = 0;
  CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)this + 224));
  if ( (*((_DWORD *)a2 + 296) & 0x2000) == 0 )
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
          v15 = v14 == 5;
          v4 = v16;
          v9 = v15;
        }
      }
    }
    else
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1056, a4);
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
