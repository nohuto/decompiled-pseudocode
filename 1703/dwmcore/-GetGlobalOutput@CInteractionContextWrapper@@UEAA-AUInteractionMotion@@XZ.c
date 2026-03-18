/*
 * XREFs of ?GetGlobalOutput@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x180190530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x1801B24C0 (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetGlobalOutput(__int64 a1, __int64 a2)
{
  int v4; // r11d
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  const GUID *v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  const GUID *v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  const GUID *v18; // [rsp+98h] [rbp+2Fh]

  if ( *(_BYTE *)(a1 + 92) )
  {
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 320),
      (const struct InteractionOutput *)(a1 + 32),
      (struct InteractionOutput *)(a1 + 96));
    *(_BYTE *)(a1 + 92) = v4;
    if ( dword_18023D7F0 > (unsigned int)(v4 + 4) )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, (unsigned int)(v4 + 2)) )
      {
        v9 = a1;
        v11 = &v9;
        v13 = a1 + 104;
        v15 = a1 + 108;
        v17 = a1 + 112;
        v12 = 8LL;
        v14 = v7;
        v16 = v7;
        v18 = v7;
        TlgWrite(v5, &unk_1801F91E6, v6, v7, 6u, &pData);
      }
    }
  }
  result = a2;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 112);
  return result;
}
