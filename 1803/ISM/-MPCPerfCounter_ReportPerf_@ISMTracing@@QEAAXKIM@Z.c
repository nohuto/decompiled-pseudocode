/*
 * XREFs of ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x180057F24
 * Callers:
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180057E70 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCPerfCounter_ReportPerf_(ISMTracing *this, int a2, int a3, float a4)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  const wchar_t *v12; // rax
  __int64 v13; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v15; // [rsp+58h] [rbp+17h]
  __int64 v16; // [rsp+60h] [rbp+1Fh]
  const wchar_t *v17; // [rsp+68h] [rbp+27h]
  int v18; // [rsp+70h] [rbp+2Fh]
  int v19; // [rsp+74h] [rbp+33h]
  float *v20; // [rsp+78h] [rbp+37h]
  __int64 v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+B0h] [rbp+6Fh] BYREF
  float v23; // [rsp+C0h] [rbp+7Fh] BYREF

  v23 = a4;
  v22 = a2;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v16 = 4LL;
        v15 = &v22;
        if ( a3 )
        {
          v7 = a3 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = v10 - 1;
                  if ( v11 )
                  {
                    if ( v11 == 1 )
                      v12 = L"Hand";
                    else
                      v12 = &sourceString;
                  }
                  else
                  {
                    v12 = L"SixDof";
                  }
                }
                else
                {
                  v12 = L"GamePad";
                }
              }
              else
              {
                v12 = L"Mouse";
              }
            }
            else
            {
              v12 = L"Controller";
            }
          }
          else
          {
            v12 = L"Gaze";
          }
        }
        else
        {
          v12 = L"UnknownKind";
        }
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] );
        v17 = v12;
        v18 = 2 * v13 + 2;
        v20 = &v23;
        v19 = 0;
        v21 = 4LL;
        TlgWrite((TraceLoggingHProvider)v6, &unk_18010E38E, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
