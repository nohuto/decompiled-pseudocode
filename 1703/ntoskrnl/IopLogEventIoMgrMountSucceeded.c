/*
 * XREFs of IopLogEventIoMgrMountSucceeded @ 0x1401511BC
 * Callers:
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountSucceeded(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // di
  __int16 v6; // ax
  REGHANDLE v8; // rsi
  __int16 v10; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-1h] BYREF
  __int16 *v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+6Ch] [rbp+1Bh]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+7Ch] [rbp+2Bh]

  v3 = *a3;
  v6 = *a3 >> 1;
  v10 = v6;
  if ( (_BYTE)dword_1403E3134 )
  {
    v8 = IoMgrTraceHandle;
    LOBYTE(v6) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountSucceeded);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v12 = &v10;
      v15 = *((_QWORD *)a3 + 1);
      v16 = v3;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v13 = 2;
      LOBYTE(v6) = EtwWriteEx(v8, &IoMgr_MountSucceeded, 0LL, 0, ActivityId, 0LL, 3u, &UserData);
    }
  }
  return v6;
}
