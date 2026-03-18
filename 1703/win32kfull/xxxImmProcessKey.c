/*
 * XREFs of xxxImmProcessKey @ 0x1C00CA748
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ClientImmProcessKey @ 0x1C00CA5EC (ClientImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C00CA6F4 (GetAppImeCompatFlags.c)
 *     CheckImeHotKey @ 0x1C00CA8EC (CheckImeHotKey.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, __int64 a2, int a3, unsigned __int16 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // r10d
  struct _LARGE_STRING *v13; // r9
  __int64 v14; // r8
  int v15; // ecx
  unsigned __int8 v16; // cf
  int v17; // ecx
  unsigned int v18; // ebx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 392LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    v13 = *(struct _LARGE_STRING **)(v11 + 24);
  }
  else
  {
    v12 = -1;
    v13 = 0LL;
  }
  if ( (unsigned int)(v12 - 256) > 0x1F )
  {
    if ( (*gpsi & 4) != 0 )
    {
      if ( v12 != -1 )
        goto LABEL_20;
      v14 = *(_QWORD *)(v9 + 80);
      if ( v14
        && *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)(a2 + 264))
        && ((a5 & 0x80000000) == 0 || (*(_DWORD *)(v14 + 12) & 4) == 0) )
      {
        if ( (unsigned int)(v10 - 241) > 0xA || (v15 = 1779, v16 = _bittest(&v15, v10 - 241), v17 = 1, !v16) )
          v17 = 0;
        if ( ((unsigned int)(a3 - 260) > 1 || v10 == 18 || v10 == 121 || v17)
          && ((*(_DWORD *)(v14 + 12) & 8) != 0 || v17 || v10 != 18 && (a5 & 0x20000000) == 0) )
        {
LABEL_20:
          if ( (_BYTE)v10 == 0xE7 )
            v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 762LL) << 16);
          v18 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v12);
          if ( (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16)) & 0x800000) != 0 )
            v18 &= ~1u;
          return v18;
        }
      }
    }
    return 0LL;
  }
  if ( *(struct _LARGE_STRING **)(v9 + 40) != v13 )
  {
    LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
    PostMessage(a2, 80LL, v8, v13);
  }
  return (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16)) & 0x800000) == 0;
}
