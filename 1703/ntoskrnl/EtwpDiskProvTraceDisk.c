/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x140253D84
 * Callers:
 *     EtwpTraceIo @ 0x1400247C0 (EtwpTraceIo.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall EtwpDiskProvTraceDisk(unsigned __int16 a1, __int64 a2, LONG *a3, GUID *a4)
{
  _UNKNOWN **v4; // rax
  ULONGLONG v5; // rbx
  int v9; // ecx
  void *v10; // rdi
  _WORD *v11; // rbp
  unsigned __int8 v12; // r10
  _QWORD *v13; // r11
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  unsigned __int64 v17; // [rsp+90h] [rbp-28h] BYREF
  __int64 v18; // [rsp+98h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = EtwpDiskProvRegHandle;
  v18 = 0LL;
  v17 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    v9 = a1 - 266;
    if ( v9 )
    {
      if ( v9 == 4 )
        v10 = &KDskEvt_Flush;
      else
        v10 = &KDskEvt_Write;
    }
    else
    {
      v10 = &KDskEvt_Read;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v4 = *(_UNKNOWN ***)(v5 + 104);
    v11 = (_WORD *)v4 + 14;
    if ( !v4 )
      v11 = 0LL;
    if ( *(_BYTE *)(v5 + 100) )
    {
      LOBYTE(v4) = EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 32) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v4 )
        LOBYTE(v4) = EtwpEventWriteFull(
                       v13,
                       v12,
                       0,
                       0,
                       (__int16 *)v10,
                       0,
                       0,
                       a4,
                       0LL,
                       1u,
                       a2,
                       a3,
                       &v18,
                       0LL,
                       *(_BYTE *)(v5 + 102),
                       v11,
                       &v17);
    }
    if ( *(_BYTE *)(v5 + 101) )
    {
      LOBYTE(v4) = EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v4 )
        LOBYTE(v4) = EtwpEventWriteFull(
                       *(_QWORD **)(v5 + 32),
                       v15,
                       0,
                       0,
                       (__int16 *)v10,
                       0,
                       0,
                       a4,
                       0LL,
                       1u,
                       a2,
                       a3,
                       &v18,
                       v14,
                       *(_BYTE *)(v5 + 102),
                       v11,
                       &v17);
    }
  }
  return (char)v4;
}
