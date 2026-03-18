/*
 * XREFs of ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0002190
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0002338 (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0038ED4 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C00FA948 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRampInternal(_QWORD *a1, _OWORD *a2)
{
  int v3; // r14d
  int v5; // ebp
  int v6; // r11d
  unsigned int v7; // edi
  __int64 i; // rcx
  int v9; // edx
  __int64 v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  void *AppliedGammaRampTable; // rax
  int v16; // r10d
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = a1;
  v3 = 0;
  v5 = 1;
  if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v25) )
  {
    v7 = 1;
    for ( i = 0LL; (v7 && v6 || v5) && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
    {
      if ( v6 )
      {
        v16 = *((unsigned __int16 *)a2 + i);
        v17 = *((unsigned __int16 *)a2 + i + 256);
        v18 = *((unsigned __int16 *)a2 + i + 512);
        v19 = ((_DWORD)i << 8) + 0x8000;
        v20 = ((_DWORD)i << 8) - 0x8000;
        if ( v16 < v20 || v16 > v19 || v17 < v20 || v17 > v19 || v18 < v20 || v18 > v19 )
          v7 = 0;
      }
      if ( v5 )
      {
        v9 = (_DWORD)i << 8;
        if ( *((unsigned __int16 *)a2 + i) != (_DWORD)i << 8
          || *((unsigned __int16 *)a2 + i + 256) != v9
          || *((unsigned __int16 *)a2 + i + 512) != v9 )
        {
          v5 = 0;
        }
      }
    }
    if ( v7 )
    {
      if ( !a1[214] && !v5 )
      {
        v10 = PALLOCMEM2(0x600uLL);
        if ( v10 )
          a1[214] = v10;
        else
          v7 = 0;
      }
      if ( v7 )
      {
        if ( v5 )
        {
          if ( a1[213] )
            a2 = (_OWORD *)a1[213];
          v22 = ((__int64 (__fastcall *)(_QWORD, __int64, _OWORD *))a1[405])(a1[227], 1LL, a2);
          v23 = a1[214];
          v7 = v22;
          if ( v23 )
          {
            a1[214] = 0LL;
            Win32FreePool(v23);
          }
          v24 = a1[215];
          if ( v24 )
          {
            a1[215] = 0LL;
            Win32FreePool(v24);
          }
        }
        else
        {
          v11 = (_OWORD *)a1[214];
          v12 = 12LL;
          do
          {
            *v11 = *a2;
            v11[1] = a2[1];
            v11[2] = a2[2];
            v11[3] = a2[3];
            v11[4] = a2[4];
            v11[5] = a2[5];
            v11[6] = a2[6];
            v11 += 8;
            v13 = a2[7];
            a2 += 8;
            *(v11 - 1) = v13;
            --v12;
          }
          while ( v12 );
          if ( a1[213] )
          {
            v3 = 1;
            if ( !a1[215] )
            {
              v21 = PALLOCMEM2(0x600uLL);
              if ( v21 )
                a1[215] = v21;
              else
                v7 = 0;
            }
          }
          if ( v7 )
          {
            if ( v3 )
              PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&v25);
            AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v25);
            return ((unsigned int (__fastcall *)(_QWORD, __int64, void *))a1[405])(a1[227], 1LL, AppliedGammaRampTable);
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
