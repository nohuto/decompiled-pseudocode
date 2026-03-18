/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801D6BEC
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1801D6A60 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801D6FDC (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  bool v6; // r13
  bool v7; // r12
  bool v8; // si
  bool v9; // di
  int v10; // r9d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // edi
  const struct _TlgProvider_t *v17; // rcx
  int v18; // r10d
  _DWORD *v19; // rax
  bool v21; // [rsp+30h] [rbp-99h]
  int v22; // [rsp+34h] [rbp-95h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-8Dh] BYREF
  unsigned int v25; // [rsp+40h] [rbp-89h] BYREF
  CInteractionContextWrapper *v26; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v27[8]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CInteractionContextWrapper **v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ch] [rbp-2Dh]
  unsigned int *v32; // [rsp+A0h] [rbp-29h]
  int v33; // [rsp+A8h] [rbp-21h]
  int v34; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v35; // [rsp+B0h] [rbp-19h]
  int v36; // [rsp+B8h] [rbp-11h]
  int v37; // [rsp+BCh] [rbp-Dh]
  unsigned int *v38; // [rsp+C0h] [rbp-9h]
  int v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+CCh] [rbp+3h]
  int *v41; // [rsp+D0h] [rbp+7h]
  int v42; // [rsp+D8h] [rbp+Fh]
  int v43; // [rsp+DCh] [rbp+13h]

  v6 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x40) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x40) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v7 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x80) != 0;
  v21 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0
     || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 3) != 0
     || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 3) != 0
     || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v8 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v9 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  v10 = ResetInteractionContext(a2);
  if ( v10 >= 0 )
  {
    v10 = SetPropertyInteractionContext(a2, 1LL);
    if ( v10 >= 0 )
    {
      v10 = SetPropertyInteractionContext(a2, 3LL);
      if ( v10 >= 0 )
      {
        v22 = SetPropertyInteractionContext(a2, 2LL);
        v10 = v22;
        if ( v22 >= 0 )
        {
          v11 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v11 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v11 |= 0x200u;
          v12 = v11 | 2;
          if ( !v21 )
            v12 = v11;
          v13 = v12 | 4;
          if ( !v8 )
            v13 = v12;
          v14 = v13 | 0x10;
          if ( !v9 )
            v14 = v13;
          v15 = v14 | 0x10000000;
          if ( *(_DWORD *)a3 != 3 )
            v15 = v14;
          v16 = v15 | 0x40000000;
          if ( (*((_BYTE *)a3 + 16) & 1) == 0 )
            v16 = v15;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v16 = v16 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v16 = v16 & 0x7FFFFCFF | 0x80000200;
          }
          v27[0] = 1;
          v27[1] = v16;
          v27[2] = 2;
          v27[4] = 4;
          v27[3] = v6 ? 0x80000001 : 0;
          v27[5] = v7 ? 0x80000001 : 0;
          v22 = SetInteractionConfigurationInteractionContext(a2, 3LL, v27, (unsigned int)v22);
          v10 = v22;
          if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
          {
            v31 = 0;
            v34 = 0;
            v37 = 0;
            v40 = 0;
            v43 = 0;
            v29 = &v26;
            v32 = &v23;
            v35 = &v24;
            v38 = &v25;
            v41 = &v22;
            v26 = this;
            v30 = 8;
            v23 = v16;
            v33 = v18;
            v24 = v6 ? 0x80000001 : 0;
            v36 = v18;
            v25 = v7 ? 0x80000001 : 0;
            v39 = v18;
            v42 = v18;
            TlgWrite(v17, &unk_1802AAA94, 0LL, 0LL, 7u, &pData);
            v10 = v22;
          }
          if ( v10 >= 0 )
          {
            v10 = RegisterOutputCallbackInteractionContext(
                    a2,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v10 >= 0 )
            {
              if ( (v19 = (_DWORD *)((char *)this + 32), !v6) && *v19 == 2 || !v7 && *v19 == 4 )
              {
                *v19 = 0;
                *((_DWORD *)this + 9) = 0;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
