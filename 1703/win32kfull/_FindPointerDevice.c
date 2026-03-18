/*
 * XREFs of _FindPointerDevice @ 0x1C0020298
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00203A0 (NtUserGetPointerDeviceProperties.c)
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C01341B0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0135E30 (NtUserGetPointerDevice.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C01D9ED0 (NtUserGetPhysicalDeviceRect.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     IsPTPPointerDevicePresent @ 0x1C019BF2C (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(struct _LIST_ENTRY *a1, _QWORD *a2, struct _LIST_ENTRY **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  struct _LIST_ENTRY *v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  EnterDeviceInfoListCrit_(a1);
  *a2 = 0LL;
  if ( a1 == (struct _LIST_ENTRY *)-2LL )
  {
    v14 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(v8, &v14) )
      goto LABEL_20;
    Flink = v14;
  }
  else
  {
    LOBYTE(v7) = 19;
    Flink = (struct _LIST_ENTRY *)HMValidateHandleNoSecure(a1, v7);
  }
  if ( Flink )
  {
    if ( (LODWORD(Flink[12].Blink) & 0x80u) != 0 )
    {
      if ( !a3 )
      {
LABEL_17:
        if ( (LODWORD(Flink[12].Blink) & 0x80u) != 0 )
          *a2 = Flink[29].Blink;
        v6 = 1;
        goto LABEL_20;
      }
    }
    else if ( !a3 )
    {
      UserSetLastError(6LL);
      goto LABEL_20;
    }
    *a3 = Flink;
    goto LABEL_17;
  }
  Flink = gPointerDeviceInfoList.Flink;
  v10 = 0LL;
  v11 = 0;
  while ( Flink != &gPointerDeviceInfoList )
  {
    v10 = Flink - 93;
    Flink = Flink->Flink;
    if ( v10[44].Blink == a1 )
    {
      v11 = 1;
      break;
    }
  }
  v12 = (unsigned __int64)v10 & -(__int64)(v11 != 0);
  *a2 = v12;
  LOBYTE(v6) = v12 != 0;
LABEL_20:
  LeaveDeviceInfoListCrit_(Flink);
  return v6;
}
