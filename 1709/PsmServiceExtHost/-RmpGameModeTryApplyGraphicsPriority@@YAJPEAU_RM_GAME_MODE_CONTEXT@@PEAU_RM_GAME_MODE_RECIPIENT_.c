/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  char v2; // bl
  const GUID *v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v11; // r10d
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  int v15; // [rsp+38h] [rbp-41h] BYREF
  int v16; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  int *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]
  int *v29; // [rsp+A0h] [rbp+27h]
  int v30; // [rsp+A8h] [rbp+2Fh]
  int v31; // [rsp+ACh] [rbp+33h]

  v2 = 0;
  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    LODWORD(v5) = -1073741637;
LABEL_6:
    v13 = (int)v5;
    goto LABEL_7;
  }
  v18 = 0LL;
  v17 = 0LL;
  v6 = *((_DWORD *)a2 + 28);
  LODWORD(v18) = 1;
  LODWORD(v17) = 16;
  HIDWORD(v18) = v6;
  v13 = D3DKMTSetYieldPercentage(&v17);
  LODWORD(v5) = v13;
  if ( v13 >= 0 )
  {
    v18 = 0LL;
    v2 = 1;
    v17 = 0LL;
    v18 = *(_QWORD *)((char *)a2 + 116);
    LODWORD(v17) = 16;
    v13 = D3DKMTSetMemoryBudgetTarget(&v17, v7, v8, (unsigned int)v13);
    LODWORD(v5) = v13;
    if ( v13 >= 0 )
    {
      v2 = 0;
      LODWORD(v5) = 0;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( (v2 & 1) != 0 )
  {
    v18 = 0LL;
    v17 = 0LL;
    HIDWORD(v18) = *((_DWORD *)a1 + 12);
    LODWORD(v18) = *((_DWORD *)a1 + 15);
    LODWORD(v17) = 16;
    D3DKMTSetYieldPercentage(&v17);
    LODWORD(v5) = v13;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v20 = &v13;
    v14 = *((_DWORD *)a2 + 28);
    v23 = &v14;
    v15 = *((_DWORD *)a2 + 29);
    v26 = &v15;
    v16 = *((_DWORD *)a2 + 30);
    v29 = &v16;
    v21 = v11;
    v24 = v11;
    v27 = v11;
    v30 = v11;
    TlgWrite(v9, &unk_180058370, v10, v5, 6u, &pData);
    LODWORD(v5) = v13;
  }
  return (unsigned int)v5;
}
