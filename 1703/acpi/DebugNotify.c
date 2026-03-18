/*
 * XREFs of DebugNotify @ 0x1C005C2C0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     _strupr_0 @ 0x1C002BFBE (_strupr_0.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     IsNumber @ 0x1C005C948 (IsNumber.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, _BYTE *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  _QWORD *ObjectPath; // rax
  char *v8; // rdx
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
        PrintDebugMessage(221, a2, 0LL, 0LL, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2) )
      {
        PrintDebugMessage(231, a2, 0LL, 0LL, 0LL);
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
      PrintDebugMessage(222, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C0078230);
    v8 = byte_1C0066CD0;
    v9 = ObjectPath;
    if ( ObjectPath )
      v8 = (char *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C0078228);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C0078228, qword_1C0078230 + 120, qword_1C0077F88, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C0078230 )
    DereferenceObjectEx((_QWORD *)qword_1C0078230);
  return v4;
}
