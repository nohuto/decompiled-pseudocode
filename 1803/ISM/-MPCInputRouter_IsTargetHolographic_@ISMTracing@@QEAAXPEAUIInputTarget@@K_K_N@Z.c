/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x180084488
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800860FC (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4,
        ...)
{
  _DWORD *v5; // rcx
  __int64 v6; // rbx
  int PIDOfTarget; // [rsp+30h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  va_list v9; // [rsp+60h] [rbp-11h]
  int v10; // [rsp+68h] [rbp-9h]
  int v11; // [rsp+6Ch] [rbp-5h]
  int *v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+78h] [rbp+7h]
  int v14; // [rsp+7Ch] [rbp+Bh]
  __int64 *v15; // [rsp+80h] [rbp+Fh]
  int v16; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+8Ch] [rbp+1Bh]
  int *p_PIDOfTarget; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+9Ch] [rbp+2Bh]
  int v21; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v22 = a4;
  v21 = a3;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v11 = 0;
        v14 = 0;
        v17 = 0;
        va_copy(v9, va);
        v12 = &v21;
        v15 = &v22;
        v10 = 1;
        v13 = 4;
        v16 = 8;
        v20 = 0;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &PIDOfTarget;
        v19 = 4;
        TlgWrite((TraceLoggingHProvider)v6, &unk_18010F852, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
