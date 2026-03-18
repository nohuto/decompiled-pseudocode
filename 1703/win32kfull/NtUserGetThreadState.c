/*
 * XREFs of NtUserGetThreadState @ 0x1C00E1940
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C004CC40 (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 *v21; // rax
  HANDLE CurrentProcessId; // rax
  int v23; // edi
  int v24; // edi

  v2 = EnterSharedCrit(0LL, 1LL);
  v7 = 0LL;
  v8 = v2;
  if ( a1 > 8 )
  {
    v12 = a1 - 9;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v7 = *(int *)(v2 + 492);
        goto LABEL_7;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v4 = gpqForeground;
        LOBYTE(v7) = *(_QWORD *)(v2 + 384) == gpqForeground;
        goto LABEL_7;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v7 = *(unsigned int *)(*(_QWORD *)(v2 + 376) + 728LL);
        goto LABEL_7;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v7 = *(_QWORD *)(v2 + 712);
        goto LABEL_7;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
            v7 = ((unsigned __int64)*(unsigned int *)(v2 + 1096) >> 26) & 1;
          goto LABEL_7;
        }
      }
      else
      {
        CurrentProcessId = PsGetCurrentProcessId();
        v4 = gpidLogon;
        if ( CurrentProcessId != (HANDLE)gpidLogon && *(PVOID *)(v8 + 408) != grpdeskLogon )
          goto LABEL_7;
      }
      v7 = 1LL;
      goto LABEL_7;
    }
    v4 = *(_QWORD *)(v2 + 464);
    if ( v4 )
    {
      v3 = *(_QWORD *)(v4 + 32) ? 1LL : (*(_DWORD *)(v4 + 84) & 0x300) != 0 ? 4LL : 2LL;
      v7 = v3 | 8;
      if ( (*(_DWORD *)(v4 + 84) & 1) == 0 )
        v7 = v3;
    }
  }
  else
  {
    if ( a1 == 8 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 360LL);
      goto LABEL_7;
    }
    if ( !a1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 80LL);
      goto LABEL_5;
    }
    v10 = a1 - 1;
    if ( !v10 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 88LL);
      goto LABEL_5;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 72LL);
      goto LABEL_5;
    }
    v19 = v11 - 1;
    if ( !v19 )
    {
      v21 = *(__int64 **)(v2 + 696);
LABEL_23:
      if ( v21 )
        v7 = *v21;
      goto LABEL_7;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v21 = *(__int64 **)(v2 + 704);
      goto LABEL_23;
    }
    v23 = v20 - 1;
    if ( !v23 )
    {
      LOBYTE(v7) = (GetQueueStatus(7295) & 5) != 0;
      goto LABEL_7;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 328LL);
LABEL_5:
      if ( v4 )
        v7 = *(_QWORD *)v4;
      goto LABEL_7;
    }
    if ( v24 == 1 )
      v7 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 400) + 4LL);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
