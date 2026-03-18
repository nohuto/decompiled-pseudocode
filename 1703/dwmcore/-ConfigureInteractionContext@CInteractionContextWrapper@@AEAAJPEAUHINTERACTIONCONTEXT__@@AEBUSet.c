/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x180132548
 * Callers:
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800B3AB8 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180190150 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  bool v6; // r13
  bool v7; // r12
  bool v8; // r15
  bool v9; // bl
  const GUID *v10; // r9
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ebx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  int v18; // r10d
  bool v20; // [rsp+30h] [rbp-A9h]
  int v21; // [rsp+34h] [rbp-A5h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-9Dh] BYREF
  unsigned int v24; // [rsp+40h] [rbp-99h] BYREF
  CInteractionContextWrapper *v25; // [rsp+48h] [rbp-91h] BYREF
  _DWORD v26[8]; // [rsp+50h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-69h] BYREF
  CInteractionContextWrapper **v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+98h] [rbp-41h]
  int v30; // [rsp+9Ch] [rbp-3Dh]
  unsigned int *v31; // [rsp+A0h] [rbp-39h]
  int v32; // [rsp+A8h] [rbp-31h]
  int v33; // [rsp+ACh] [rbp-2Dh]
  unsigned int *v34; // [rsp+B0h] [rbp-29h]
  int v35; // [rsp+B8h] [rbp-21h]
  int v36; // [rsp+BCh] [rbp-1Dh]
  unsigned int *v37; // [rsp+C0h] [rbp-19h]
  int v38; // [rsp+C8h] [rbp-11h]
  int v39; // [rsp+CCh] [rbp-Dh]
  int *v40; // [rsp+D0h] [rbp-9h]
  int v41; // [rsp+D8h] [rbp-1h]
  int v42; // [rsp+DCh] [rbp+3h]

  v6 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0x40) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v7 = *(_DWORD *)a3 == 1 && *((char *)a3 + 4) < 0 || *(_DWORD *)a3 == 2 && *((char *)a3 + 4) < 0;
  v20 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 3) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v8 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0xC) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v9 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0x30) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  LODWORD(v10) = ResetInteractionContext(a2);
  if ( (int)v10 >= 0 )
  {
    LODWORD(v10) = SetPropertyInteractionContext(a2, 1LL);
    if ( (int)v10 >= 0 )
    {
      LODWORD(v10) = SetPropertyInteractionContext(a2, 3LL);
      if ( (int)v10 >= 0 )
      {
        v21 = SetPropertyInteractionContext(a2, 2LL);
        LODWORD(v10) = v21;
        if ( v21 >= 0 )
        {
          v11 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v11 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v11 |= 0x200u;
          v12 = v11 | 2;
          if ( !v20 )
            v12 = v11;
          v13 = v12 | 4;
          if ( !v8 )
            v13 = v12;
          v14 = v13 | 0x10;
          if ( !v9 )
            v14 = v13;
          v15 = v14 | 0x40000000;
          if ( (*((_BYTE *)a3 + 16) & 1) == 0 )
            v15 = v14;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v15 = v15 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v15 = v15 & 0x7FFFFCFF | 0x80000200;
          }
          v26[0] = 1;
          v26[1] = v15;
          v26[2] = 2;
          v26[4] = 4;
          v26[3] = v6 ? 0x80000001 : 0;
          v26[5] = v7 ? 0x80000001 : 0;
          v21 = SetInteractionConfigurationInteractionContext(a2, 3LL, v26, (unsigned int)v21);
          LODWORD(v10) = v21;
          if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
          {
            v30 = 0;
            v33 = 0;
            v36 = 0;
            v39 = 0;
            v42 = 0;
            v28 = &v25;
            v31 = &v22;
            v34 = &v23;
            v37 = &v24;
            v40 = &v21;
            v25 = this;
            v29 = 8;
            v22 = v15;
            v32 = v18;
            v23 = v6 ? 0x80000001 : 0;
            v35 = v18;
            v24 = v7 ? 0x80000001 : 0;
            v38 = v18;
            v41 = v18;
            TlgWrite(v16, &unk_1801F9128, v17, v10, 7u, &pData);
            LODWORD(v10) = v21;
          }
          if ( (int)v10 >= 0 )
          {
            LODWORD(v10) = RegisterOutputCallbackInteractionContext(
                             a2,
                             CInteractionContextWrapper::s_InteractionContextCallback,
                             this);
            if ( (int)v10 >= 0 && (!v6 && *((_DWORD *)this + 8) == 2 || !v7 && *((_DWORD *)this + 8) == 4) )
            {
              *((_DWORD *)this + 8) = 0;
              *((_DWORD *)this + 9) = 0;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
