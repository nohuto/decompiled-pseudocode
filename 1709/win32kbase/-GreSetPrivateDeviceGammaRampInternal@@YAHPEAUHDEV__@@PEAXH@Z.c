/*
 * XREFs of ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00FAD24
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00FAC60 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C003DFE8 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C00FAB98 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00FAC30 (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRampInternal(_QWORD *a1, _OWORD *a2)
{
  int v3; // r14d
  int v5; // ebp
  int v6; // r8d
  unsigned int v7; // edi
  __int64 i; // rcx
  int v9; // r10d
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  void *v15; // rax
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm1
  void *v19; // rax
  void *AppliedGammaRampTable; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
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
        v9 = *((unsigned __int16 *)a2 + i);
        v10 = ((_DWORD)i << 8) - 0x8000;
        v11 = ((_DWORD)i << 8) + 0x8000;
        if ( v9 < v10
          || v9 > v11
          || (v12 = *((unsigned __int16 *)a2 + i + 256), v12 < v10)
          || v12 > v11
          || (v13 = *((unsigned __int16 *)a2 + i + 512), v13 < v10)
          || v13 > v11 )
        {
          v7 = 0;
        }
      }
      if ( v5 )
      {
        v14 = (_DWORD)i << 8;
        if ( *((unsigned __int16 *)a2 + i) != (_DWORD)i << 8
          || *((unsigned __int16 *)a2 + i + 256) != v14
          || *((unsigned __int16 *)a2 + i + 512) != v14 )
        {
          v5 = 0;
        }
      }
    }
    if ( v7 )
    {
      if ( !a1[214] && !v5 )
      {
        v15 = PALLOCMEM2(0x600uLL, 1634167111LL, 0);
        if ( v15 )
          a1[214] = v15;
        else
          v7 = 0;
      }
      if ( v7 )
      {
        if ( v5 )
        {
          if ( a1[213] )
            a2 = (_OWORD *)a1[213];
          v21 = ((__int64 (__fastcall *)(_QWORD, __int64, _OWORD *))a1[405])(a1[227], 1LL, a2);
          v22 = a1[214];
          v7 = v21;
          if ( v22 )
          {
            a1[214] = 0LL;
            Win32FreePool(v22);
          }
          v23 = a1[215];
          if ( v23 )
          {
            a1[215] = 0LL;
            Win32FreePool(v23);
          }
        }
        else
        {
          v16 = (_OWORD *)a1[214];
          v17 = 12LL;
          do
          {
            *v16 = *a2;
            v16[1] = a2[1];
            v16[2] = a2[2];
            v16[3] = a2[3];
            v16[4] = a2[4];
            v16[5] = a2[5];
            v16[6] = a2[6];
            v16 += 8;
            v18 = a2[7];
            a2 += 8;
            *(v16 - 1) = v18;
            --v17;
          }
          while ( v17 );
          if ( a1[213] )
          {
            v3 = 1;
            if ( !a1[215] )
            {
              v19 = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
              if ( v19 )
                a1[215] = v19;
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
