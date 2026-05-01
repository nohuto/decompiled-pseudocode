/*
 * XREFs of ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1801D40F0
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::Hide::ViewKeptAlive<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
        __int64 a1,
        const WCHAR **a2,
        const WCHAR **a3,
        __int64 a4,
        __int64 *a5)
{
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  const WCHAR *v11; // rdx
  const WCHAR *v12; // r8
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  const WCHAR *v19; // [rsp+60h] [rbp-11h]
  int v20; // [rsp+68h] [rbp-9h]
  int v21; // [rsp+6Ch] [rbp-5h]
  const WCHAR *v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+78h] [rbp+7h]
  int v24; // [rsp+7Ch] [rbp+Bh]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h]
  __int64 *v27; // [rsp+90h] [rbp+1Fh]
  __int64 v28; // [rsp+98h] [rbp+27h]

  v9 = SingleViewExperienceLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(v9) = 0;
    if ( (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v11 = &word_18021F3A8;
      v12 = &word_18021F3A8;
      LODWORD(v13) = 0;
      if ( *a2 )
      {
        v12 = *a2;
        v13 = -1LL;
        do
          ++v13;
        while ( (*a2)[v13] );
      }
      v14 = *a3;
      v20 = 2 * v13 + 2;
      LODWORD(v13) = 0;
      v19 = v12;
      v21 = 0;
      if ( v14 )
      {
        v11 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( v14[v13] );
      }
      v22 = v11;
      v23 = 2 * v13 + 2;
      v24 = 0;
      v25 = a4;
      v26 = 4LL;
      v15 = *a5;
      v27 = &v17;
      v17 = v15;
      v28 = 8LL;
      LODWORD(v9) = TlgWrite(v10, &unk_1802692D5, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &pData);
    }
  }
  return (int)v9;
}
