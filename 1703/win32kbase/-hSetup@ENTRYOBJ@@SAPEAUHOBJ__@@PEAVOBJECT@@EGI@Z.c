/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  GdiHandleManager *v5; // rbx
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // rdi
  GdiHandleManager *v17; // rbx
  unsigned int v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  struct GdiHandleEntryTable *v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 v22; // [rsp+68h] [rbp+10h]
  unsigned int v23; // [rsp+70h] [rbp+18h] BYREF

  v5 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, a4);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v5 + 2), v9, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  v13 = *((_DWORD *)Entry + 2);
  *((_BYTE *)Entry + 14) = a2;
  *((_BYTE *)Entry + 15) = 0;
  *((_QWORD *)Entry + 2) = 0LL;
  if ( (a3 & 8) != 0 )
  {
    v14 = v13 & 1;
  }
  else if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 8) ^ (*(_DWORD *)(v12 + 8) ^ v13) & 1;
  }
  else
  {
    v14 = v13 & 1 | (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v12 )
      *((_QWORD *)a1 + 2) = *(_QWORD *)v12;
    else
      *((_QWORD *)a1 + 2) = KeGetCurrentThread();
  }
  *((_WORD *)a1 + 6) = a3 & 1;
  LOBYTE(v22) = a2;
  *((_DWORD *)a1 + 2) = (a3 >> 1) & 1;
  *(_QWORD *)Entry = a4 | 0xFFFFFFFFFF000000uLL;
  *((_QWORD *)Entry + 2) = 0LL;
  *((_DWORD *)Entry + 2) = v14;
  HIBYTE(v22) = BYTE2(a4);
  v15 = v22;
  *((_WORD *)Entry + 6) = v22;
  v16 = (unsigned __int16)a4 | (unsigned __int64)(v15 << 16);
  *(_QWORD *)a1 = v16;
  _InterlockedOr(v20, 0);
  v17 = gpHandleManager;
  v21 = 0LL;
  v23 = 0;
  v18 = GdiHandleManager::DecodeIndex(gpHandleManager, a4);
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
         *((GdiHandleEntryDirectory **)v17 + 2),
         v18,
         &v21,
         &v23)
    && v23 < *((_DWORD *)v21 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v21 + 3) + 8 * ((unsigned __int64)v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8) = a1;
  }
  return (struct HOBJ__ *)v16;
}
