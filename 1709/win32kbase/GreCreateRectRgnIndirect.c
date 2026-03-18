/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0054BB0
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     CreateEmptyRgn @ 0x1C0056A60 (CreateEmptyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0056A80 (CreateEmptyRgnPublic.c)
 *     UserValidateCopyRgn @ 0x1C0084DA0 (UserValidateCopyRgn.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0048CA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C004E190 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFC28 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned int v3; // ebp
  struct HOBJ__ *v4; // rdi
  int v5; // r14d
  __int64 v6; // rbx
  char *v7; // rbx
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  unsigned __int64 v12; // rbp
  __int64 ThreadWin32Thread; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  struct _ERESOURCE *v17; // rsi
  GdiHandleManager *v18; // rcx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  struct HOBJ__ *v22; // rax
  char *v23; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+38h] [rbp-20h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 216;
  v4 = 0LL;
  v24 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v3 = 376;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C018FB40 >= v3 )
  {
    v6 = qword_1C018FBD0;
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v7 = (char *)Win32AllocateFromPagedLookasideListImpl(v6);
      if ( v7 )
      {
        *(_QWORD *)v7 = 0LL;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_QWORD *)v7 + 2) = 0LL;
        if ( v5 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v7[v3 - 160], 0LL);
        *((_WORD *)v7 + 7) = 0x8000;
LABEL_14:
        *((_QWORD *)v7 + 3) = 216LL;
        *((_DWORD *)v7 + 20) = 0;
        *((_QWORD *)v7 + 4) = 0LL;
        *((_QWORD *)v7 + 7) = v7 + 48;
        *((_QWORD *)v7 + 6) = v7 + 48;
        left = a1->left;
        right = a1->right;
        v23 = v7;
        if ( left > right )
        {
          a1->left = right;
          a1->right = left;
        }
        top = a1->top;
        bottom = a1->bottom;
        if ( top > bottom )
        {
          a1->top = bottom;
          a1->bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)&v23, a1);
        v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          v15 = *(_QWORD *)(ThreadWin32Thread + 72);
          if ( v15 )
            LODWORD(v12) = *(_DWORD *)(v15 + 8);
        }
        v17 = ghsemHmgr;
        if ( ghsemHmgr )
        {
          PsEnterPriorityRegion(v15);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v17);
        }
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz(v15, v14, v16, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
        if ( (unsigned int)HmgIncProcessHandleCount((unsigned int)v12, v14, v16) )
        {
          v25 = 0;
          if ( GdiHandleManager::AcquireEntryIndex(v18, &v25) )
          {
            v22 = ENTRYOBJ::hSetup((struct OBJECT *)v7, 4, 1u, v25);
            v4 = v22;
            if ( gbGdiHmgrStacks && gpentHmgrStacks )
              RECSTACKBACKTRACE((unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000);
          }
          else
          {
            HmgDecProcessHandleCount(v12, v20, v21);
          }
        }
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz((_DWORD)v18, (unsigned int)&LockRelease, v19, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion();
        }
        if ( v4 )
          _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
        else
          REGION::vDeleteREGION((REGION *)v7);
        return v4;
      }
    }
  }
  v7 = (char *)PALLOCMEM2(v3, 875587655LL, 0);
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v7[v3 - 160], 0LL);
    goto LABEL_14;
  }
  EngSetLastError(8u);
  EngSetLastError(8u);
  return v4;
}
