/*
 * XREFs of ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z @ 0x1800840F4
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_CreateMPCTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct IMPCInputTarget *a7)
{
  _DWORD *v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-91h] BYREF
  struct IInputTarget *v19; // [rsp+40h] [rbp-89h] BYREF
  struct IMPCInputTarget *v20; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-71h] BYREF
  struct IInputTarget **v22; // [rsp+78h] [rbp-51h]
  __int64 v23; // [rsp+80h] [rbp-49h]
  __int64 *v24; // [rsp+88h] [rbp-41h]
  __int64 v25; // [rsp+90h] [rbp-39h]
  int *v26; // [rsp+98h] [rbp-31h]
  __int64 v27; // [rsp+A0h] [rbp-29h]
  const wchar_t *v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+B0h] [rbp-19h]
  int v30; // [rsp+B4h] [rbp-15h]
  unsigned __int64 *v31; // [rsp+B8h] [rbp-11h]
  __int64 v32; // [rsp+C0h] [rbp-9h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp-1h]
  __int64 v34; // [rsp+D0h] [rbp+7h]
  struct IMPCInputTarget **v35; // [rsp+D8h] [rbp+Fh]
  __int64 v36; // [rsp+E0h] [rbp+17h]
  int v37; // [rsp+128h] [rbp+5Fh] BYREF

  v37 = a3;
  v9 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v9 )
  {
    if ( *v9 )
    {
      v10 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v10 > 4u
        && (*(_BYTE *)(v10 + 16) & 1) != 0
        && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
      {
        v19 = a2;
        v22 = &v19;
        v23 = 8LL;
        LODWORD(v18) = ISMTracing::GetPIDOfTarget(a2);
        v24 = &v18;
        v26 = &v37;
        v25 = 4LL;
        v27 = 4LL;
        if ( a4 )
        {
          v11 = a4 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 1;
                  if ( v15 )
                  {
                    if ( v15 == 1 )
                      v16 = L"Unset";
                    else
                      v16 = &sourceString;
                  }
                  else
                  {
                    v16 = L"Shell";
                  }
                }
                else
                {
                  v16 = L"HologramFrameworkIsolated";
                }
              }
              else
              {
                v16 = L"_HologramFrameworkMaterial";
              }
            }
            else
            {
              v16 = L"HologramFrameworkDefault";
            }
          }
          else
          {
            v16 = L"Exclusive";
          }
        }
        else
        {
          v16 = L"Slate";
        }
        v17 = -1LL;
        do
          ++v17;
        while ( v16[v17] );
        v28 = v16;
        v29 = 2 * v17 + 2;
        v31 = &a5;
        v33 = &a6;
        v20 = a7;
        v35 = &v20;
        v30 = 0;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 8LL;
        TlgWrite((TraceLoggingHProvider)v10, &unk_18010F742, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
