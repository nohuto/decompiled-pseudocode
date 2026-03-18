/*
 * XREFs of ESM_FindAndSetTargetState @ 0x1C003E0F0
 * Callers:
 *     ESM_RunStateMachine @ 0x1C003E574 (ESM_RunStateMachine.c)
 * Callees:
 *     ESM_LogUnhandledEvent @ 0x1C003E480 (ESM_LogUnhandledEvent.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C003E874 (WPP_RECORDER_SF_qLLL.c)
 */

char __fastcall ESM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // r13
  int v4; // r12d
  __int64 v6; // rdx
  unsigned int v8; // r15d
  char v9; // bp
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // esi
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+A8h] [rbp+20h]

  LODWORD(v3) = *(_DWORD *)(a1 + 880);
  v4 = *(_DWORD *)(a1 + 976);
  v6 = *(_QWORD *)(a1 + 968);
  *a3 = 0;
  v8 = v3;
  v19 = v6;
  v9 = 1;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = 1002;
    v12 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v8 + 852) - v4));
    if ( *(_DWORD *)(v12 + 32) != 1000 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      v6 = 0LL;
      while ( a2 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v6 = (unsigned int)v10;
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v6 + 36);
      if ( v11 != 1002 )
        break;
LABEL_8:
      v6 = v19;
    }
    if ( !v8 )
      break;
    --v8;
  }
  if ( v11 == 1000 )
    return 0;
  if ( v11 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2, v10, 1000LL);
    return 0;
  }
  if ( v8 != (_DWORD)v3 )
  {
    while ( (unsigned int)v3 > v8 )
    {
      v3 = (unsigned int)(v3 - 1);
      v14 = *(_DWORD *)(a1 + 4 * v3 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          v10,
          1000,
          v17,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          *(_DWORD *)(a1 + 4 * v3 + 852));
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v14;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v8 + 852) - v4)) + 16LL) & 0x20) != 0 )
    *a3 = 1;
  *(_DWORD *)(a1 + 4LL * v8 + 852) = v11;
  v15 = *(_DWORD *)(a1 + 976) == 2000;
  *(_DWORD *)(a1 + 880) = v8;
  if ( v15 )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v10,
      1000,
      v17,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v11);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v8;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return v9;
}
