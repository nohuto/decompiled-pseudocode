/*
 * XREFs of ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x18005BC34
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x180058890 (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
        void **a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  const struct _TlgProvider_t *v8; // rax
  void *v9; // r11
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp-49h] BYREF
  int v13; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+74h] [rbp-Dh]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int *v20; // [rsp+88h] [rbp+7h]
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
    v12 = *a3;
    v20 = &v12;
    v13 = *a4;
    v22 = &v13;
    v17 = 0;
    v18 = a2;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_1801F53C0, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
