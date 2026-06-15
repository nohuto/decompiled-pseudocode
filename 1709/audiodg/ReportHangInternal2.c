/*
 * XREFs of ReportHangInternal2 @ 0x14003B430
 * Callers:
 *     ?OnHang@CWatchdogTimer@@AEAAXXZ @ 0x14003B048 (-OnHang@CWatchdogTimer@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     RhpCaptureSnapshots @ 0x14003B738 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x14003BAE0 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 */

__int64 __fastcall ReportHangInternal2(int *a1, __int64 a2, int a3)
{
  int v5; // eax
  DWORD TickCount; // eax
  int v7; // r9d
  const unsigned __int16 *v8; // rcx
  unsigned int v9; // r9d
  int v10; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  HANDLE v13; // rcx
  HANDLE v14; // rdx
  __int64 v15; // rax
  HANDLE v17[2]; // [rsp+30h] [rbp-D0h]
  HANDLE v18[176]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[176]; // [rsp+5C0h] [rbp+4C0h] BYREF

  memset(v18, 0, 0x578uLL);
  memset(v19, 0, 0x578uLL);
  v5 = *a1;
  v19[41] = 0LL;
  LODWORD(v19[6]) = v5;
  LODWORD(v19[0]) = 91751760;
  LODWORD(v19[5]) = 0x10000000;
  LODWORD(v19[14]) = a3;
  TickCount = GetTickCount();
  LODWORD(v19[172]) = 49176;
  HIDWORD(v19[172]) = TickCount;
  RhpCaptureSnapshots((unsigned int)&v19[15], (unsigned int)&v19[31], (unsigned int)&v19[33], v7, (__int64)&v19[6]);
  v10 = WersvcSendMessage(v8, (struct _WERSVC_MSG *)v19, (struct _WERSVC_MSG *)v18, v9);
  v11 = &v19[15];
  v12 = 16LL;
  do
  {
    if ( *v11 )
      PssNtFreeSnapshot();
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = v18[174];
  v14 = v18[173];
  if ( v10 >= 0 )
  {
    if ( v10 == 258 )
    {
      v10 = -1073741248;
      goto LABEL_16;
    }
    switch ( LODWORD(v18[5]) )
    {
      case 0x10000001:
        goto LABEL_11;
      case 0x10000002:
        v10 = HIDWORD(v18[5]);
        if ( SHIDWORD(v18[5]) < 0 )
          goto LABEL_16;
        break;
      case 0x10000005:
LABEL_11:
        v15 = 0LL;
        if ( v18[173] )
        {
          v17[0] = v18[173];
          v15 = 1LL;
        }
        if ( v18[174] )
          v17[v15] = v18[174];
        v10 = 0;
        goto LABEL_16;
    }
    v10 = -1073741823;
  }
LABEL_16:
  if ( v14 )
  {
    NtClose(v14);
    v13 = v18[174];
  }
  if ( v13 )
    NtClose(v13);
  return (unsigned int)v10;
}
