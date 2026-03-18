/*
 * XREFs of ?AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z @ 0x1C01E97F0
 * Callers:
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01E992C (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AssignPointerCaptureData(struct tagINPUTPOINTERNODE *a1, struct tagPOINTERMSGDATA *a2)
{
  int v2; // r8d
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx

  v2 = *((_DWORD *)a2 + 9);
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 4) != 0 )
      goto LABEL_9;
    v5 = 0LL;
    v6 = (_QWORD *)((char *)a1 + 112);
    if ( (_QWORD *)*v6 != v6 )
      v5 = (_QWORD *)*v6;
    if ( (v2 & 2) != 0 || !v5 || (*((_DWORD *)v5 + 9) & 1) != 0 || (v7 = v5[5]) == 0 )
    {
LABEL_9:
      v7 = Win32AllocPoolZInit(88LL, 1131443029LL);
      if ( !v7 )
        return;
      *(_WORD *)(v7 + 20) = *((_WORD *)a2 + 8);
      *(_DWORD *)(v7 + 24) = *((_DWORD *)a2 + 7);
      v8 = (__int64 *)((char *)a1 + 96);
      v9 = *((_QWORD *)a1 + 12);
      if ( *(struct tagINPUTPOINTERNODE **)(v9 + 8) != (struct tagINPUTPOINTERNODE *)((char *)a1 + 96) )
        __fastfail(3u);
      *(_QWORD *)v7 = v9;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(v9 + 8) = v7;
      *v8 = v7;
    }
    *((_QWORD *)a2 + 5) = v7;
    ++*(_DWORD *)(v7 + 16);
  }
}
