/*
 * XREFs of GreSetMagicColors @ 0x1C00FB1FC
 * Callers:
 *     SetSysColor @ 0x1C0058E00 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00FB490 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0059E40 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C007BD40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00FB0AC (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *Reserved; // [rsp+38h] [rbp-51h] BYREF
  HSEMAPHORE v21; // [rsp+40h] [rbp-49h] BYREF
  HSEMAPHORE v22; // [rsp+48h] [rbp-41h] BYREF
  HSEMAPHORE v23; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v24; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v26[80]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v27; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v5 = v25[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v25[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_38;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v9 = *(_QWORD *)(v5 + 48);
    v27 = v9;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v24, (struct PDEVOBJ *)&v27);
    v23 = *(HSEMAPHORE *)(v9 + 48);
    EngAcquireSemaphore(v23);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v27);
    if ( (*(_DWORD *)(v9 + 2188) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
        SEMOBJ::vUnlock((PERESOURCE *)&v23);
        NEEDGRELOCK::vUnlock(&v24);
        goto LABEL_36;
      }
      v10 = *(_QWORD *)(v9 + 1816);
      v11 = *(_QWORD **)v10;
      v12 = *(_DWORD *)(v10 + 16);
      while ( 1 )
      {
        v9 = v11[6];
        v27 = v9;
        if ( (*(_DWORD *)(v9 + 2188) & 0x100) != 0 )
          break;
        v11 = (_QWORD *)*v11;
        if ( !--v12 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v19 = *(_QWORD *)(v9 + 1824);
    v22 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v21 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    Reserved = (struct PALETTE *)WPP_MAIN_CB.Reserved;
    v13 = XEPALOBJ::ulDispatchGFPEFunction(&Reserved, *((_DWORD *)WPP_MAIN_CB.Reserved + 25), a2);
    v14 = v13;
    if ( v13 != -1 )
    {
      if ( v13 >= 0xA )
        v14 = v13 + 236;
      if ( v14 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v14 - 8 > 1 && v14 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v15 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v15 = 15780518;
        }
        else
        {
          v15 = 10789024;
          if ( a3 == 246 )
            v15 = 15793151;
        }
        v16 = bSetMagicColor((__int64)&v27, v19, a3, v15);
        goto LABEL_28;
      }
    }
    v16 = bSetMagicColor((__int64)&v27, v19, a3, a2);
    v6 = v16;
LABEL_28:
    v7 = v16;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v21);
    if ( v7 && (*(_DWORD *)(v9 + 32) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v9 + 1784) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1784))(
          *(_QWORD *)(*(_QWORD *)(v9 + 16) + 1816LL),
          &v19,
          0LL,
          0LL,
          *(_DWORD *)(v19 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v22);
    goto LABEL_35;
  }
LABEL_36:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v17);
  }
LABEL_38:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v25);
  return v6;
}
