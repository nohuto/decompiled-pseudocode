/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0048CA0
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E8A0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v7; // ebp
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  GdiHandleEntryTable *v11; // r9
  __int64 v12; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r15
  int v15; // ebx
  unsigned int v16; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct HOBJ__ *v18; // rsi
  GdiHandleManager *v19; // rbp
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rcx
  struct HOBJ__ *result; // rax
  signed __int32 v25[18]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v26; // [rsp+58h] [rbp+10h]

  LOBYTE(v26) = a2;
  v4 = a4;
  v7 = a4;
  if ( a4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a4,
                                  1)
           + 13) == HIWORD(a4) )
        v7 = (unsigned __int16)v4;
    }
    else
    {
      v7 = (unsigned __int16)a4;
    }
  }
  v8 = *((_QWORD *)gpHandleManager + 2);
  v9 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v7 >= v9 )
      v10 = ((v7 - v9) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(GdiHandleEntryTable **)(v8 + 8LL * v10 + 8);
    if ( v10 )
      v7 += ((1 - v10) << 16) - v9;
    v12 = 0LL;
    if ( v7 < *((_DWORD *)v11 + 5) || GdiHandleEntryTable::GetEntryObject(v11, v7) )
      v12 = *(_QWORD *)v11 + 24LL * v7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)(ThreadWin32Thread + 72);
  v15 = *(_DWORD *)(v12 + 8);
  *(_WORD *)(v12 + 14) = (unsigned __int8)v26;
  *(_QWORD *)(v12 + 16) = 0LL;
  if ( (a3 & 8) != 0 )
  {
    v16 = v15 & 1;
  }
  else if ( v14 )
  {
    v16 = *(_DWORD *)(v14 + 8) ^ ((unsigned __int8)*(_DWORD *)(v14 + 8) ^ (unsigned __int8)v15) & 1;
  }
  else
  {
    v16 = v15 & 1 | (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v14 )
      CurrentThread = *(struct _KTHREAD **)v14;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  *((_WORD *)a1 + 6) = a3 & 1;
  *((_DWORD *)a1 + 2) = (a3 >> 1) & 1;
  HIBYTE(v26) = BYTE2(v4);
  *(_WORD *)(v12 + 12) = v26;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_DWORD *)(v12 + 8) = v16;
  if ( (a3 & 0x40) != 0 )
    *(_WORD *)(v12 + 12) = v26 | 0x80;
  if ( (a3 & 0x80u) != 0 )
    *(_BYTE *)(v12 + 15) |= 1u;
  *(_QWORD *)v12 = v4 | 0xFFFFFFFFFF000000uLL;
  v18 = (struct HOBJ__ *)((unsigned __int16)v4 | (unsigned __int64)(*(unsigned __int16 *)(v12 + 12) << 16));
  *(_QWORD *)a1 = v18;
  _InterlockedOr(v25, 0);
  v19 = gpHandleManager;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v20 = *((_QWORD *)v19 + 2);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( v4 >= v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
    return v18;
  if ( v4 >= v21 )
    v22 = ((v4 - v21) >> 16) + 1;
  else
    v22 = 0;
  v23 = *(_QWORD *)(v20 + 8LL * v22 + 8);
  if ( v22 )
    v4 += ((1 - v22) << 16) - v21;
  result = v18;
  if ( v4 < *(_DWORD *)(v23 + 20) )
    *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) = a1;
  return result;
}
