/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C0051CD0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C004E600 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053E24 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 */

_BOOL8 __fastcall HmgCheckDCForPrivateReferences(DC *this, int a2)
{
  struct OBJECT *v4; // rdx
  struct _ENTRY *EntryFromObject; // rax
  struct OBJECT *v6; // rdx
  struct _ENTRY *v7; // rax
  struct OBJECT *v8; // rdx
  struct _ENTRY *v9; // rax
  struct OBJECT *v10; // rdx
  struct _ENTRY *v11; // rax
  struct OBJECT *v12; // rdx
  struct OBJECT *v13; // rdx
  struct OBJECT *v14; // rdx
  struct OBJECT *v15; // rdx
  struct OBJECT *v16; // rdx
  struct OBJECT *v17; // rax
  struct OBJECT *v18; // rdx
  struct OBJECT *v19; // rdx
  ENTRYOBJ *v21; // rax
  ENTRYOBJ *v22; // rax
  ENTRYOBJ *v23; // rax
  ENTRYOBJ *v24; // rax
  ENTRYOBJ *v25; // rax
  ENTRYOBJ *v26; // rax
  ENTRYOBJ *v27; // rax
  ENTRYOBJ *v28; // rax

  v4 = (struct OBJECT *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v4);
    if ( EntryFromObject )
    {
      if ( *((_BYTE *)EntryFromObject + 14) && ((a2 & 0xFFFFFFFD ^ *((_DWORD *)EntryFromObject + 2)) & 0xFFFFFFFE) == 0 )
        return 1LL;
    }
  }
  v6 = (struct OBJECT *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    v7 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v6);
    if ( v7 )
    {
      if ( *((_BYTE *)v7 + 14) && ((a2 & 0xFFFFFFFD ^ *((_DWORD *)v7 + 2)) & 0xFFFFFFFE) == 0 )
        return 1LL;
    }
  }
  v8 = (struct OBJECT *)*((_QWORD *)this + 20);
  if ( v8 )
  {
    v9 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v8);
    if ( v9 )
    {
      if ( *((_BYTE *)v9 + 14) && ((a2 & 0xFFFFFFFD ^ *((_DWORD *)v9 + 2)) & 0xFFFFFFFE) == 0 )
        return 1LL;
    }
  }
  v10 = (struct OBJECT *)*((_QWORD *)this + 12);
  if ( v10 )
  {
    v11 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v10);
    if ( v11 )
    {
      if ( *((_BYTE *)v11 + 14) && ((a2 & 0xFFFFFFFD ^ *((_DWORD *)v11 + 2)) & 0xFFFFFFFE) == 0 )
        return 1LL;
    }
  }
  v12 = (struct OBJECT *)*((_QWORD *)this + 191);
  if ( v12 )
  {
    v22 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v12);
    if ( v22 )
    {
      if ( ENTRYOBJ::bOwnedBy(v22, a2) )
        return 1LL;
    }
  }
  v13 = (struct OBJECT *)*((_QWORD *)this + 198);
  if ( v13 )
  {
    v23 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v13);
    if ( v23 )
    {
      if ( ENTRYOBJ::bOwnedBy(v23, a2) )
        return 1LL;
    }
  }
  v14 = (struct OBJECT *)*((_QWORD *)this + 28);
  if ( v14 )
  {
    v24 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v14);
    if ( v24 )
    {
      if ( ENTRYOBJ::bOwnedBy(v24, a2) )
        return 1LL;
    }
  }
  v15 = (struct OBJECT *)*((_QWORD *)this + 197);
  if ( v15 )
  {
    v25 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v15);
    if ( v25 )
    {
      if ( ENTRYOBJ::bOwnedBy(v25, a2) )
        return 1LL;
    }
  }
  v16 = (struct OBJECT *)*((_QWORD *)this + 29);
  if ( v16 )
  {
    v26 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v16);
    if ( v26 )
    {
      if ( ENTRYOBJ::bOwnedBy(v26, a2) )
        return 1LL;
    }
  }
  v17 = DC::prgnRao(this);
  if ( v17 )
  {
    v27 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v17);
    if ( v27 )
    {
      if ( ENTRYOBJ::bOwnedBy(v27, a2) )
        return 1LL;
    }
  }
  v18 = (struct OBJECT *)*((_QWORD *)this + 64);
  if ( v18 )
  {
    v21 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v18);
    if ( v21 )
    {
      if ( ENTRYOBJ::bOwnedBy(v21, a2) )
        return 1LL;
    }
  }
  v19 = (struct OBJECT *)*((_QWORD *)this + 316);
  return v19
      && (v28 = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v19)) != 0LL
      && ENTRYOBJ::bOwnedBy(v28, a2);
}
