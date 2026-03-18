/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C00EFD50
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C004DC58 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C004DFDC (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // r13
  __int64 v12; // r15
  struct OBJECT *EntryObject; // rdi
  struct OBJECT *v14; // rax
  GdiHandleManager *v15; // rcx
  GdiHandleManager *v16; // rcx
  __int64 v17; // rcx
  struct OBJECT *v18; // rdi
  struct OBJECT *v19; // rax
  __int128 v20; // xmm2
  __int64 v21; // xmm3_8
  __int64 v22; // rcx
  __int16 v23; // r8
  __int16 v24; // dx
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+38h] [rbp-28h]
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  int v29; // [rsp+50h] [rbp-10h]

  v5 = 0;
  v28 = 0LL;
  v29 = 0;
  v9 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v28, v9, 0, 0, 0);
  if ( v29 )
  {
    v26 = 0LL;
    v27 = 0;
    v10 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, v10, 0, 0, 0);
    if ( v27 )
    {
      if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v28) == a2 )
      {
        v11 = v28;
        if ( *(_BYTE *)(v28 + 14) == a5 && (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v26) == a4 )
        {
          v12 = v26;
          if ( *(_BYTE *)(v26 + 14) == a5 )
          {
            EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, v9);
            v14 = GdiHandleManager::GetEntryObject(gpHandleManager, v10);
            GdiHandleManager::SetEntryObject(v15, v9, v14);
            GdiHandleManager::SetEntryObject(v16, v10, EntryObject);
            v17 = *(_QWORD *)(v11 + 16);
            *(_QWORD *)(v11 + 16) = *(_QWORD *)(v12 + 16);
            *(_QWORD *)(v12 + 16) = v17;
            v18 = GdiHandleManager::GetEntryObject(gpHandleManager, v9);
            v19 = GdiHandleManager::GetEntryObject(gpHandleManager, v10);
            v20 = *(_OWORD *)v18;
            v21 = *((_QWORD *)v18 + 2);
            *(_OWORD *)v18 = *(_OWORD *)v19;
            *((_QWORD *)v18 + 2) = *((_QWORD *)v19 + 2);
            *(_OWORD *)v19 = v20;
            *((_QWORD *)v19 + 2) = v21;
            if ( *(_BYTE *)(v11 + 14) == 5 && *(_BYTE *)(v12 + 14) == 5 )
            {
              v22 = *((_QWORD *)v18 + 77);
              *((_QWORD *)v18 + 77) = *((_QWORD *)v19 + 77);
              *((_QWORD *)v19 + 77) = v22;
            }
            v23 = *((_WORD *)v19 + 7);
            v24 = *((_WORD *)v18 + 7);
            *((_WORD *)v18 + 7) = v23 & 0x8000 | v24 & 0x4000;
            v5 = 1;
            *((_WORD *)v19 + 7) = v24 & 0x8000 | v23 & 0x4000;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v26);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
  return v5;
}
