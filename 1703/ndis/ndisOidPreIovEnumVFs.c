/*
 * XREFs of ndisOidPreIovEnumVFs @ 0x1C006BD80
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C0025A9C (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisIovCopyVFInfo @ 0x1C006A3D8 (ndisIovCopyVFInfo.c)
 */

char __fastcall ndisOidPreIovEnumVFs(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // r13d
  _BYTE *v4; // rbp
  __int64 *SwitchBySwitchId; // r15
  int *v6; // rbx
  char v7; // si
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v11; // r8
  KIRQL v12; // r9
  _QWORD **v13; // rcx
  _QWORD *v14; // rdx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  unsigned int v22; // eax
  _DWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v27; // [rsp+20h] [rbp-58h]
  KIRQL v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+90h] [rbp+18h]
  _QWORD **v31; // [rsp+98h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  v6 = (int *)a1;
  v7 = 1;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x29u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v8 = (_DWORD *)*((_QWORD *)v6 + 4);
  if ( v8[1] != 12 )
    goto LABEL_47;
  v6[10] = 0;
  if ( v8[12] >= 0x18u )
  {
    if ( v8[13] < 0x18u )
    {
      v8[17] = 24;
      v6[10] = -1073676266;
    }
  }
  else
  {
    v8[17] = 24;
    v6[10] = -1073676268;
  }
  if ( v6[10] )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 0;
    goto LABEL_48;
  }
  if ( !v1 )
  {
    v7 = 0;
    goto LABEL_48;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 4640LL);
  if ( v9 && *(_QWORD *)(*(_QWORD *)v6 + 3584LL) && (*(_BYTE *)(v9 + 8) & 3) == 3 )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 24;
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
      v4 = OidSourceHandle;
    if ( (*(_DWORD *)(v11 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v11 + 8))) != 0LL )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v12 = v29;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2887021;
      if ( v4 )
      {
        if ( SwitchBySwitchId )
        {
          v14 = (_QWORD *)*((_QWORD *)v4 + 113);
          while ( v14 != (_QWORD *)(v4 + 904) )
          {
            v15 = (__int64 **)(v14 + 6);
            v14 = (_QWORD *)*v14;
            v16 = *v15;
            v17 = v3 + 1;
            if ( v16 != SwitchBySwitchId )
              v17 = v3;
            v3 = v17;
          }
        }
        else
        {
          v3 = *((_DWORD *)v4 + 224);
        }
        v13 = (_QWORD **)(v4 + 904);
      }
      else
      {
        if ( SwitchBySwitchId )
          v3 = *((_DWORD *)SwitchBySwitchId + 18);
        else
          v3 = *(_DWORD *)(v1 + 4744);
        v13 = (_QWORD **)(v1 + 4752);
      }
      v31 = v13;
      v18 = 1632 * v3 + 24;
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 68LL) = v18;
      v19 = *((_QWORD *)v6 + 4);
      if ( v18 <= *(_DWORD *)(v19 + 52) )
      {
        v20 = *(_DWORD **)(v19 + 40);
        *v20 = 1573248;
        v20[3] = 24;
        v20[4] = v3;
        v20[5] = 1632;
        v21 = *v13;
        v27 = v20 + 6;
        v22 = 0;
        v30 = 0;
        if ( *v13 != v13 )
        {
          v23 = v27;
          do
          {
            if ( v22 >= v3 )
              break;
            v24 = (__int64)(v21 - 2);
            if ( !v4 )
              v24 = (__int64)v21;
            v21 = (_QWORD *)*v21;
            if ( !SwitchBySwitchId || *(__int64 **)(v24 + 64) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v23, v24);
              v23 += 408;
              v13 = v31;
              v22 = ++v30;
            }
          }
          while ( v21 != v13 );
          v6 = (int *)a1;
          v12 = v29;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        v25 = *((_QWORD *)v6 + 4);
        v6[10] = 0;
        *(_DWORD *)(v25 + 60) = v18;
      }
      else
      {
        v6[10] = -1073676266;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v29);
      }
    }
    else
    {
      v6[10] = -1073741811;
    }
  }
  else
  {
LABEL_47:
    v6[10] = -1073741637;
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, v6[10]);
  return v7;
}
