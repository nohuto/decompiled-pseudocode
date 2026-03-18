/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00EC4A8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  GdiHandleManager *v8; // rcx
  unsigned int i; // eax
  GdiHandleManager *v10; // rcx
  struct _ENTRY *v11; // rbx
  struct OBJECT *EntryObject; // rax
  char v13; // r8
  unsigned int v14; // edi
  struct _ENTRY *v15; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1;
  PsGetCurrentProcess(a1, a2, a3, a4);
  GreAcquireHmgrSemaphore(v6, v5, v7);
  for ( i = GdiHandleManager::GetNextEntryIndex(v8, 0, &v15); ; i = GdiHandleManager::GetNextEntryIndex(v10, v14, &v15) )
  {
    v14 = i;
    if ( !i )
      break;
    if ( v4 )
    {
      v11 = v15;
      if ( v4 != *((_BYTE *)v15 + 14) )
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
      LOBYTE(v10) = v13;
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
  GreReleaseHmgrSemaphore((__int64)v10);
}
