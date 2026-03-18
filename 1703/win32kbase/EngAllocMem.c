/*
 * XREFs of EngAllocMem @ 0x1C0076E30
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0076DBC (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C00FC6C0 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  struct _ERESOURCE *v9; // rdi
  _QWORD *v10; // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx

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
          v7 = Win32AllocPoolNonPaged(v5, ulTag);
        }
        else
        {
          if ( (int)IsWin32AllocPoolImplSupported() < 0 )
          {
            v8 = 0LL;
LABEL_8:
            if ( (v4 & 1) != 0 )
            {
              if ( !v8 )
                return v8;
              memset(v8, 0, v5);
            }
            if ( v8 )
            {
              *((_DWORD *)v8 + 4) = 0;
              v9 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
              if ( MultiUserEngAllocListLock )
              {
                PsEnterPriorityRegion(v6);
                ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
              }
              v10 = (_QWORD *)qword_1C018E690;
              if ( *(struct _LIST_ENTRY **)qword_1C018E690 != &MultiUserGreEngAllocList )
                __fastfail(3u);
              *v8 = &MultiUserGreEngAllocList;
              v8[1] = v10;
              *v10 = v8;
              v11 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
              qword_1C018E690 = (__int64)v8;
              if ( MultiUserEngAllocListLock )
              {
                if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                {
                  Template_pz(MultiUserEngAllocListLock, &LockRelease);
                  v11 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
                }
                if ( v11 )
                {
                  ExReleaseResourceAndLeaveCriticalRegion(v11);
                  PsLeavePriorityRegion(v12);
                }
              }
              v8 += 4;
            }
            return v8;
          }
          v7 = Win32AllocPoolImpl(33LL, v5, ulTag);
        }
        v8 = (_QWORD *)v7;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
