/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x1800842C0
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x180086834 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rsi
  const wchar_t *v7; // rbx
  int v8; // eax
  const wchar_t *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int PIDOfTarget; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  struct IMPCInputTarget *v15; // [rsp+38h] [rbp-71h] BYREF
  struct IMPCInputTarget *v16; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  struct IMPCInputTarget **v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  int *p_PIDOfTarget; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  const wchar_t *v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+9Ch] [rbp-Dh]
  struct IMPCInputTarget **v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  int *v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  const wchar_t *v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]
  int v31; // [rsp+CCh] [rbp+23h]

  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( !v5 )
    return;
  if ( !*v5 )
    return;
  v6 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v6 <= 4u || (*(_BYTE *)(v6 + 16) & 1) == 0 || (*(_QWORD *)(v6 + 24) & 1LL) != *(_QWORD *)(v6 + 24) )
    return;
  v15 = a2;
  v18 = &v15;
  v19 = 8LL;
  PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
  p_PIDOfTarget = &PIDOfTarget;
  v7 = L"Exclusive";
  v21 = 4LL;
  if ( a2 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2);
    if ( !v8 )
    {
      v9 = L"SharedWorld";
      goto LABEL_12;
    }
    if ( v8 == 1 )
    {
      v9 = L"Exclusive";
      goto LABEL_12;
    }
  }
  v9 = &sourceString;
LABEL_12:
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v9[v11] );
  v22 = v9;
  v23 = 2 * v11 + 2;
  v24 = 0;
  v25 = &v16;
  v16 = a3;
  v26 = 8LL;
  v14 = ISMTracing::GetPIDOfTarget(a3);
  v27 = &v14;
  v28 = 4LL;
  if ( !a3 )
    goto LABEL_17;
  v12 = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3);
  if ( !v12 )
  {
    v7 = L"SharedWorld";
    goto LABEL_18;
  }
  if ( v12 != 1 )
LABEL_17:
    v7 = &sourceString;
  do
LABEL_18:
    ++v10;
  while ( v7[v10] );
  v29 = v7;
  v30 = 2 * v10 + 2;
  v31 = 0;
  TlgWrite((TraceLoggingHProvider)v6, &unk_18010F8B4, 0LL, 0LL, 8u, &pData);
}
