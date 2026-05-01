/*
 * XREFs of ??$HolographicViewRemoved@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1800DED80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800D578C (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::HolographicViewRemoved<unsigned short const *,unsigned int &>(
        void **a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // r10
  void *v6; // rdx
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  void *v10; // [rsp+50h] [rbp-48h]
  int v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+5Ch] [rbp-3Ch]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]

  v4 = HolographicPositionerProvider::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 4u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &unk_1801C6ABC;
      LODWORD(v7) = 0;
      if ( *a1 )
      {
        v6 = *a1;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_WORD *)*a1 + v7) );
      }
      v10 = v6;
      v11 = 2 * v7 + 2;
      v12 = 0;
      v13 = a2;
      v14 = 4LL;
      LODWORD(v4) = TlgWrite(v5, &unk_1801FC84E, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
