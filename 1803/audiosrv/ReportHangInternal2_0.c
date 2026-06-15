/*
 * XREFs of ReportHangInternal2_0 @ 0x18009F88C
 * Callers:
 *     ?OnHang@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x18009F38C (-OnHang@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     RhpCaptureSnapshots @ 0x18009C484 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x18009C7A0 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 */

__int64 __fastcall ReportHangInternal2_0(void *Src, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  DWORD TickCount; // eax
  int v9; // r9d
  const unsigned __int16 *v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v15[40]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v19; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v20[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  int v21[18]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _QWORD v22[16]; // [rsp+638h] [rbp+538h] BYREF
  __int64 v23; // [rsp+6B8h] [rbp+5B8h] BYREF
  NTSTATUS v24[16]; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v25; // [rsp+708h] [rbp+608h]
  int v26; // [rsp+B20h] [rbp+A20h]
  DWORD v27; // [rsp+B24h] [rbp+A24h]

  v4 = a2;
  memset_0(v20, 0, 0x578uLL);
  memset_0(v15, 0, 0x578uLL);
  if ( !(_DWORD)v4 && !a3 )
  {
    v6 = -1073741811;
    goto LABEL_21;
  }
  v7 = 16LL;
  if ( (unsigned int)v4 > 0x10 )
  {
    v6 = -1073740757;
    goto LABEL_21;
  }
  memset_0(v20, 0, 0x578uLL);
  v20[0] = 91751760;
  v20[10] = 0x10000000;
  memcpy_0(v21, Src, 4 * v4);
  v25 = 0LL;
  v21[16] = a3;
  TickCount = GetTickCount();
  v26 = 49176;
  v27 = TickCount;
  RhpCaptureSnapshots(v22, &v23, v24, v9, v21);
  v6 = WersvcSendMessage(v10, (struct _WERSVC_MSG *)v20, (struct _WERSVC_MSG *)v15);
  v11 = v22;
  do
  {
    if ( *v11 )
      PssNtFreeSnapshot();
    ++v11;
    --v7;
  }
  while ( v7 );
  if ( v6 >= 0 )
  {
    if ( v6 == 258 )
    {
      v6 = -1073741248;
      goto LABEL_21;
    }
    switch ( v16 )
    {
      case 268435457:
        goto LABEL_16;
      case 268435458:
        v6 = v17;
        if ( v17 < 0 )
          goto LABEL_21;
        break;
      case 268435461:
LABEL_16:
        v12 = 0LL;
        if ( Handle )
        {
          v14[0] = Handle;
          v12 = 1LL;
        }
        if ( v19 )
          v14[v12] = v19;
        v6 = 0;
        goto LABEL_21;
    }
    v6 = -1073741823;
  }
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  if ( v19 )
    NtClose(v19);
  return (unsigned int)v6;
}
