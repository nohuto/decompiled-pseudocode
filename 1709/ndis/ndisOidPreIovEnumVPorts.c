/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C006D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0001A2C (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovCopyVPortInfo @ 0x1C006B9B4 (ndisIovCopyVPortInfo.c)
 *     ndisIovFindVFByVFId @ 0x1C00EF72C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned int v3; // r12d
  _BYTE *v4; // r13
  __int64 VFByVFId; // r14
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
  __int64 v20; // rax
  _QWORD *v21; // rax
  _BYTE *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // rax
  _DWORD *v26; // rax
  _QWORD *v27; // r14
  unsigned int v28; // eax
  _DWORD *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 *SwitchBySwitchId; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  _DWORD *v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+38h] [rbp-50h]
  KIRQL v38; // [rsp+98h] [rbp+10h]
  int v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v36 = *a1;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  VFByVFId = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  v7 = a1;
  v8 = 1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x35u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1, v1);
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
      goto LABEL_72;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_72;
    }
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (v12 = *(_QWORD *)(v1 + 4640)) != 0 && *(_QWORD *)(v1 + 3584) != v11 && (*(_BYTE *)(v12 + 8) & 3) == 3 )
    {
      v13 = *(_QWORD *)(v2 + 40);
      *(_DWORD *)(v7[4] + 60) = v11;
      *(_DWORD *)(v7[4] + 64) = v10;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( (*(_DWORD *)(v13 + 4) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v13 + 8));
        v15 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_21:
          *((_DWORD *)v7 + 10) = -1073741811;
LABEL_22:
          v8 = 1;
          goto LABEL_72;
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
          v34 = VFByVFId;
          v16 = VFByVFId == 0;
        }
        if ( v16 )
          goto LABEL_21;
      }
      v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v17 = v38;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2888552;
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
LABEL_52:
        v24 = 576 * v3 + 28;
        v40 = v24;
        *(_DWORD *)(v7[4] + 68) = v24;
        v25 = v7[4];
        if ( v24 <= *(_DWORD *)(v25 + 52) )
        {
          v26 = *(_DWORD **)(v25 + 40);
          *v26 = 1835392;
          v26[4] = 28;
          v26[5] = v3;
          v26[6] = 576;
          v27 = *v18;
          v35 = v26 + 7;
          v28 = 0;
          v39 = 0;
          if ( *v18 != v18 )
          {
            v29 = v35;
            do
            {
              if ( v28 >= v3 )
                break;
              if ( v34 || v6 )
              {
                v30 = (__int64)(v27 - 6);
              }
              else if ( SwitchBySwitchId )
              {
                v30 = (__int64)(v27 - 4);
              }
              else if ( v4 )
              {
                v30 = (__int64)(v27 - 2);
              }
              else
              {
                v30 = (__int64)v27;
              }
              v27 = (_QWORD *)*v27;
              if ( !v4 || v4 == *(_BYTE **)(v30 + 80) )
              {
                ndisIovCopyVPortInfo(v29, v30);
                v29 += 144;
                v28 = ++v39;
              }
            }
            while ( v27 != v18 );
            v7 = a1;
            v1 = v36;
            v24 = v40;
            v17 = v38;
          }
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v17);
          v31 = v7[4];
          *((_DWORD *)v7 + 10) = 0;
          *(_DWORD *)(v31 + 60) = v24;
        }
        else
        {
          *((_DWORD *)v7 + 10) = -1073676266;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v38);
        }
        goto LABEL_22;
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
          goto LABEL_52;
        }
        v18 = (_QWORD **)(v15 + 7);
      }
      v19 = *v18;
      while ( v19 != v18 )
      {
        if ( VFByVFId || (v20 = 6LL, v6) )
          v20 = 4LL;
        v21 = &v19[v20];
        v19 = (_QWORD *)*v19;
        v22 = (_BYTE *)*v21;
        v23 = v3 + 1;
        if ( v22 != v4 )
          v23 = v3;
        v3 = v23;
      }
      goto LABEL_52;
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_72:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x36u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v1, *((_DWORD *)v7 + 10));
  return v8;
}
