/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 * Callees:
 *     _ScreenToClient @ 0x1C0018E14 (_ScreenToClient.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     _ChildWindowFromPointEx @ 0x1C0133F0C (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C0239294 (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagCURSOR *result; // rax
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+40h] BYREF

  v2 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v15 = v2;
  if ( !PtInRect((_DWORD *)a1 + 32, v2) )
    return 0LL;
  if ( (*((_BYTE *)a1 + 71) & 8) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 27);
  if ( v5 )
  {
    if ( !(unsigned int)GrePtInRegion(v5, (unsigned int)v2, HIDWORD(v15)) )
      return 0LL;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 || !PtInRect((_DWORD *)a1 + 36, v2) )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    ScreenToClient((__int64)a1, &v15);
    ChildWindowFromPointEx(v6, v15, 3);
    ClientToScreen(a1, &v15);
    BugCheckParameter3 = 0LL;
    if ( v7 )
    {
      if ( (struct tagWND *)v7 != a1 )
      {
        v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v12;
        v12[1] = v7;
        ++*(_DWORD *)(v7 + 8);
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject((struct tagWND *)v7, a2);
        ThreadUnlock1(v9, v8);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v2 = v15;
  }
  ScreenToClient((__int64)a1, (_DWORD *)a2 + 8);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v11 = xxxSendTransformableMessageTimeout(
          (ULONG_PTR)a1,
          0x22Bu,
          v13,
          a2,
          2,
          3000,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v11 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_16;
  if ( result != (struct tagCURSOR *)1 )
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, 3);
  if ( !result )
LABEL_16:
    *((_QWORD *)a2 + 4) = v2;
  return result;
}
