/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01DF6BC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C01E9C98 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = -1073741637;
  v3 = *(_BYTE *)(v1 + 3736);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 )
    goto LABEL_11;
  *(_BYTE *)(v1 + 3736) = v3 & 0xFB;
  if ( *(_DWORD *)(v4 + 136) < 0x3003u || !*(_QWORD *)(v4 + 736) )
    goto LABEL_11;
  dword_1C0060AAC = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C0060B34,
         &dword_1C0060A90);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( dword_1C0060A90 )
    {
      if ( !*(_BYTE *)(v1 + 1139) )
        dword_1C0060B7C = 2;
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdEvent(v11);
      dword_1C0060B7C = 0;
      dword_1C0060AA8 = -3;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = v2;
    WdLogEvent5_WdError(v10);
  }
  if ( (int)v2 < 0 )
  {
LABEL_11:
    memset(&dword_1C0060A90, 0, 0x20uLL);
    dword_1C0060AA8 = -1;
    memset(&xmmword_1C0060AB0, 0, 0x80uLL);
    if ( !*(_BYTE *)(v1 + 1139) )
      dword_1C0060B7C = 0;
  }
  result = (unsigned int)v2;
  dword_1C0060B30 = 2;
  return result;
}
