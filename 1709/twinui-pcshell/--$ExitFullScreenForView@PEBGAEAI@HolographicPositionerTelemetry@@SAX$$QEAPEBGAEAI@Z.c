/*
 * XREFs of ??$ExitFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x180103020
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::ExitFullScreenForView<unsigned short const *,unsigned int &>(
        const WCHAR **a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // r10
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+5Ch] [rbp-2Ch]
  __int64 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+68h] [rbp-20h]

  v4 = HolographicPositionerProvider::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 4u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &word_18021F3A8;
      LODWORD(v7) = 0;
      if ( *a1 )
      {
        v6 = *a1;
        v7 = -1LL;
        do
          ++v7;
        while ( (*a1)[v7] );
      }
      v10 = v6;
      v11 = 2 * v7 + 2;
      v12 = 0;
      v13 = a2;
      v14 = 4LL;
      LODWORD(v4) = TlgWrite(v5, &unk_18025F00A, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
