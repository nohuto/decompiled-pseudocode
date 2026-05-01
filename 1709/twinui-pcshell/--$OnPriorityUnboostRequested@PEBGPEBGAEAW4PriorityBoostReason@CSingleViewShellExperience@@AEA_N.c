/*
 * XREFs of ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x1801D4454
 * Callers:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
        const WCHAR **a1,
        const WCHAR **a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r10
  const WCHAR *v12; // rdx
  const WCHAR *v13; // r8
  __int64 v14; // rax
  const WCHAR *v15; // rcx
  int v17; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  const WCHAR *v19; // [rsp+68h] [rbp-29h]
  int v20; // [rsp+70h] [rbp-21h]
  int v21; // [rsp+74h] [rbp-1Dh]
  const WCHAR *v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+80h] [rbp-11h]
  int v24; // [rsp+84h] [rbp-Dh]
  int *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  __int64 v29; // [rsp+A8h] [rbp+17h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]
  __int64 v31; // [rsp+B8h] [rbp+27h]
  __int64 v32; // [rsp+C0h] [rbp+2Fh]

  v10 = SingleViewExperienceLogging::Provider();
  v11 = v10;
  if ( *(_DWORD *)v10 > 5u )
  {
    LODWORD(v10) = 0;
    if ( (*((_QWORD *)v11 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v11 + 3) & 0x200000000000LL) == *((_QWORD *)v11 + 3) )
    {
      v12 = &word_18021F3A8;
      v13 = &word_18021F3A8;
      LODWORD(v14) = 0;
      if ( *a1 )
      {
        v13 = *a1;
        v14 = -1LL;
        do
          ++v14;
        while ( (*a1)[v14] );
      }
      v15 = *a2;
      v20 = 2 * v14 + 2;
      LODWORD(v14) = 0;
      v19 = v13;
      v21 = 0;
      if ( v15 )
      {
        v12 = v15;
        v14 = -1LL;
        do
          ++v14;
        while ( v15[v14] );
      }
      v22 = v12;
      v23 = 2 * v14 + 2;
      v17 = *a3;
      v25 = &v17;
      v29 = a5;
      v31 = a6;
      v24 = 0;
      v26 = 4LL;
      v27 = a4;
      v28 = 1LL;
      v30 = 4LL;
      v32 = 1LL;
      LODWORD(v10) = TlgWrite(v11, &unk_1802690E0, 0LL, 0LL, 8u, &pData);
    }
  }
  return (int)v10;
}
