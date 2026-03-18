/*
 * XREFs of xxxImmProcessKey @ 0x1C00CE9BC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     ClientImmProcessKey @ 0x1C00CE848 (ClientImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C00CE968 (GetAppImeCompatFlags.c)
 *     CheckImeHotKey @ 0x1C00CEB64 (CheckImeHotKey.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, __int64 a2, int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r10d
  struct _LARGE_STRING *v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  unsigned __int8 v18; // cf
  int v19; // ecx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v13 = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v14 = *(_DWORD *)(v11 + 8);
    v15 = *(struct _LARGE_STRING **)(v11 + 24);
  }
  else
  {
    v14 = -1;
    v15 = 0LL;
  }
  if ( (unsigned int)(v14 - 256) > 0x1F )
  {
    if ( (*gpsi & 4) != 0 )
    {
      if ( v14 != -1 )
        goto LABEL_20;
      v16 = *(_QWORD *)(v9 + 80);
      if ( v16
        && *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(a2 + 264))
        && ((a5 & 0x80000000) == 0 || (*(_DWORD *)(v16 + 12) & 4) == 0) )
      {
        if ( (unsigned int)(v10 - 241) > 0xA || (v17 = 1779, v18 = _bittest(&v17, v10 - 241), v19 = 1, !v18) )
          v19 = 0;
        if ( ((unsigned int)(a3 - 260) > 1 || v10 == 18 || v10 == 121 || v19)
          && ((*(_DWORD *)(v16 + 12) & 8) != 0 || v19 || v10 != 18 && (a5 & 0x20000000) == 0) )
        {
LABEL_20:
          if ( v10 == 231 )
            v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 850LL) << 16);
          v20 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v14);
          if ( (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v21, v22, v23) & 0x800000) != 0 )
            v20 &= ~1u;
          return v20;
        }
      }
    }
    return 0LL;
  }
  if ( *(struct _LARGE_STRING **)(v9 + 40) != v15 )
  {
    LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
    PostMessage(a2, 80LL, v8, v15);
  }
  return (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v13, v12, (__int64)v15) & 0x800000) == 0;
}
