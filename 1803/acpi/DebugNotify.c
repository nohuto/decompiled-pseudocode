/*
 * XREFs of DebugNotify @ 0x1C0048970
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     _strupr_0 @ 0x1C0003FCE (_strupr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     IsNumber @ 0x1C0049010 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  __int64 ObjectPath; // rax
  void *v8; // rdx
  void *v9; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        PrintDebugMessage(221, (_DWORD)a2, 0, 0, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2) )
      {
        PrintDebugMessage(231, (_DWORD)a2, 0, 0, 0LL);
LABEL_11:
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      PrintDebugMessage(222, 0, 0, 0, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C00687F0);
    v8 = &unk_1C005B1F0;
    v9 = (void *)ObjectPath;
    if ( ObjectPath )
      v8 = (void *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C00687E8);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C00687E8, qword_1C00687F0 + 120, qword_1C0068628, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C00687F0 )
    DereferenceObjectEx(qword_1C00687F0);
  return v4;
}
