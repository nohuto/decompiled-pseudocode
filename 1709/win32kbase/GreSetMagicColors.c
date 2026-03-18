/*
 * XREFs of GreSetMagicColors @ 0x1C00FB5EC
 * Callers:
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00FB880 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C003CB30 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C003CC10 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00416E0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0046DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00FB49C (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(struct HOBJ__ *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v21; // [rsp+38h] [rbp-51h] BYREF
  PERESOURCE v22; // [rsp+40h] [rbp-49h] BYREF
  HSEMAPHORE v23; // [rsp+48h] [rbp-41h] BYREF
  HSEMAPHORE v24; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v25; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v27[80]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v28; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v5 = v26[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( v26[0] )
  {
    if ( a3 - 8 > 1 && a3 - 246 > 1 )
    {
LABEL_38:
      XDCOBJ::vUnlockFast((XDCOBJ *)v26);
      return v6;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v18);
      }
      goto LABEL_38;
    }
    v10 = *(_QWORD *)(v5 + 48);
    v28 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v25, (struct PDEVOBJ *)&v28);
    v24 = *(HSEMAPHORE *)(v10 + 48);
    EngAcquireSemaphore(v24);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v27, (struct PDEVOBJ *)&v28);
    if ( (*(_DWORD *)(v10 + 2188) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 32) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
        SEMOBJ::vUnlock((PERESOURCE *)&v24);
        NEEDGRELOCK::vUnlock(&v25);
        goto LABEL_36;
      }
      v11 = *(_QWORD *)(v10 + 1816);
      v12 = *(_QWORD **)v11;
      v13 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v10 = v12[6];
        v28 = v10;
        if ( (*(_DWORD *)(v10 + 2188) & 0x100) != 0 )
          break;
        v12 = (_QWORD *)*v12;
        if ( !--v13 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v20 = *(_QWORD *)(v10 + 1824);
    v23 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v22 = ghsemPalette;
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    v21 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v21, *((_DWORD *)ppalDefault + 25), a2);
    v15 = v14;
    if ( v14 != -1 )
    {
      if ( v14 >= 0xA )
        v15 = v14 + 236;
      if ( v15 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v15 - 8 > 1 && v15 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v16 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v16 = 15780518;
        }
        else
        {
          v16 = 10789024;
          if ( a3 == 246 )
            v16 = 15793151;
        }
        v17 = bSetMagicColor((__int64)&v28, v20, a3, v16);
        goto LABEL_28;
      }
    }
    v17 = bSetMagicColor((__int64)&v28, v20, a3, a2);
    v6 = v17;
LABEL_28:
    v7 = v17;
LABEL_29:
    SEMOBJ::vUnlock(&v22);
    if ( v7 && (*(_DWORD *)(v10 + 32) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v10 + 1784) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v10 + 1784))(
          *(_QWORD *)(*(_QWORD *)(v10 + 16) + 1816LL),
          &v20,
          0LL,
          0LL,
          *(_DWORD *)(v20 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v23);
    goto LABEL_35;
  }
  return v6;
}
