/*
 * XREFs of EngAllocMem @ 0x1C00704A0
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0070438 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F1DE0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C00FCC20 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edi
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rax
  _QWORD *v9; // rbx
  struct _ERESOURCE *v10; // rdi
  _QWORD *v11; // rax

  v4 = fl;
  if ( cjMemSize )
  {
    if ( cjMemSize <= 0xFFFFFFDF )
    {
      v5 = cjMemSize + 32;
      if ( cjMemSize + 32 < 0x2710000 )
      {
        if ( (fl & 2) != 0 )
        {
          v8 = Win32AllocPoolNonPaged(v5, ulTag);
        }
        else
        {
          if ( (int)IsWin32AllocPoolImplSupported() < 0 )
          {
            v9 = 0LL;
LABEL_8:
            if ( (v4 & 1) != 0 )
            {
              if ( !v9 )
                return v9;
              memset(v9, 0, v5);
            }
            if ( v9 )
            {
              *((_DWORD *)v9 + 4) = 0;
              v10 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
              if ( MultiUserEngAllocListLock )
              {
                PsEnterPriorityRegion(v6);
                ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
              }
              v11 = (_QWORD *)qword_1C0193558;
              if ( *(struct _LIST_ENTRY **)qword_1C0193558 != &MultiUserGreEngAllocList )
                __fastfail(3u);
              *v9 = &MultiUserGreEngAllocList;
              v9[1] = v11;
              *v11 = v9;
              qword_1C0193558 = (__int64)v9;
              if ( MultiUserEngAllocListLock )
              {
                if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                  McTemplateK0pz(
                    (unsigned int)&MultiUserGreEngAllocList,
                    (unsigned int)&LockRelease,
                    v7,
                    (_DWORD)MultiUserEngAllocListLock,
                    (__int64)L"MultiUserEngAllocListLock");
                if ( MultiUserEngAllocListLock )
                {
                  ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
                  PsLeavePriorityRegion();
                }
              }
              v9 += 4;
            }
            return v9;
          }
          v8 = Win32AllocPoolImpl(33LL, v5, ulTag);
        }
        v9 = (_QWORD *)v8;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
