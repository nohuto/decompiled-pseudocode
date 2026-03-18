/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C00C8AF0 (_ScreenToClient.c)
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C023A9FC (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagCURSOR *result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v20[5]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v23; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+40h] BYREF

  v2 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v23 = v2;
  if ( !PtInRect((_DWORD *)a1 + 32, v2) )
    return 0LL;
  if ( (*((_BYTE *)a1 + 71) & 8) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 27);
  if ( v5 )
  {
    if ( !(unsigned int)GrePtInRegion(v5, (unsigned int)v2, HIDWORD(v23)) )
      return 0LL;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 || !PtInRect((_DWORD *)a1 + 36, v2) )
  {
    v21 = 1;
  }
  else
  {
    v21 = 0;
    ScreenToClient((__int64)a1, &v23);
    v8 = ChildWindowFromPointEx(v6, v23, 3LL, v7);
    ClientToScreen(a1, &v23);
    BugCheckParameter3 = 0LL;
    if ( v8 )
    {
      if ( (struct tagWND *)v8 != a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
        v20[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v20;
        v20[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject((struct tagWND *)v8, a2);
        ThreadUnlock1(v14, v13);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v2 = v23;
  }
  ScreenToClient((__int64)a1, (_DWORD *)a2 + 8);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v16 = xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          555LL,
          v21,
          a2,
          2,
          3000,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v16 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_16;
  if ( result != (struct tagCURSOR *)1 )
  {
    LOBYTE(v17) = 3;
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, v17, v18, v19);
  }
  if ( !result )
LABEL_16:
    *((_QWORD *)a2 + 4) = v2;
  return result;
}
