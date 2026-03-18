/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00C3F64
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1)
{
  char v1; // si
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  GdiHandleManager *v5; // rcx
  unsigned int i; // eax
  __int64 v7; // rdx
  GdiHandleManager *v8; // rcx
  int v9; // r8d
  struct _ENTRY *v10; // rbx
  struct OBJECT *EntryObject; // rax
  char v12; // r8
  char v13; // al
  unsigned int v14; // edi
  struct _ENTRY *v15; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  PsGetCurrentProcess(a1);
  GreAcquireHmgrSemaphore(v3, v2, v4);
  for ( i = GdiHandleManager::GetNextEntryIndex(v5, 0, &v15); ; i = GdiHandleManager::GetNextEntryIndex(v8, v14, &v15) )
  {
    v14 = i;
    if ( !i )
      break;
    v10 = v15;
    if ( v1 )
    {
      if ( v1 != *((_BYTE *)v15 + 14) )
        continue;
    }
    else if ( (unsigned __int8)(*((_BYTE *)v15 + 14) - 1) > 0x1Du )
    {
      continue;
    }
    if ( ((*((_DWORD *)v10 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, v14);
      v12 = *((_BYTE *)v10 + 14);
      if ( (v12 == 5 || v12 == 8) && (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
      {
        if ( (unsigned int)HmgSetOwner(*(_QWORD *)EntryObject, -2147483630, v12) )
          _InterlockedIncrement(&gGarbageCollectionPendingCount);
      }
      else
      {
        *((_DWORD *)EntryObject + 2) = 0;
        *((_WORD *)EntryObject + 6) = 0;
        *((_QWORD *)EntryObject + 2) = 0LL;
        *((_DWORD *)v10 + 2) &= ~1u;
        *((_BYTE *)v10 + 15) &= ~1u;
        v13 = *((_BYTE *)v10 + 15);
        if ( (v13 & 0x20) != 0 )
        {
          *((_QWORD *)v10 + 2) = 0LL;
          v13 = *((_BYTE *)v10 + 15);
        }
        *((_BYTE *)v10 + 15) = v13 & 0xDF;
      }
    }
  }
  GreReleaseHmgrSemaphore((int)v8, v7, v9);
}
