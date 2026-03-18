/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C0295F24
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0112954 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C028EB70 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  signed __int32 v15; // ecx
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-49h] BYREF
  __int64 v25; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v28[112]; // [rsp+60h] [rbp-19h] BYREF
  int v29; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v5 = v27[0];
  if ( v27[0] )
  {
    v31 = *(_QWORD *)(v27[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct PDEVOBJ *)&v31);
    v25 = *(_QWORD *)(v31 + 48);
    GreAcquireSemaphore(v25);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28, (struct PDEVOBJ *)&v31);
    v30 = *(_QWORD *)(v31 + 1824);
    if ( (*(_DWORD *)(v31 + 2188) & 0x100) == 0 )
    {
LABEL_36:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v28);
      SEMOBJ::vUnlock((SEMOBJ *)&v25);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
      goto LABEL_37;
    }
    v24 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v30;
    v7 = *(_DWORD *)(v30 + 24);
    if ( (v7 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v7 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v7 & 0x11000) != 0 )
      {
        v8 = *(_DWORD *)(v30 + 60) >> 1;
        if ( (unsigned int)v8 > 0xA )
          v8 = 10LL;
        if ( (_DWORD)v8 )
        {
          v9 = 0LL;
          v10 = (unsigned int)v8;
          do
          {
            v11 = *(_QWORD *)(v6 + 120);
            v29 = *(_DWORD *)(v9 + *((_QWORD *)ppalDefault + 15));
            HIBYTE(v29) = 48;
            *(_DWORD *)(v9 + v11) = v29;
            v9 += 4LL;
            v6 = v30;
            --v10;
          }
          while ( v10 );
        }
        LODWORD(v12) = *(_DWORD *)(v6 + 28);
        LODWORD(v13) = 20;
        if ( (_DWORD)v8 )
        {
          while ( 1 )
          {
            v13 = (unsigned int)(v13 - 1);
            v12 = (unsigned int)(v12 - 1);
            v14 = *(_QWORD *)(v6 + 120);
            v29 = *(_DWORD *)(*((_QWORD *)ppalDefault + 15) + 4 * v13);
            HIBYTE(v29) = 48;
            *(_DWORD *)(v14 + 4 * v12) = v29;
            if ( !--v8 )
              break;
            v6 = v30;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0xFu;
        *(_DWORD *)(v30 + 24) &= 0xFFFEEFFF;
        v15 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v30 + 32) = v15;
        v16 = *(_QWORD *)(v30 + 128);
        if ( v16 != v30 )
          *(_DWORD *)(v16 + 32) = v15;
        v4 = 1;
      }
      goto LABEL_31;
    }
    if ( v2 == 2 )
    {
      v17 = *(_DWORD *)(v30 + 28);
      if ( !v17 )
      {
        v3 = 0;
LABEL_31:
        SEMOBJ::vUnlock((SEMOBJ *)&v24);
        if ( v4 && (*(_DWORD *)(v31 + 32) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v31 + 1784) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v31 + 1784))(
              *(_QWORD *)(*(_QWORD *)(v31 + 16) + 1816LL),
              &v30,
              0LL,
              0LL,
              *(_DWORD *)(v30 + 28));
          else
            v3 = 0;
        }
        goto LABEL_36;
      }
      v18 = 1;
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        do
        {
          v19 = v18++;
          *(_BYTE *)(*(_QWORD *)(v6 + 120) + 4 * v19 + 3) = 0;
          v6 = v30;
        }
        while ( v18 < *(_DWORD *)(v30 + 28) - 1 );
      }
      v20 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v30 + 28); v6 = v30 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 120) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v20 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v6 + 24) = v20;
    goto LABEL_31;
  }
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  return v3;
}
