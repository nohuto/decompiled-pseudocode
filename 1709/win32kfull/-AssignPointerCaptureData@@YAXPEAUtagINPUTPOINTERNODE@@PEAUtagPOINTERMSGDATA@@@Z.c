/*
 * XREFs of ?AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z @ 0x1C01F5790
 * Callers:
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01F58CC (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AssignPointerCaptureData(struct tagINPUTPOINTERNODE *a1, struct tagPOINTERMSGDATA *a2)
{
  int v2; // r8d
  char *v5; // rdx
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx

  v2 = *((_DWORD *)a2 + 9);
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 4) != 0 )
      goto LABEL_9;
    v5 = 0LL;
    v6 = (char *)a1 + 112;
    v7 = (char *)*((_QWORD *)a1 + 14);
    if ( v7 != v6 )
      v5 = v7;
    if ( (v2 & 2) != 0 || !v5 || (*((_DWORD *)v5 + 9) & 1) != 0 || (v8 = *((_QWORD *)v5 + 5)) == 0 )
    {
LABEL_9:
      v8 = Win32AllocPoolZInit(88LL, 1131443029LL);
      if ( !v8 )
        return;
      *(_WORD *)(v8 + 20) = *((_WORD *)a2 + 8);
      *(_DWORD *)(v8 + 24) = *((_DWORD *)a2 + 7);
      v9 = (__int64 *)((char *)a1 + 96);
      v10 = *((_QWORD *)a1 + 12);
      if ( *(struct tagINPUTPOINTERNODE **)(v10 + 8) != (struct tagINPUTPOINTERNODE *)((char *)a1 + 96) )
        __fastfail(3u);
      *(_QWORD *)v8 = v10;
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)(v10 + 8) = v8;
      *v9 = v8;
    }
    *((_QWORD *)a2 + 5) = v8;
    ++*(_DWORD *)(v8 + 16);
  }
}
