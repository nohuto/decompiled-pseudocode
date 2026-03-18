/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F0408
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C004E4E0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // si
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  GdiHandleManager *v6; // rcx
  unsigned int i; // eax
  __int64 v8; // rdx
  GdiHandleManager *v9; // rcx
  int v10; // r8d
  struct _ENTRY *v11; // rbx
  struct OBJECT *EntryObject; // rax
  char v13; // r8
  unsigned int v14; // edi
  struct _ENTRY *v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  PsGetCurrentProcess(a1, a2);
  GreAcquireHmgrSemaphore(v4, v3, v5);
  for ( i = GdiHandleManager::GetNextEntryIndex(v6, 0, &v15); ; i = GdiHandleManager::GetNextEntryIndex(v9, v14, &v15) )
  {
    v14 = i;
    if ( !i )
      break;
    if ( v2 )
    {
      v11 = v15;
      if ( v2 != *((_BYTE *)v15 + 14) )
        continue;
    }
    else
    {
      v11 = v15;
      if ( (unsigned __int8)(*((_BYTE *)v15 + 14) - 1) > 0x1Du )
        continue;
    }
    if ( ((*((_DWORD *)v11 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, v14);
      v13 = *((_BYTE *)v11 + 14);
      LOBYTE(v9) = v13;
      if ( (v13 == 5 || v13 == 8) && (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
      {
        if ( (unsigned int)HmgSetOwner(*(_QWORD *)EntryObject, -2147483630, v13) )
          _InterlockedIncrement(&gGarbageCollectionPendingCount);
      }
      else
      {
        *((_DWORD *)EntryObject + 2) = 0;
        *((_WORD *)EntryObject + 6) = 0;
        *((_QWORD *)EntryObject + 2) = 0LL;
        *((_DWORD *)v11 + 2) &= ~1u;
        *((_BYTE *)v11 + 15) &= ~1u;
        if ( (*((_BYTE *)v11 + 15) & 0x20) != 0 )
          *((_QWORD *)v11 + 2) = 0LL;
        *((_BYTE *)v11 + 15) &= ~0x20u;
      }
    }
  }
  GreReleaseHmgrSemaphore((int)v9, v8, v10);
}
