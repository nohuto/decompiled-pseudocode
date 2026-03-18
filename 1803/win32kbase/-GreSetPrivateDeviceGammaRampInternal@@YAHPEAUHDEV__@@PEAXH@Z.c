/*
 * XREFs of ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00D6D5C
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00D6CC0 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C00D6AB8 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00D6B64 (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C00D7024 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRampInternal(_QWORD *a1, _OWORD *a2, int a3)
{
  int v4; // r15d
  int v7; // ebp
  unsigned int v8; // edi
  __int64 i; // rcx
  int v10; // r11d
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  int v15; // edx
  void *v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm1
  void *v20; // rax
  void *AppliedGammaRampTable; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = a1;
  v4 = 0;
  v7 = 1;
  if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v26) )
  {
    v8 = 1;
    for ( i = 0LL; (v8 && a3 || v7) && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
    {
      if ( a3 )
      {
        v10 = *((unsigned __int16 *)a2 + i);
        v11 = *((unsigned __int16 *)a2 + i + 256);
        v12 = ((_DWORD)i << 8) - 0x8000;
        v13 = ((_DWORD)i << 8) + 0x8000;
        if ( v10 < v12
          || v10 > v13
          || v11 < v12
          || v11 > v13
          || (v14 = *((unsigned __int16 *)a2 + i + 512), v14 < v12)
          || v14 > v13 )
        {
          v8 = 0;
        }
      }
      if ( v7 )
      {
        v15 = (_DWORD)i << 8;
        if ( *((unsigned __int16 *)a2 + i) != (_DWORD)i << 8
          || *((unsigned __int16 *)a2 + i + 256) != v15
          || *((unsigned __int16 *)a2 + i + 512) != v15 )
        {
          v7 = 0;
        }
      }
    }
    if ( v8 )
    {
      if ( !a1[211] && !v7 )
      {
        v16 = PALLOCMEM2(0x600uLL, 0x61676947u, 0);
        if ( v16 )
          a1[211] = v16;
        else
          v8 = 0;
      }
      if ( v8 )
      {
        if ( v7 )
        {
          if ( a1[210] )
            a2 = (_OWORD *)a1[210];
          v22 = ((__int64 (__fastcall *)(_QWORD, __int64, _OWORD *))a1[402])(a1[224], 1LL, a2);
          v23 = a1[211];
          v8 = v22;
          if ( v23 )
          {
            a1[211] = 0LL;
            Win32FreePool(v23);
          }
          v24 = a1[212];
          if ( v24 )
          {
            a1[212] = 0LL;
            Win32FreePool(v24);
          }
        }
        else
        {
          v17 = (_OWORD *)a1[211];
          v18 = 12LL;
          do
          {
            *v17 = *a2;
            v17[1] = a2[1];
            v17[2] = a2[2];
            v17[3] = a2[3];
            v17[4] = a2[4];
            v17[5] = a2[5];
            v17[6] = a2[6];
            v17 += 8;
            v19 = a2[7];
            a2 += 8;
            *(v17 - 1) = v19;
            --v18;
          }
          while ( v18 );
          if ( a1[210] )
          {
            v4 = 1;
            if ( !a1[212] )
            {
              v20 = PALLOCMEM2(0x600uLL, 0x676F6947u, 0);
              if ( v20 )
                a1[212] = v20;
              else
                v8 = 0;
            }
          }
          if ( v8 )
          {
            if ( v4 )
              PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&v26);
            AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v26);
            return ((unsigned int (__fastcall *)(_QWORD, __int64, void *))a1[402])(a1[224], 1LL, AppliedGammaRampTable);
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
