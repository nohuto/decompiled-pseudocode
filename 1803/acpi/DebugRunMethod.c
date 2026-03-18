/*
 * XREFs of DebugRunMethod @ 0x1C0048C60
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseObject @ 0x1C0002BAC (GetBaseObject.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     _strtoui64_0 @ 0x1C0003FC2 (_strtoui64_0.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     DebugExpr @ 0x1C0048694 (DebugExpr.c)
 *     IsNumber @ 0x1C0049010 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C00492E0 (RunMethodCallBack.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rbx
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    PrintDebugMessage(235, 0, 0, 0, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C00664B0 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C00664B0 != -1 )
    {
      if ( dword_1C00664B0 >= 7 )
      {
        PrintDebugMessage(236, 0, 0, 0, 0LL);
      }
      else
      {
        memset((char *)&unk_1C00686C0 + 40 * dword_1C00664B0, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C00664B0;
          *((_QWORD *)&unk_1C00686C0 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C00664B0;
          *((_WORD *)&unk_1C00686C0 + 4 * v5 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, (_DWORD)a2, 0, 0, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v2 = DebugExpr(a2, v12, &v13);
    if ( v2 )
      goto LABEL_27;
    if ( !v13 )
    {
      PrintDebugMessage(232, 0, 0, 0, 0LL);
      goto LABEL_3;
    }
    qword_1C00687D8 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C00664B0 = 0;
  }
  else
  {
    if ( dword_1C00664B0 < 0 )
    {
      PrintDebugMessage(226, 0, 0, 0, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C0067FF0, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C00687D8,
             (__int64)&unk_1C0067FF0,
             dword_1C00664B0,
             (__int64)&unk_1C00686C0,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C00687D8);
        v9 = &unk_1C005B1F0;
        v10 = (void *)ObjectPath;
        if ( ObjectPath )
          v9 = (void *)ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C00687D8 + 120, v6, &unk_1C0067FF0, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx(qword_1C00687D8);
      qword_1C00687D8 = 0LL;
      dword_1C00664B0 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
