/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@_NI@Z @ 0x18004A40C
 * Callers:
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z @ 0x180049F60 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z.c)
 *     ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z @ 0x180049FD0 (-OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCInputTarget@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IInputTarget *a2,
        struct InputInfo *a3,
        char a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  int PIDOfTarget; // eax
  bool v9; // zf
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp-91h] BYREF
  int v13; // [rsp+34h] [rbp-8Dh] BYREF
  struct IInputTarget *v14; // [rsp+38h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-81h] BYREF
  struct IInputTarget **v16; // [rsp+60h] [rbp-61h]
  __int64 v17; // [rsp+68h] [rbp-59h]
  int *v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  const wchar_t *v20; // [rsp+80h] [rbp-41h]
  int v21; // [rsp+88h] [rbp-39h]
  int v22; // [rsp+8Ch] [rbp-35h]
  int *v23; // [rsp+90h] [rbp-31h]
  __int64 v24; // [rsp+98h] [rbp-29h]
  char *v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  char *v27; // [rsp+B0h] [rbp-11h]
  __int64 v28; // [rsp+B8h] [rbp-9h]
  char *v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  unsigned int *v31; // [rsp+D0h] [rbp+Fh]
  __int64 v32; // [rsp+D8h] [rbp+17h]
  char v33; // [rsp+138h] [rbp+77h] BYREF

  v33 = a4;
  v7 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v14 = a2;
    v16 = &v14;
    v17 = 8LL;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
    v9 = *(_DWORD *)a3 == 512;
    v12 = PIDOfTarget;
    v18 = &v12;
    v19 = 4LL;
    if ( v9 )
    {
      v10 = L"Hand";
    }
    else if ( *(_DWORD *)a3 == 1024 )
    {
      v10 = L"Clicker";
    }
    else
    {
      v10 = &sourceString;
      if ( *(_DWORD *)a3 == 0x2000 )
        v10 = L"6dof";
    }
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v20 = v10;
    v21 = 2 * v11 + 2;
    v13 = *((_DWORD *)a3 + 1);
    v23 = &v13;
    v25 = (char *)a3 + 8;
    v27 = (char *)a3 + 528;
    v29 = &v33;
    v31 = &a5;
    v22 = 0;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 1LL;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18010DA90, 0LL, 0LL, 0xAu, &pData);
  }
}
