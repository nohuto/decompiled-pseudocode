/*
 * XREFs of ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18006A5F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x18006B810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
        void **a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  const struct _TlgProvider_t *v8; // rax
  void *v9; // r11
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+74h] [rbp-Dh]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int64 *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  int *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  v8 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = &unk_1801C6ABC;
    LODWORD(v10) = 0;
    if ( *a1 )
    {
      v9 = *a1;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)*a1 + v10) );
    }
    v15 = v9;
    v16 = 2 * v10 + 2;
    v13 = *a3;
    v20 = &v13;
    v12 = *a4;
    v22 = &v12;
    v17 = 0;
    v18 = a2;
    v19 = 4LL;
    v21 = 8LL;
    v23 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_1801F6053, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
