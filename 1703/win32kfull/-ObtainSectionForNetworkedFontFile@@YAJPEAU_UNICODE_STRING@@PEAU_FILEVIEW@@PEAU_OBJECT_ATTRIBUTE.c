/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0269E18
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0027EF0 (-bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00282F4 (ZwWin32CreateSection.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C0028344 (ZwWin32CreateSectionRetainHandle.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C026A0C0 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C026A5E0 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

__int64 __fastcall ObtainSectionForNetworkedFontFile(
        PCUNICODE_STRING SourceString,
        struct _FILEVIEW *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        bool a5)
{
  unsigned int v6; // r12d
  int SectionRetainHandle; // esi
  HANDLE *v9; // rax
  HANDLE *SectionHandle; // rdi
  unsigned int v11; // edi
  char *v12; // rbx
  HANDLE *inserted; // rax
  void **v14; // r15
  __int64 v15; // rdx
  int v16; // edx
  unsigned int v17; // ecx
  int v19; // [rsp+28h] [rbp-79h]
  int v20; // [rsp+28h] [rbp-79h]
  void *v21; // [rsp+38h] [rbp-69h]
  void *v22; // [rsp+38h] [rbp-69h]
  int v23; // [rsp+40h] [rbp-61h]
  PVOID Object; // [rsp+50h] [rbp-51h] BYREF
  __int64 v25; // [rsp+58h] [rbp-49h] BYREF
  PVOID v26; // [rsp+60h] [rbp-41h] BYREF
  int v27[2]; // [rsp+68h] [rbp-39h]
  _BYTE Buffer[24]; // [rsp+70h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-19h] BYREF

  *(_QWORD *)v27 = a4;
  v6 = -1073741823;
  Object = a3;
  SectionRetainHandle = -1073741823;
  v25 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v25);
  RtlInitUnicodeStringEx(&DestinationString, SourceString->Buffer);
  v9 = (HANDLE *)RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), Buffer);
  SectionHandle = v9;
  if ( v9 )
  {
    ++*((_DWORD *)v9 + 2);
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    GreEnterCriticalRegionAndAcquirePushLockShared(SectionHandle + 2);
    GreLeaveCriticalRegionAndReleasePushLockShared(SectionHandle + 2);
    if ( *SectionHandle )
    {
      SectionRetainHandle = ObReferenceObjectByHandle(*SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &v26, 0LL);
      *((_QWORD *)a2 + 4) = v26;
      if ( SectionRetainHandle >= 0 )
        goto LABEL_21;
    }
    bUnreferenceNetworkedFontFileNode(SectionHandle);
LABEL_20:
    if ( SectionRetainHandle < 0 )
    {
LABEL_23:
      v6 = SectionRetainHandle;
      goto LABEL_24;
    }
LABEL_21:
    v17 = *((_DWORD *)a2 + 10) & 0xFFFFFFFB | (4 * a5);
    *((_QWORD *)a2 + 7) = SectionHandle;
    *((_DWORD *)a2 + 10) = v17;
    if ( (v17 & 4) == 0 )
    {
      ZwClose(*((HANDLE *)a2 + 6));
      *((_QWORD *)a2 + 6) = 0LL;
    }
    goto LABEL_23;
  }
  v11 = 2 * SourceString->Length + 40;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, v11);
  v12 = (char *)v26;
  if ( v26 )
  {
    *((_DWORD *)v26 + 2) = 1;
    *((_QWORD *)v12 + 4) = v12 + 40;
    *((_WORD *)v12 + 13) = SourceString->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 24), SourceString);
    inserted = (HANDLE *)RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), v12, v11, 0LL);
    SectionHandle = inserted;
    if ( inserted )
    {
      inserted[4] = inserted + 5;
      GreInitializePushLock(inserted + 2);
      GreEnterCriticalRegionAndAcquirePushLockExclusive(SectionHandle + 2);
      SEMOBJ::vUnlock((SEMOBJ *)&v25);
      v14 = (void **)((char *)a2 + 32);
      SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                              (_QWORD *)a2 + 4,
                              v15,
                              (struct _OBJECT_ATTRIBUTES *)Object,
                              *(union _LARGE_INTEGER **)v27,
                              4u,
                              v19,
                              0LL,
                              v21,
                              v23,
                              SectionHandle);
      if ( SectionRetainHandle < 0 )
      {
        *v14 = 0LL;
        *SectionHandle = 0LL;
      }
      else
      {
        SectionRetainHandle = ZwWin32CreateSection(
                                (int)&Object,
                                v16,
                                (int)Object,
                                v27[0],
                                2u,
                                v20,
                                *((void **)a2 + 6),
                                v22);
        if ( SectionRetainHandle >= 0 )
        {
          if ( !bCopySection(*v14, Object, *((unsigned int *)a2 + 6)) )
            SectionRetainHandle = -1073741823;
          ObfDereferenceObject(Object);
        }
      }
      GreLeaveCriticalRegionAndReleasePushLockExclusive(SectionHandle + 2);
      if ( SectionRetainHandle < 0 )
      {
        if ( *v14 )
        {
          ObfDereferenceObject(*v14);
          *v14 = 0LL;
        }
        bUnreferenceNetworkedFontFileNode(SectionHandle);
      }
      Win32FreePool(v12);
      goto LABEL_20;
    }
    v6 = -1073741801;
    Win32FreePool(v12);
  }
LABEL_24:
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  return v6;
}
