/*
 * XREFs of IopLogEventIoMgrMountFailed @ 0x14015378C
 * Callers:
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountFailed(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 v4; // si
  __int16 v7; // ax
  REGHANDLE v9; // rbx
  __int16 v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  __int64 v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int v22; // [rsp+F8h] [rbp+7Fh] BYREF

  v22 = a4;
  v4 = *a3;
  v7 = *a3 >> 1;
  v11 = v7;
  if ( (_BYTE)dword_1403E3134 )
  {
    v9 = IoMgrTraceHandle;
    LOBYTE(v7) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountFailed);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v11;
      v16 = *((_QWORD *)a3 + 1);
      v17 = v4;
      v19 = &v22;
      v20 = 4;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v14 = 2;
      LOBYTE(v7) = EtwWriteEx(v9, &IoMgr_MountFailed, 0LL, 0, ActivityId, 0LL, 4u, &UserData);
    }
  }
  return v7;
}
