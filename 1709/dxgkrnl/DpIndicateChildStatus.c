/*
 * XREFs of DpIndicateChildStatus @ 0x1C0011220
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C00138A0 (DpiFdoQueueConnectionChangePackage.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, int *a2)
{
  int v3; // esi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // edi
  bool v11; // zf
  __int64 v12; // rax
  _QWORD v13[10]; // [rsp+40h] [rbp-68h] BYREF

  v3 = a1;
  if ( !a1 )
    goto LABEL_24;
  if ( !a2 )
    goto LABEL_24;
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
    goto LABEL_24;
  v5 = v13;
  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v7 = *a2;
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[4]) = v7;
  LODWORD(v13[3]) = 12;
  LOBYTE(v13[6]) = -1;
  if ( *(_QWORD *)(v4 + 5200) )
    v5 = *(_QWORD **)(v4 + 5200);
  if ( v7 != 3 )
  {
    if ( v7 != 1 || *(_DWORD *)(v4 + 3088) != a2[1] )
      goto LABEL_10;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(v4 + 1143) && *(_DWORD *)(v4 + 3088) == -1 )
  {
    if ( !*(_BYTE *)(v4 + 2556) && IsInternalVideoOutput(a2[3]) )
      goto LABEL_24;
    v11 = a2[3] == 15;
  }
  else
  {
    if ( !*(_QWORD *)(v4 + 3096) )
    {
      v9 = -1073741637;
      v12 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v12 + 24) = -1073741637LL;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(v4 + 3088) != a2[1] || IsInternalVideoOutput(a2[3]) )
    {
LABEL_24:
      v9 = -1073741811;
      v12 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v12 + 24) = -1073741811LL;
LABEL_25:
      WdLogEvent5_WdError(v12);
      return v9;
    }
    v11 = (_DWORD)a1 == 16;
  }
  if ( v11 )
    goto LABEL_24;
LABEL_10:
  if ( bTracingEnabled )
  {
    if ( v7 == 3 )
      v8 = a2[3];
    else
      v8 = -2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      McTemplateK0pqqqq(v8, (unsigned int)&EventDxgkCbIndicateChildStatus, v6, v3, a2[1], v7, *((_BYTE *)a2 + 8), v8);
  }
  return (unsigned int)DpiFdoQueueConnectionChangePackage(v4, (_DWORD)a2, (_DWORD)v5, 0, 1, 0, 1, 0);
}
