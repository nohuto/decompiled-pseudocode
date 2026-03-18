/*
 * XREFs of Template_jzt @ 0x1401FAB40
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1404E34FC (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jzt(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, const wchar_t *a5, char a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  char *v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  v6 = a5;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v13 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v15 = 4LL;
  v11 = v6;
  v14 = &a6;
  return EtwWriteEx(
           Microsoft_Windows_Kernel_PnPHandle,
           &KMPnPEvt_CfgMgr_DeviceInterfaceList_Start,
           0LL,
           0,
           0LL,
           0LL,
           3u,
           &UserData);
}
