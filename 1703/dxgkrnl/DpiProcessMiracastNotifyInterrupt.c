/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x1C003FD54
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C00019A0 (DxgNotifyInterruptCB.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C003E168 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     Template_xqqqqqqqq @ 0x1C004175C (Template_xqqqqqqqq.c)
 */

void __fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // rax
  struct MIRACAST_CHUNK *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct MIRACAST_CHUNK *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  struct MIRACAST_CHUNK **v15; // rcx
  __int64 v16; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_xqqqqqqqq(
        (*(_QWORD *)(a2 + 24) >> 40) & 0xFFFFFF,
        a2,
        a3,
        *(_QWORD *)(v3 + 3080),
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24),
        (unsigned __int16)WORD2(*(_QWORD *)(a2 + 24)) >> 8,
        *(_DWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 48),
        *(_DWORD *)(a2 + 52));
    if ( *(_QWORD *)(v3 + 3072) && !*(_BYTE *)(v3 + 3089) )
    {
      if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(v3 + 3064) && *(_DWORD *)(a2 + 48) <= *(_DWORD *)(v3 + 3056) )
      {
        v7 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v3 + 3096));
        v12 = v7;
        if ( v7 )
        {
          *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 16);
          *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 32);
          *((_DWORD *)v7 + 10) = *(_DWORD *)(a2 + 48);
          memmove((char *)v7 + 44, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 48));
          v14 = *(_QWORD *)(v3 + 3104);
          v15 = *(struct MIRACAST_CHUNK ***)(v14 + 8);
          if ( *v15 != (struct MIRACAST_CHUNK *)v14 )
            __fastfail(3u);
          *(_QWORD *)v12 = v14;
          *((_QWORD *)v12 + 1) = v15;
          *v15 = v12;
          *(_QWORD *)(v14 + 8) = v12;
          ++*(_DWORD *)(v14 + 16);
        }
        else
        {
          v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
          *(_QWORD *)(v13 + 24) = v3;
          WdLogEvent5_WdWarning(v13);
          *(_BYTE *)(v3 + 3088) = 1;
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741811;
        v6 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v6 + 24) = v3;
        *(_QWORD *)(v6 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v6);
        *(_BYTE *)(v3 + 3089) = 1;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    v16 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v16 + 24) = v3;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
  }
  *(_DWORD *)(a2 + 52) = v4;
}
