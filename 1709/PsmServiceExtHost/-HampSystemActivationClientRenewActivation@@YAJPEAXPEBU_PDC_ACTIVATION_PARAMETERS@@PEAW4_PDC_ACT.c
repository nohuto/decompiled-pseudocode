/*
 * XREFs of ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x1800408CC
 * Callers:
 *     ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180047C10 (-HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18004A38C (Pdcv2ActivationClientRenewActivation.c)
 */

__int64 __fastcall HampSystemActivationClientRenewActivation(
        void *a1,
        const struct _PDC_ACTIVATION_PARAMETERS *a2,
        enum _PDC_ACTIVATOR_ERROR_DETAIL *a3)
{
  char v3; // bl
  const GUID *v4; // r9
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  char v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  void *v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  void **v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  char *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v3 = (char)a3;
  v10 = a1;
  LODWORD(v4) = Pdcv2ActivationClientRenewActivation(a1, a2);
  v9 = (int)v4;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v13 = 4LL;
    v12 = &v9;
    v14 = &v10;
    v16 = &v8;
    v15 = 8LL;
    v8 = v3;
    v17 = 1LL;
    TlgWrite(v5, &unk_18005A6EF, v6, v4, 5u, &pData);
    LODWORD(v4) = v9;
  }
  return (unsigned int)v4;
}
