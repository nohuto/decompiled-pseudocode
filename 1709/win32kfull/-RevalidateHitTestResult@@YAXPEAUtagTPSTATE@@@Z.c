/*
 * XREFs of ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AF01C
 * Callers:
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AE7B0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 */

void __fastcall RevalidateHitTestResult(struct tagTPSTATE *a1)
{
  char *v1; // rdi
  __int64 v3; // rax
  struct tagPOINT v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // eax
  _QWORD v8[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9[11]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+BCh] [rbp-44h]
  __int64 v11; // [rsp+140h] [rbp+40h] BYREF
  __int64 v12; // [rsp+148h] [rbp+48h] BYREF
  struct tagPOINT v13; // [rsp+150h] [rbp+50h] BYREF

  v1 = (char *)a1 + 1672;
  v3 = *((_QWORD *)a1 + 209);
  if ( v3 && (*(char *)(v3 + 60) < 0 || *(char *)(v3 + 59) < 0) )
  {
    HMAssignmentUnlock((char *)a1 + 1672);
    v4 = (struct tagPOINT)*((_QWORD *)a1 + 210);
    v5 = *((_QWORD *)a1 + 212);
    LODWORD(v11) = 0;
    LODWORD(v12) = 0;
    v13 = v4;
    xxxSpeedHitTest(0, 5u, 0, v5, &v13, 0LL, (__int64)&v11, (__int64)&v12, v9);
    v6 = 0LL;
    if ( v10 == 2 )
      v6 = v9[10];
    if ( v6 )
    {
      v8[0] = v1;
      v8[1] = v6;
      HMAssignmentLock(v8);
      if ( (_DWORD)v11 )
      {
        v7 = v12;
        *((_DWORD *)a1 + 480) |= 0x1000000u;
        *((_DWORD *)a1 + 481) = v7;
      }
    }
  }
}
