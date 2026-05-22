/*
 * XREFs of ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x18005A7D4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_StartScroll_(ISMTracing *this, int a2, int a3, int a4, char a5)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+64h] [rbp+Bh]
  int *v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+74h] [rbp+1Bh]
  int *v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+84h] [rbp+2Bh]
  char *v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+94h] [rbp+3Bh]
  int v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF
  int v22; // [rsp+D0h] [rbp+77h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v10 = 0;
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v8 = &v20;
        v11 = &v21;
        v14 = &v22;
        v17 = &a5;
        v9 = 4;
        v12 = 4;
        v15 = 4;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)v6, &unk_18010E688, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
