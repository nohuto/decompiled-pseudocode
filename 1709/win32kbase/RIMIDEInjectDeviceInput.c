/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C0109710
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C00E8E70 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C010999C (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0107EFC (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C010A408 (RIMIDESetLinkCollectionUsageValues.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v5; // r12d
  int v6; // esi
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // rbx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rax
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+44h] [rbp-54h] BYREF
  int *v22; // [rsp+48h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v26; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 1;
  v26 = 0;
  v21 = 0;
  v22 = 0LL;
  v5 = 1;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = (char *)Object;
    v8 = *((_QWORD *)Object + 55);
    v9 = *((_QWORD *)Object + 51);
    if ( !*(_DWORD *)(v8 + 16) )
      *(_DWORD *)(v8 + 16) = 1;
    RIMLockExclusive(v9 + 96);
    if ( *(_BYTE *)(v9 + 73) )
    {
      v6 = -1073741637;
    }
    else
    {
      v10 = *((_DWORD *)v7 + 66);
      if ( (v10 & 0x10) != 0 || (v10 & 8) != 0 )
        v22 = &v21;
      memset(*(void **)(*((_QWORD *)v7 + 65) + 24LL), 0, *(unsigned __int16 *)(*((_QWORD *)v7 + 65) + 44LL));
      if ( !a3 )
        goto LABEL_33;
      v11 = 1;
      v12 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex(
                              (struct RIMDEV *)(v7 + 64),
                              (unsigned __int16)*v12,
                              &v26,
                              v11) )
      {
        v14 = *((_DWORD *)v7 + 66);
        if ( ((v14 & 0x10) != 0 || (v14 & 8) != 0) && *(v12 - 4) == 13 && *(v12 - 3) == 84 )
          v5 = *((_DWORD *)v12 - 1);
        v15 = RIMIDESetLinkCollectionUsageValues((int)v7 + 64, v13, (unsigned int)a2 + 12 * v3, v26, (__int64)v22);
        v11 = 0;
        if ( !v15 )
          goto LABEL_33;
        if ( *v12 )
          v20 = 0;
        else
          v11 = v20;
        ++v3;
        v12 += 6;
        if ( v3 >= a3 )
          goto LABEL_23;
      }
      v15 = 0;
LABEL_23:
      if ( v15 )
      {
        v16 = *((_DWORD *)v7 + 66);
        if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 )
        {
          v17 = v21;
          if ( v5 == v21 )
          {
            *((_DWORD *)v7 + 66) = v16 & 0xFFFFFFF7;
          }
          else
          {
            v6 = -1073741668;
            *((_DWORD *)v7 + 66) = v16 | 8;
            WPP_RECORDER_SF_dd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x14u,
              0x13u,
              (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids,
              v5,
              v17);
          }
          *((_DWORD *)v7 + 66) &= ~0x10u;
        }
        if ( v6 < 0 )
        {
          v6 = -1073741811;
        }
        else
        {
          RIMLockExclusive(v9 + 696);
          v18 = *((_QWORD *)v7 + 65);
          *((_DWORD *)v7 + 80) = 0;
          *((_QWORD *)v7 + 41) = *(unsigned __int16 *)(v18 + 44);
          rimProcessDeviceBufferAndStartRead(v9, (__int64)(v7 + 64));
          *(_QWORD *)(v9 + 704) = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 696, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
LABEL_33:
        v6 = -1073741668;
      }
    }
    *(_QWORD *)(v9 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
