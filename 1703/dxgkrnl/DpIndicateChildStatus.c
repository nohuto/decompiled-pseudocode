/*
 * XREFs of DpIndicateChildStatus @ 0x1C003CB30
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0012744 (DpiFdoQueueConnectionChangePackage.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rdi
  int v3; // esi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  int v6; // r8d
  bool v7; // zf
  unsigned int v8; // edi
  __int64 v9; // rax
  int v11; // ecx
  _QWORD v12[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v3 = a1;
  if ( !a1 )
    goto LABEL_15;
  if ( !a2 )
    goto LABEL_15;
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
    goto LABEL_15;
  v5 = v12;
  memset(v12, 0, sizeof(v12));
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  a2 = (unsigned int *)*v2;
  v12[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[4]) = (_DWORD)a2;
  LODWORD(v12[3]) = 12;
  if ( *(_QWORD *)(v4 + 5064) )
    v5 = *(_QWORD **)(v4 + 5064);
  if ( (_DWORD)a2 == 3 )
  {
    if ( *(_BYTE *)(v4 + 1143) && *(_DWORD *)(v4 + 3064) == -1 )
    {
      if ( !*(_BYTE *)(v4 + 2556) && IsInternalVideoOutput(v2[3]) )
        goto LABEL_15;
      v7 = v2[3] == 15;
    }
    else
    {
      if ( !*(_QWORD *)(v4 + 3072) )
      {
        v8 = -1073741637;
        v9 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v9 + 24) = -1073741637LL;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v4 + 3064) != v2[1] || IsInternalVideoOutput(v2[3]) )
      {
LABEL_15:
        v8 = -1073741811;
        v9 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v9 + 24) = -1073741811LL;
LABEL_16:
        WdLogEvent5_WdError(v9);
        return v8;
      }
      v7 = (_DWORD)a1 == 16;
    }
    if ( v7 )
      goto LABEL_15;
  }
  else if ( (_DWORD)a2 == 1 && *(_DWORD *)(v4 + 3064) == v2[1] )
  {
    goto LABEL_15;
  }
  if ( (_DWORD)a2 == 3 )
    v11 = v2[3];
  else
    v11 = -2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    Template_pdqqq(v11, (unsigned int)&EventDxgkCbIndicateChildStatus, v6, v3, v2[1], (char)a2, *((_BYTE *)v2 + 8), v11);
  return (unsigned int)DpiFdoQueueConnectionChangePackage(v4, v2, v5, 0, 1, 0, 1, 0);
}
