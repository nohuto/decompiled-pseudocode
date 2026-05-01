/*
 * XREFs of ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x180185024
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018367C (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
        void **a1,
        void **a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r10
  void *v12; // rdx
  void *v13; // r8
  __int64 v14; // rax
  void *v15; // rcx
  int v17; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  void *v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+74h] [rbp-2Dh]
  void *v22; // [rsp+78h] [rbp-29h]
  int v23; // [rsp+80h] [rbp-21h]
  int v24; // [rsp+84h] [rbp-1Dh]
  int *v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  __int64 v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  __int64 v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]

  v10 = SingleViewExperienceLogging::Provider();
  v11 = v10;
  if ( *(_DWORD *)v10 > 5u )
  {
    LODWORD(v10) = 0;
    if ( (*((_QWORD *)v11 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v11 + 3) & 0x200000000000LL) == *((_QWORD *)v11 + 3) )
    {
      v12 = &unk_1801C6ABC;
      v13 = &unk_1801C6ABC;
      LODWORD(v14) = 0;
      if ( *a1 )
      {
        v13 = *a1;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)*a1 + v14) );
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
        while ( *((_WORD *)v15 + v14) );
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
      LODWORD(v10) = TlgWrite(v11, &unk_180203F7F, 0LL, 0LL, 8u, &pData);
    }
  }
  return (int)v10;
}
