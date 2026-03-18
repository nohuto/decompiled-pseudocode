/*
 * XREFs of ?GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0030D9C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall GreSetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _DC_ATTR *v2; // rsi
  unsigned int v3; // ebx
  GdiHandleManager *v4; // rcx
  __int64 v5; // r13
  int v6; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // r10
  unsigned int v11; // r9d
  __int64 v12; // r11
  __int64 v13; // rdx
  unsigned __int16 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r9
  struct DC *v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rcx
  struct _ENTRY *Entry; // rax
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = a2;
  *((_QWORD *)a1 + 10) = a2;
  v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)a1,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)*(_DWORD *)a1;
    }
  }
  v4 = gpHandleManager;
  v5 = *((_QWORD *)gpHandleManager + 2);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = *(_DWORD *)(v5 + 2056);
  if ( v3 >= v7 + ((v6 + 0xFFFF) << 16) )
  {
    v8 = 0LL;
    v12 = 0LL;
    v23 = 0LL;
  }
  else
  {
    if ( v3 >= v7 )
    {
      v9 = ((v3 - v7) >> 16) + 1;
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      v9 = 0;
    }
    v10 = *(_QWORD *)(v5 + 8LL * v9 + 8);
    if ( v9 )
      v11 = v3 + ((1 - v9) << 16) - v7;
    else
      v11 = v3;
    v12 = 0LL;
    v23 = 0LL;
    if ( v11 >= *(_DWORD *)(v10 + 20) )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8LL * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
    if ( v13 )
    {
      v12 = *(_QWORD *)v10 + 24LL * v11;
      v23 = v12;
    }
    LOWORD(v6) = *(_WORD *)(v5 + 2);
    v4 = gpHandleManager;
  }
  v14 = v6;
  v15 = *(_DWORD *)(v5 + 2056);
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)v4 > 0x10000u )
    {
      Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, (unsigned __int16)v3, 1);
      v14 = v6;
      v15 = v7;
      v12 = v23;
      if ( *((unsigned __int8 *)Entry + 13) != HIWORD(v3) )
        goto LABEL_15;
      v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
    v14 = v6;
  }
LABEL_15:
  if ( v3 >= v15 + ((v14 + 0xFFFF) << 16) )
    goto LABEL_40;
  if ( v3 >= v15 )
    v16 = ((v3 - v15) >> 16) + 1;
  else
    v16 = 0;
  v17 = *(_QWORD *)(v5 + 8LL * v16 + 8);
  if ( v16 )
    v3 += ((1 - v16) << 16) - v15;
  if ( v3 >= *(_DWORD *)(v17 + 20) )
LABEL_40:
    v18 = 0LL;
  else
    v18 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
  if ( v18 == a1 )
    v8 = v12;
  *(_QWORD *)(v8 + 16) = v2;
  v19 = (_OWORD *)((char *)a1 + 552);
  v20 = 3LL;
  do
  {
    *(_OWORD *)v2 = *v19;
    *((_OWORD *)v2 + 1) = v19[1];
    *((_OWORD *)v2 + 2) = v19[2];
    *((_OWORD *)v2 + 3) = v19[3];
    *((_OWORD *)v2 + 4) = v19[4];
    *((_OWORD *)v2 + 5) = v19[5];
    *((_OWORD *)v2 + 6) = v19[6];
    v2 = (struct _DC_ATTR *)((char *)v2 + 128);
    *((_OWORD *)v2 - 1) = v19[7];
    v19 += 8;
    --v20;
  }
  while ( v20 );
  *(_OWORD *)v2 = *v19;
  *((_OWORD *)v2 + 1) = v19[1];
}
