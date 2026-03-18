/*
 * XREFs of DpIndicateChildStatus @ 0x1C0038A90
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C003B6D8 (DpiFdoQueueConnectionChangePackage.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, int *a2)
{
  int v3; // esi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  int v6; // r8d
  int v7; // edx
  bool v8; // zf
  unsigned int v9; // edi
  __int64 v10; // rax
  int v12; // ecx
  _QWORD v13[10]; // [rsp+40h] [rbp-68h] BYREF

  v3 = a1;
  if ( !a1 )
    goto LABEL_15;
  if ( !a2 )
    goto LABEL_15;
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
    goto LABEL_15;
  v5 = v13;
  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v7 = *a2;
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[4]) = v7;
  LODWORD(v13[3]) = 12;
  LOBYTE(v13[6]) = -1;
  if ( *(_QWORD *)(v4 + 5264) )
    v5 = *(_QWORD **)(v4 + 5264);
  if ( v7 == 3 )
  {
    if ( *(_BYTE *)(v4 + 1143) && *(_DWORD *)(v4 + 3088) == -1 )
    {
      if ( !*(_BYTE *)(v4 + 2556) && IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[3]) )
        goto LABEL_15;
      v8 = a2[3] == 15;
    }
    else
    {
      if ( !*(_QWORD *)(v4 + 3096) )
      {
        v9 = -1073741637;
        v10 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v10 + 24) = -1073741637LL;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v4 + 3088) != a2[1] || IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[3]) )
      {
LABEL_15:
        v9 = -1073741811;
        v10 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v10 + 24) = -1073741811LL;
LABEL_16:
        WdLogEvent5_WdError(v10);
        return v9;
      }
      v8 = (_DWORD)a1 == 16;
    }
    if ( v8 )
      goto LABEL_15;
  }
  else if ( v7 == 1 && *(_DWORD *)(v4 + 3088) == a2[1] )
  {
    goto LABEL_15;
  }
  if ( bTracingEnabled )
  {
    if ( v7 == 3 )
      v12 = a2[3];
    else
      v12 = -2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      McTemplateK0pqqqq(v12, (unsigned int)&EventDxgkCbIndicateChildStatus, v6, v3, a2[1], v7, *((_BYTE *)a2 + 8), v12);
  }
  return (unsigned int)DpiFdoQueueConnectionChangePackage(v4, (_DWORD)a2, (_DWORD)v5, 0, 1, 0, 1, 0);
}
