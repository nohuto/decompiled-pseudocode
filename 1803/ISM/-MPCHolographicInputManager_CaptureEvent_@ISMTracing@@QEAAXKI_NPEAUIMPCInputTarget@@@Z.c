/*
 * XREFs of ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z @ 0x1800518A0
 * Callers:
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004FB54 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent_(
        ISMTracing *this,
        int a2,
        int a3,
        char a4,
        struct IMPCInputTarget *a5)
{
  struct IInputTarget *v5; // r14
  _DWORD *v7; // rcx
  __int64 v8; // rsi
  const wchar_t *v9; // rdi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const wchar_t *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int PIDOfTarget; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  int *v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  const wchar_t *v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+84h] [rbp-15h]
  char *v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]
  int *p_PIDOfTarget; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  const wchar_t *v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B4h] [rbp+1Bh]
  int v33; // [rsp+100h] [rbp+67h] BYREF
  char v34; // [rsp+110h] [rbp+77h] BYREF

  v34 = a4;
  v33 = a2;
  v5 = a5;
  v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v7 )
  {
    if ( *v7 )
    {
      v8 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v22 = 4LL;
        v21 = &v33;
        v9 = &sourceString;
        if ( a3 )
        {
          v10 = a3 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
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
                    if ( v14 == 1 )
                      v15 = L"Hand";
                    else
                      v15 = &sourceString;
                  }
                  else
                  {
                    v15 = L"SixDof";
                  }
                }
                else
                {
                  v15 = L"GamePad";
                }
              }
              else
              {
                v15 = L"Mouse";
              }
            }
            else
            {
              v15 = L"Controller";
            }
          }
          else
          {
            v15 = L"Gaze";
          }
        }
        else
        {
          v15 = L"UnknownKind";
        }
        v16 = -1LL;
        v17 = -1LL;
        do
          ++v17;
        while ( v15[v17] );
        v23 = v15;
        v24 = 2 * v17 + 2;
        v25 = 0;
        v26 = &v34;
        v27 = 1LL;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(v5);
        p_PIDOfTarget = &PIDOfTarget;
        v29 = 4LL;
        if ( v5 )
        {
          v18 = (*(__int64 (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 56LL))(v5);
          if ( v18 )
          {
            if ( v18 == 1 )
              v9 = L"Exclusive";
          }
          else
          {
            v9 = L"SharedWorld";
          }
        }
        do
          ++v16;
        while ( v9[v16] );
        v30 = v9;
        v31 = 2 * v16 + 2;
        v32 = 0;
        TlgWrite((TraceLoggingHProvider)v8, &unk_18010E2A2, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
