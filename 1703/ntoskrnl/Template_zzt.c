/*
 * XREFs of Template_zzt @ 0x1401FAD44
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzt(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5, char a6)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // rcx
  ULONG v9; // edx
  const wchar_t *v10; // rcx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  char *v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp-20h]

  v6 = -1LL;
  v7 = 10;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v10 = a5;
  UserData.Size = v9;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v10 = L"NULL";
  v15 = v7;
  v14 = v10;
  v17 = &a6;
  v16 = 0;
  v18 = 4LL;
  return EtwWriteEx(
           Microsoft_Windows_Kernel_PnPHandle,
           &KMPnPEvt_CfgMgr_DeviceList_Start,
           0LL,
           0,
           0LL,
           0LL,
           3u,
           &UserData);
}
