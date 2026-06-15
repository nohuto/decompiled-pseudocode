/*
 * XREFs of ReportHangInternal2 @ 0x140039E24
 * Callers:
 *     ?OnHang@?$CWatchdogTimer@$01@@AEAAXXZ @ 0x1400398E8 (-OnHang@-$CWatchdogTimer@$01@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     RhpCaptureSnapshots @ 0x14003A138 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x14003A4E0 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 */

__int64 __fastcall ReportHangInternal2(void *Src, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  DWORD TickCount; // eax
  int v9; // r9d
  const unsigned __int16 *v10; // rcx
  unsigned int v11; // r9d
  _QWORD *v12; // rsi
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v16[40]; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v20; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v21[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  _BYTE v22[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v23; // [rsp+630h] [rbp+530h]
  _BYTE v24[128]; // [rsp+638h] [rbp+538h] BYREF
  char v25; // [rsp+6B8h] [rbp+5B8h] BYREF
  char v26; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v27; // [rsp+708h] [rbp+608h]
  int v28; // [rsp+B20h] [rbp+A20h]
  DWORD v29; // [rsp+B24h] [rbp+A24h]

  v4 = a2;
  memset_0(v21, 0, 0x578uLL);
  memset_0(v16, 0, 0x578uLL);
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
  memset_0(v21, 0, 0x578uLL);
  v21[0] = 91751760;
  v21[10] = 0x10000000;
  memcpy_0(v22, Src, 4 * v4);
  v27 = 0LL;
  v23 = a3;
  TickCount = GetTickCount();
  v28 = 49176;
  v29 = TickCount;
  RhpCaptureSnapshots((unsigned int)v24, (unsigned int)&v25, (unsigned int)&v26, v9, (__int64)v22);
  v6 = WersvcSendMessage(v10, (struct _WERSVC_MSG *)v21, (struct _WERSVC_MSG *)v16, v11);
  v12 = v24;
  do
  {
    if ( *v12 )
      PssNtFreeSnapshot();
    ++v12;
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
    switch ( v17 )
    {
      case 268435457:
        goto LABEL_16;
      case 268435458:
        v6 = v18;
        if ( v18 < 0 )
          goto LABEL_21;
        break;
      case 268435461:
LABEL_16:
        v13 = 0LL;
        if ( Handle )
        {
          v15[0] = Handle;
          v13 = 1LL;
        }
        if ( v20 )
          v15[v13] = v20;
        v6 = 0;
        goto LABEL_21;
    }
    v6 = -1073741823;
  }
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  if ( v20 )
    NtClose(v20);
  return (unsigned int)v6;
}
