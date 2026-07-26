/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C006C090
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C0025A9C (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisIovCopyVPortInfo @ 0x1C006A5A4 (ndisIovCopyVPortInfo.c)
 *     ndisIovFindVFByVFId @ 0x1C00E60F0 (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned int v3; // r13d
  _BYTE *v4; // r14
  __int64 VFByVFId; // r12
  __int64 v6; // r15
  __int64 *v7; // rbx
  char v8; // si
  _DWORD *v9; // rax
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE *OidSourceHandle; // rax
  __int64 *v15; // rbp
  bool v16; // zf
  KIRQL v17; // r8
  _QWORD **v18; // rsi
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // ebp
  __int64 v23; // rax
  _DWORD *v24; // rax
  unsigned int v25; // r12d
  _DWORD *v26; // rax
  _QWORD *v27; // r14
  _DWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  _BYTE *v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  KIRQL v36; // [rsp+98h] [rbp+10h]
  __int64 *SwitchBySwitchId; // [rsp+A8h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v34 = *a1;
  v4 = 0LL;
  v32 = 0LL;
  VFByVFId = 0LL;
  SwitchBySwitchId = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = a1;
  v8 = 1;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x35u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v9 = (_DWORD *)v7[4];
  if ( v9[1] == 12 )
  {
    *((_DWORD *)v7 + 10) = 0;
    if ( v9[12] >= 0x1Cu )
    {
      if ( v9[13] < 0x1Cu )
      {
        v9[17] = 28;
        *((_DWORD *)v7 + 10) = -1073676266;
      }
    }
    else
    {
      v9[17] = 28;
      *((_DWORD *)v7 + 10) = -1073676268;
    }
    if ( *((_DWORD *)v7 + 10) )
    {
      *(_DWORD *)(v7[4] + 60) = 0;
      *(_DWORD *)(v7[4] + 64) = 0;
      goto LABEL_73;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_73;
    }
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (v12 = *(_QWORD *)(v1 + 4640)) != 0 && *(_QWORD *)(v1 + 3584) != v11 && (*(_BYTE *)(v12 + 8) & 3) == 3 )
    {
      v13 = *(_QWORD *)(v2 + 40);
      *(_DWORD *)(v7[4] + 60) = v11;
      *(_DWORD *)(v7[4] + 64) = v10;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
      if ( OidSourceHandle )
      {
        if ( *OidSourceHandle == 18 )
          v4 = OidSourceHandle;
        v32 = v4;
      }
      if ( (*(_DWORD *)(v13 + 4) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v13 + 8));
        v15 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_22:
          *((_DWORD *)v7 + 10) = -1073741811;
LABEL_23:
          v8 = 1;
          goto LABEL_73;
        }
      }
      else
      {
        v15 = 0LL;
      }
      if ( (*(_DWORD *)(v13 + 4) & 1) != 0 )
      {
        if ( *(_WORD *)(v13 + 12) == 0xFFFF )
        {
          v6 = *(_QWORD *)(v1 + 4712);
          v16 = v6 == 0;
        }
        else
        {
          VFByVFId = ndisIovFindVFByVFId(v1);
          v33 = VFByVFId;
          v16 = VFByVFId == 0;
        }
        if ( v16 )
          goto LABEL_22;
      }
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v17 = v36;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2888497;
      if ( !v4 )
      {
        if ( v6 )
        {
          v3 = *(_DWORD *)(v6 + 28);
          v18 = (_QWORD **)(v6 + 32);
        }
        else if ( VFByVFId )
        {
          v3 = *(_DWORD *)(VFByVFId + 76);
          v18 = (_QWORD **)(VFByVFId + 80);
        }
        else if ( v15 )
        {
          v3 = *((_DWORD *)v15 + 12);
          v18 = (_QWORD **)(v15 + 7);
        }
        else
        {
          v3 = *(_DWORD *)(v1 + 4768);
          v18 = (_QWORD **)(v1 + 4776);
        }
LABEL_53:
        v22 = 576 * v3 + 28;
        *(_DWORD *)(v7[4] + 68) = v22;
        v23 = v7[4];
        if ( v22 <= *(_DWORD *)(v23 + 52) )
        {
          v24 = *(_DWORD **)(v23 + 40);
          v25 = 0;
          *v24 = 1835392;
          v24[4] = 28;
          v24[5] = v3;
          v24[6] = 576;
          v26 = v24 + 7;
          v27 = *v18;
          if ( *v18 != v18 )
          {
            v28 = v26;
            do
            {
              if ( v25 >= v3 )
                break;
              if ( v33 || v6 )
              {
                v29 = (__int64)(v27 - 6);
              }
              else if ( SwitchBySwitchId )
              {
                v29 = (__int64)(v27 - 4);
              }
              else if ( v32 )
              {
                v29 = (__int64)(v27 - 2);
              }
              else
              {
                v29 = (__int64)v27;
              }
              v27 = (_QWORD *)*v27;
              if ( !v32 || v32 == *(_BYTE **)(v29 + 80) )
              {
                ndisIovCopyVPortInfo(v28, v29);
                v28 += 144;
                ++v25;
              }
            }
            while ( v27 != v18 );
            v7 = a1;
            v1 = v34;
            v22 = 576 * v3 + 28;
            v17 = v36;
          }
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v17);
          v30 = v7[4];
          *((_DWORD *)v7 + 10) = 0;
          *(_DWORD *)(v30 + 60) = v22;
        }
        else
        {
          *((_DWORD *)v7 + 10) = -1073676266;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v36);
        }
        goto LABEL_23;
      }
      if ( v6 )
      {
        v18 = (_QWORD **)(v6 + 32);
      }
      else if ( VFByVFId )
      {
        v18 = (_QWORD **)(VFByVFId + 80);
      }
      else
      {
        if ( !v15 )
        {
          v3 = *((_DWORD *)v4 + 230);
          v18 = (_QWORD **)(v4 + 928);
          goto LABEL_53;
        }
        v18 = (_QWORD **)(v15 + 7);
      }
      v19 = *v18;
      while ( v19 != v18 )
      {
        if ( VFByVFId || (v20 = v19 - 4, v6) )
          v20 = v19 - 6;
        v21 = v3 + 1;
        v19 = (_QWORD *)*v19;
        if ( (_BYTE *)v20[10] != v4 )
          v21 = v3;
        v3 = v21;
      }
      goto LABEL_53;
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_73:
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qD(0x36u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, *((_DWORD *)v7 + 10));
  return v8;
}
