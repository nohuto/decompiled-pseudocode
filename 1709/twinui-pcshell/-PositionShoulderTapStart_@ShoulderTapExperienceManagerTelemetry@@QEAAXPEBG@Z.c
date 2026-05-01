/*
 * XREFs of ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1800B3978
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800B4D54 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B3618 (-Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v3; // r10
  const WCHAR *v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = ShoulderTapExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = &word_18021F3A8;
    LODWORD(v5) = 0;
    if ( a2 )
    {
      v4 = a2;
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    v7 = v4;
    v8 = 2 * v5 + 2;
    v9 = 0;
    TlgWrite(v3, &unk_18025B59D, 0LL, 0LL, 3u, &pData);
  }
}
