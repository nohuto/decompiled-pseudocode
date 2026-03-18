/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01C5B20
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C01CF978 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
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
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = -1073741637;
  v3 = *(_BYTE *)(v1 + 3712);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 )
    goto LABEL_11;
  *(_BYTE *)(v1 + 3712) = v3 & 0xFB;
  if ( *(_DWORD *)(v4 + 136) < 0x3003u || !*(_QWORD *)(v4 + 736) )
    goto LABEL_11;
  dword_1C006FC2C = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C006FCB4,
         &dword_1C006FC10);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( dword_1C006FC10 )
    {
      if ( !*(_BYTE *)(v1 + 1139) )
        dword_1C006FCFC = 2;
    }
    else
    {
      v9 = WdLogNewEntry5_WdEvent(v7);
      *(_QWORD *)(v9 + 24) = v4;
      WdLogEvent5_WdEvent(v9);
      dword_1C006FCFC = 0;
      dword_1C006FC28 = -3;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = v2;
    WdLogEvent5_WdError(v8);
  }
  if ( (int)v2 < 0 )
  {
LABEL_11:
    memset(&dword_1C006FC10, 0, 0x20uLL);
    dword_1C006FC28 = -1;
    memset(&xmmword_1C006FC30, 0, 0x80uLL);
    if ( !*(_BYTE *)(v1 + 1139) )
      dword_1C006FCFC = 0;
  }
  result = (unsigned int)v2;
  dword_1C006FCB0 = 2;
  return result;
}
