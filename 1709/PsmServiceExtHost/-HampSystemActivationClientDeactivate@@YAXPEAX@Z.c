/*
 * XREFs of ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180040824
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     Pdcv2ActivationClientDeactivate @ 0x18004A1DC (Pdcv2ActivationClientDeactivate.c)
 */

void __fastcall HampSystemActivationClientDeactivate(void *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *cData; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  void *v5; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  void **v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v5 = a1;
  v4 = Pdcv2ActivationClientDeactivate(a1);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v4;
      v10 = &v5;
      v8 = (int)cData;
      v11 = 8;
      TlgWrite(v1, &unk_18005A634, v2, cData, (UINT32)cData, &pData);
    }
  }
}
