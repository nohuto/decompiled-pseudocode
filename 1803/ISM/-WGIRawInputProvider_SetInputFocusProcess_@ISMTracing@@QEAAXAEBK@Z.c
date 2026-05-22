/*
 * XREFs of ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x1800764B8
 * Callers:
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(ISMTracing *this, const unsigned int *a2)
{
  _DWORD *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const unsigned int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 && *v3 )
  {
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v4 > 4u )
    {
      v8 = 0;
      v6 = a2;
      v7 = 4;
      TlgWrite(v4, &unk_18010F5AF, 0LL, 0LL, 3u, &pData);
    }
  }
}
