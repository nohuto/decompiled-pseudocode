/*
 * XREFs of ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01ABC1C
 * Callers:
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AB3F0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 */

void __fastcall RevalidateHitTestResult(struct tagTPSTATE *a1)
{
  char *v1; // rdi
  __int64 v3; // rax
  struct tagPOINT v4; // rax
  __int64 v5; // r9
  struct tagWND *v6; // rax
  int v7; // eax
  _QWORD v8[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF
  struct tagPOINT v11; // [rsp+80h] [rbp+30h] BYREF

  v1 = (char *)a1 + 1672;
  v3 = *((_QWORD *)a1 + 209);
  if ( v3 && (*(char *)(v3 + 60) < 0 || *(char *)(v3 + 59) < 0) )
  {
    HMAssignmentUnlock((char *)a1 + 1672);
    v4 = (struct tagPOINT)*((_QWORD *)a1 + 210);
    v5 = *((_QWORD *)a1 + 212);
    LODWORD(v9) = 0;
    LODWORD(v10) = 0;
    v11 = v4;
    v6 = xxxSpeedHitTest(0, 5u, 0LL, v5, &v11, 0LL, (__int64)&v9, (__int64)&v10);
    if ( v6 )
    {
      v8[0] = v1;
      v8[1] = v6;
      HMAssignmentLock(v8);
      if ( (_DWORD)v9 )
      {
        v7 = v10;
        *((_DWORD *)a1 + 480) |= 0x1000000u;
        *((_DWORD *)a1 + 481) = v7;
      }
    }
  }
}
