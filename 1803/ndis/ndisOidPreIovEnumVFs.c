/*
 * XREFs of ndisOidPreIovEnumVFs @ 0x1C006DB50
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00126D8 (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisIovCopyVFInfo @ 0x1C006C048 (ndisIovCopyVFInfo.c)
 */

char __fastcall ndisOidPreIovEnumVFs(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  unsigned int v3; // esi
  _BYTE *v4; // r14
  __int64 *SwitchBySwitchId; // r15
  int *v6; // rbx
  char v7; // bp
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v12; // r8
  KIRQL v13; // r9
  _QWORD **v14; // r13
  _QWORD *v15; // rdx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  KIRQL v28; // [rsp+78h] [rbp+10h]
  int v29; // [rsp+80h] [rbp+18h]
  _DWORD *v30; // [rsp+88h] [rbp+20h]
  _QWORD *v31; // [rsp+88h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  v6 = (int *)a1;
  v7 = 1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x29u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v8 = (_DWORD *)*((_QWORD *)v6 + 4);
  if ( v8[1] != 12 )
    goto LABEL_46;
  v6[10] = 0;
  if ( v8[12] < 0x18u )
  {
    v9 = -1073676268;
LABEL_8:
    v8[17] = 24;
    v6[10] = v9;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 0;
    goto LABEL_47;
  }
  if ( v8[13] < 0x18u )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( !v1 )
  {
    v7 = 0;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 4640LL);
  if ( v10 && *(_QWORD *)(*(_QWORD *)v6 + 3584LL) && (*(_BYTE *)(v10 + 8) & 3) == 3 )
  {
    v8[15] = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 24;
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
      v4 = OidSourceHandle;
    if ( (*(_DWORD *)(v12 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v12 + 8))) != 0LL )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v13 = v28;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2887032;
      if ( v4 )
      {
        if ( SwitchBySwitchId )
        {
          v15 = (_QWORD *)*((_QWORD *)v4 + 113);
          while ( v15 != (_QWORD *)(v4 + 904) )
          {
            v16 = v15[6] == (_QWORD)SwitchBySwitchId;
            v17 = v3 + 1;
            v15 = (_QWORD *)*v15;
            if ( !v16 )
              v17 = v3;
            v3 = v17;
          }
        }
        else
        {
          v3 = *((_DWORD *)v4 + 224);
        }
        v14 = (_QWORD **)(v4 + 904);
      }
      else
      {
        if ( SwitchBySwitchId )
          v3 = *((_DWORD *)SwitchBySwitchId + 18);
        else
          v3 = *(_DWORD *)(v1 + 4744);
        v14 = (_QWORD **)(v1 + 4752);
      }
      v18 = 1632 * v3 + 24;
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 68LL) = v18;
      v19 = *((_QWORD *)v6 + 4);
      if ( v18 <= *(_DWORD *)(v19 + 52) )
      {
        v20 = *(_DWORD **)(v19 + 40);
        v20[3] = 24;
        *v20 = 1573248;
        v20[4] = v3;
        v20[5] = 1632;
        v21 = 0;
        v30 = v20 + 6;
        v22 = *v14;
        v29 = 0;
        if ( *v14 != v14 )
        {
          v23 = v30;
          do
          {
            if ( v21 >= v3 )
              break;
            v24 = (__int64)(v22 - 2);
            if ( !v4 )
              v24 = (__int64)v22;
            v22 = (_QWORD *)*v22;
            v31 = v22;
            if ( !SwitchBySwitchId || *(__int64 **)(v24 + 64) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v23, v24);
              v23 += 408;
              v22 = v31;
              v21 = ++v29;
            }
          }
          while ( v22 != v14 );
          v6 = (int *)a1;
          v13 = v28;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v13);
        v25 = *((_QWORD *)v6 + 4);
        v6[10] = 0;
        *(_DWORD *)(v25 + 60) = v18;
      }
      else
      {
        v6[10] = -1073676266;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v28);
      }
    }
    else
    {
      v6[10] = -1073741811;
    }
  }
  else
  {
LABEL_46:
    v6[10] = -1073741637;
  }
LABEL_47:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v1, v6[10]);
  return v7;
}
