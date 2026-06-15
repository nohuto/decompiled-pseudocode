/*
 * XREFs of ReportHangInternal2_0 @ 0x18006F030
 * Callers:
 *     ?OnHang@CWatchdogTimer@@AEAAXXZ @ 0x18006EA54 (-OnHang@CWatchdogTimer@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x180060784 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 *     RhpCaptureSnapshots @ 0x18006F260 (RhpCaptureSnapshots.c)
 */

__int64 __fastcall ReportHangInternal2_0(int *a1, __int64 a2, int a3)
{
  int v5; // eax
  DWORD TickCount; // eax
  int v7; // r9d
  const unsigned __int16 *v8; // rcx
  int v9; // ebx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  HANDLE v12; // rcx
  HANDLE v13; // rdx
  __int64 v14; // rax
  HANDLE v16[2]; // [rsp+30h] [rbp-D0h]
  HANDLE v17[176]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[176]; // [rsp+5C0h] [rbp+4C0h] BYREF

  memset(v17, 0, 0x578uLL);
  memset(v18, 0, 0x578uLL);
  v5 = *a1;
  v18[41] = 0LL;
  LODWORD(v18[6]) = v5;
  LODWORD(v18[0]) = 91751760;
  LODWORD(v18[5]) = 0x10000000;
  LODWORD(v18[14]) = a3;
  TickCount = GetTickCount();
  LODWORD(v18[172]) = 49176;
  HIDWORD(v18[172]) = TickCount;
  RhpCaptureSnapshots((unsigned int)&v18[15], (unsigned int)&v18[31], (unsigned int)&v18[33], v7, (__int64)&v18[6]);
  v9 = WersvcSendMessage(v8, (struct _WERSVC_MSG *)v18, (struct _WERSVC_MSG *)v17);
  v10 = &v18[15];
  v11 = 16LL;
  do
  {
    if ( *v10 )
      PssNtFreeSnapshot();
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = v17[174];
  v13 = v17[173];
  if ( v9 >= 0 )
  {
    if ( v9 == 258 )
    {
      v9 = -1073741248;
      goto LABEL_16;
    }
    switch ( LODWORD(v17[5]) )
    {
      case 0x10000001:
        goto LABEL_11;
      case 0x10000002:
        v9 = HIDWORD(v17[5]);
        if ( SHIDWORD(v17[5]) < 0 )
          goto LABEL_16;
        break;
      case 0x10000005:
LABEL_11:
        v14 = 0LL;
        if ( v17[173] )
        {
          v16[0] = v17[173];
          v14 = 1LL;
        }
        if ( v17[174] )
          v16[v14] = v17[174];
        v9 = 0;
        goto LABEL_16;
    }
    v9 = -1073741823;
  }
LABEL_16:
  if ( v13 )
  {
    NtClose(v13);
    v12 = v17[174];
  }
  if ( v12 )
    NtClose(v12);
  return (unsigned int)v9;
}
