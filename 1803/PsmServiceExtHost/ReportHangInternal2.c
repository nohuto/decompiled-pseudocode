/*
 * XREFs of ReportHangInternal2 @ 0x18006DB78
 * Callers:
 *     ?HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C5C (-HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     RhpCaptureSnapshots @ 0x18006DD84 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x18006DFF0 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 */

__int64 __fastcall ReportHangInternal2(void *Src, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  int v5; // ebx
  DWORD TickCount; // eax
  int v7; // r9d
  const unsigned __int16 *v8; // rcx
  unsigned int v9; // r9d
  _QWORD *v10; // rsi
  ULONG v11; // ecx
  __int64 v12; // rax
  HANDLE Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v19; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v20[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  union _LARGE_INTEGER v21; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v22; // [rsp+630h] [rbp+530h]
  _BYTE v23[128]; // [rsp+638h] [rbp+538h] BYREF
  char v24; // [rsp+6B8h] [rbp+5B8h] BYREF
  char v25; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v26; // [rsp+708h] [rbp+608h]
  int v27; // [rsp+B20h] [rbp+A20h]
  DWORD v28; // [rsp+B24h] [rbp+A24h]

  v2 = a2;
  memset_0(v20, 0, 0x578uLL);
  memset_0(v15, 0, 0x578uLL);
  if ( !(_DWORD)v2 )
  {
    v5 = -1073741811;
    goto LABEL_24;
  }
  v4 = 16LL;
  if ( (unsigned int)v2 > 0x10 )
  {
    v5 = -1073740757;
    goto LABEL_24;
  }
  memset_0(v20, 0, 0x578uLL);
  v20[0] = 91751760;
  v20[10] = 0x10000000;
  memcpy_0(&v21, Src, 4 * v2);
  v22 = 0;
  v26 = 0LL;
  TickCount = GetTickCount();
  v27 = 98428;
  v28 = TickCount;
  RhpCaptureSnapshots((unsigned int)v23, (unsigned int)&v24, (unsigned int)&v25, v7, (__int64)&v21);
  v5 = WersvcSendMessage(v8, (struct _WERSVC_MSG *)v20, (struct _WERSVC_MSG *)v15, v9);
  v10 = v23;
  do
  {
    if ( *v10 )
      PssNtFreeSnapshot();
    ++v10;
    --v4;
  }
  while ( v4 );
  if ( v5 >= 0 )
  {
    if ( v5 == 258 )
    {
      v5 = -1073741248;
      goto LABEL_24;
    }
    switch ( v16 )
    {
      case 268435457:
        goto LABEL_14;
      case 268435458:
        v5 = v17;
        if ( v17 < 0 )
          goto LABEL_24;
        break;
      case 268435461:
LABEL_14:
        v11 = 0;
        if ( Handle )
        {
          Object[0] = Handle;
          v11 = 1;
        }
        if ( v19 )
        {
          v12 = v11++;
          Object[v12] = v19;
        }
        if ( v11 )
          NtWaitForMultipleObjects(v11, Object, WaitAny, 0, 0LL);
        v5 = 0;
        goto LABEL_24;
    }
    v5 = -1073741823;
  }
LABEL_24:
  if ( Handle )
    NtClose(Handle);
  if ( v19 )
    NtClose(v19);
  return (unsigned int)v5;
}
