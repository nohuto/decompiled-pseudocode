/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C00111D8
 * Callers:
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 * Callees:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0010534 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C001665C (WPP_RECORDER_SF_ddql.c)
 *     TR_Disable_Internal @ 0x1C0020398 (TR_Disable_Internal.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 a1, int a2, int a3)
{
  char v3; // di
  __int64 v5; // rdx
  bool v6; // si
  __int64 v7; // rdi
  unsigned int i; // ebp
  __int64 v9; // rdx

  v3 = a2;
  WPP_RECORDER_SF_ddql(*(_QWORD *)(*(_QWORD *)a1 + 72LL), a2, a3, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL));
  v6 = !*(_BYTE *)(a1 + 36) && !*(_BYTE *)(a1 + 1336) || v3;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v7 = *(_QWORD *)(a1 + 136);
    if ( v7 )
    {
      for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
      {
        LOBYTE(v5) = v6;
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48), v5);
      }
    }
  }
  else
  {
    v7 = 0LL;
    LOBYTE(v5) = v6;
    TR_Disable_Internal(*(_QWORD *)(a1 + 88), v5);
  }
  if ( v6 )
  {
    if ( v7 )
    {
      XilEndpoint_FreeStreamContextArray((_QWORD *)v7);
      if ( v7 == *(_QWORD *)(a1 + 128) )
      {
        ExFreePoolWithTag((PVOID)v7, 0x49434858u);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v9);
    }
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
