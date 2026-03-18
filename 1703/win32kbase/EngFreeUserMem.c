/*
 * XREFs of EngFreeUserMem @ 0x1C007DCC0
 * Callers:
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00386C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD Buffer[4]; // [rsp+20h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+18h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      Buffer[0] = BaseAddress;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      v3 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      if ( v3 )
      {
        v4 = (void *)v3[2];
        RegionSize = v3[1];
        MmUnsecureVirtualMemory(v4);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
    }
  }
}
