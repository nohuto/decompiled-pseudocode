/*
 * XREFs of DebugRunMethod @ 0x1C005C5A0
 * Callers:
 *     <none>
 * Callees:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C0012F98 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     _strtoui64_0 @ 0x1C002BFB2 (_strtoui64_0.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     DebugExpr @ 0x1C005BFDC (DebugExpr.c)
 *     IsNumber @ 0x1C005C948 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C005CB70 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _QWORD *ObjectPath; // rax
  char *v9; // rdx
  void *v10; // rbx
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    PrintDebugMessage(235, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C0076510 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C0076510 != -1 )
    {
      if ( dword_1C0076510 >= 7 )
      {
        PrintDebugMessage(236, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        memset((char *)&unk_1C0078100 + 40 * dword_1C0076510, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C0076510;
          *((_QWORD *)&unk_1C0078100 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C0076510;
          *((_WORD *)&unk_1C0078100 + 4 * v5 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, a2, 0LL, 0LL, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v2 = DebugExpr(a2, v12, &v13);
    if ( v2 )
      goto LABEL_27;
    if ( !v13 )
    {
      PrintDebugMessage(232, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_3;
    }
    qword_1C0078218 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C0076510 = 0;
  }
  else
  {
    if ( dword_1C0076510 < 0 )
    {
      PrintDebugMessage(226, 0LL, 0LL, 0LL, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C0078268, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C0078218,
             (_SLIST_ENTRY *)&unk_1C0078268,
             dword_1C0076510,
             (__int64)&unk_1C0078100,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C0078218);
        v9 = byte_1C0066CD0;
        v10 = ObjectPath;
        if ( ObjectPath )
          v9 = (char *)ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C0078218 + 120, v6, &unk_1C0078268, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx((_QWORD *)qword_1C0078218);
      qword_1C0078218 = 0LL;
      dword_1C0076510 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
