/*
 * XREFs of UsbhBuildHardwareID @ 0x1C001D200
 * Callers:
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0053184 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C00532D0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C0058090 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // r8d
  PDEVICE_OBJECT v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int16 v11; // di
  unsigned __int16 v12; // r15
  _QWORD *PoolWithTag; // rbx
  _WORD *v14; // rcx
  unsigned int v15; // r12d
  char *v16; // rax
  char *v17; // r14
  _WORD *v18; // rcx
  unsigned int v19; // edi
  char *v20; // rax
  char *v21; // rsi
  char *v22; // rcx
  unsigned int v23; // r14d
  char *v24; // rax
  char *v25; // r15
  char *v26; // rcx
  int v27; // esi
  char *v28; // rax
  char *v29; // rdi
  char *v30; // rcx
  int v31; // r8d
  _QWORD *v33; // rax
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r10
  int v37; // eax
  int v38; // r8d
  __int16 v39; // r9
  __int64 v40; // r9
  int v41; // r8d
  unsigned __int64 v43; // [rsp+88h] [rbp+10h]
  unsigned __int64 v44; // [rsp+98h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    if ( (v7[353] & 0x10004) != 0x10000 )
      goto LABEL_3;
    v37 = UsbhBuildUxdPnpId(v6, a2, a3);
    if ( v37 < 0 )
    {
      Log(a1, 4096, 1752651845, 0LL, v37);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v39 )
      {
LABEL_4:
        LOWORD(v10) = *((_WORD *)v7 + 701);
        v11 = *((_WORD *)v7 + 700);
        v12 = *((_WORD *)v7 + 702);
        if ( LOWORD(v9->DeviceType) )
          WPP_RECORDER_SF_DDD(
            v9->DeviceExtension,
            v11,
            v8,
            16,
            (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
            v11,
            v10,
            v12);
        v10 = (unsigned __int16)v10;
        v44 = v10;
        v43 = v11;
        Log(a1, 4096, 1752648004, v11, (unsigned __int16)v10);
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
        if ( PoolWithTag )
        {
          v14 = PoolWithTag;
          *PoolWithTag = 0LL;
          PoolWithTag[1] = 0LL;
          PoolWithTag[2] = 0LL;
          *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
          for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v14 != 110; ++v14 )
            ;
          v15 = 42;
          *v14 = (unsigned __int8)Nibble[(unsigned __int64)v11 >> 12];
          v14[1] = (unsigned __int8)Nibble[((unsigned __int64)v11 >> 8) & 0xF];
          v14[2] = (unsigned __int8)Nibble[(unsigned __int8)v11 >> 4];
          v14[3] = (unsigned __int8)Nibble[v11 & 0xF];
          v16 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
          v17 = v16;
          if ( v16 )
          {
            memset(v16, 0, 0x2AuLL);
            v18 = v17 + 24;
            *(_OWORD *)v17 = *(_OWORD *)PoolWithTag;
            *((_QWORD *)v17 + 2) = PoolWithTag[2];
            *(_OWORD *)(v17 + 24) = *(_OWORD *)L"&PID_nnnn";
            for ( *((_WORD *)v17 + 20) = aPidNnnn[8]; *v18 != 110; ++v18 )
              ;
            *v18 = (unsigned __int8)Nibble[(unsigned __int64)(unsigned __int16)v10 >> 12];
            v18[1] = (unsigned __int8)Nibble[((unsigned __int64)(unsigned __int16)v10 >> 8) & 0xF];
            v18[2] = (unsigned __int8)Nibble[(unsigned __int8)v10 >> 4];
            v18[3] = (unsigned __int8)Nibble[v10 & 0xF];
          }
          else
          {
            v15 = 0;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
          if ( v17 )
          {
            v19 = (unsigned __int16)v15 + 20;
            v20 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v15 + 20LL, 0x42554855u);
            v21 = v20;
            if ( v20 )
            {
              memset(v20, 0, (unsigned __int16)v15 + 20LL);
              memmove(v21, v17, v15);
              v22 = &v21[v15];
              *(_OWORD *)v22 = *(_OWORD *)L"&REV_nnnn";
              for ( *((_WORD *)v22 + 8) = aRevNnnn[8]; *(_WORD *)v22 != 110; v22 += 2 )
                ;
              *(_WORD *)v22 = (v12 >> 12) + 48;
              *((_WORD *)v22 + 1) = (HIBYTE(v12) & 0xF) + 48;
              *((_WORD *)v22 + 2) = ((unsigned __int8)v12 >> 4) + 48;
              *((_WORD *)v22 + 3) = (v12 & 0xF) + 48;
            }
            else
            {
              v19 = 0;
            }
            ExFreePoolWithTag(v17, 0);
            v23 = (unsigned __int16)v19 + 24;
            v24 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v19 + 24LL, 0x42554855u);
            v25 = v24;
            if ( v24 )
            {
              memset(v24, 0, (unsigned __int16)v19 + 24LL);
              memmove(v25, v21, v19);
              v26 = &v25[v19];
              *(_OWORD *)v26 = *(_OWORD *)L"USB\\VID_nnnn";
              for ( *((_QWORD *)v26 + 2) = *(_QWORD *)L"nnnn"; *(_WORD *)v26 != 110; v26 += 2 )
                ;
              *(_WORD *)v26 = (unsigned __int8)Nibble[v43 >> 12];
              *((_WORD *)v26 + 1) = (unsigned __int8)Nibble[(v43 >> 8) & 0xF];
              *((_WORD *)v26 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v43 >> 4];
              *((_WORD *)v26 + 3) = (unsigned __int8)Nibble[v43 & 0xF];
            }
            else
            {
              v23 = 0;
            }
            if ( v21 )
              ExFreePoolWithTag(v21, 0);
            if ( v25 )
            {
              v27 = (unsigned __int16)v23 + 22;
              v28 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v23 + 22LL, 0x42554855u);
              v29 = v28;
              if ( v28 )
              {
                memset(v28, 0, (unsigned __int16)v23 + 22LL);
                memmove(v29, v25, v23);
                v30 = &v29[v23];
                *(_OWORD *)v30 = *(_OWORD *)L"&PID_nnnn";
                for ( *((_WORD *)v30 + 8) = aPidNnnn[8]; *(_WORD *)v30 != 110; v30 += 2 )
                  ;
                *(_WORD *)v30 = (unsigned __int8)Nibble[v44 >> 12];
                *((_WORD *)v30 + 1) = (unsigned __int8)Nibble[(v44 >> 8) & 0xF];
                *((_WORD *)v30 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v44 >> 4];
                *((_WORD *)v30 + 3) = (unsigned __int8)Nibble[v44 & 0xF];
              }
              else
              {
                v27 = 0;
              }
              ExFreePoolWithTag(v25, 0);
              if ( v29 )
              {
                *(_QWORD *)(a3 + 8) = v29;
                *(_DWORD *)(a3 + 4) = v27;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_Sd(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    v31,
                    18,
                    (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
                    (__int64)v29,
                    v27);
                return 0LL;
              }
              v40 = a2;
              v41 = 1751725089;
            }
            else
            {
              v40 = a2;
              v41 = 1751725345;
            }
          }
          else
          {
            v40 = a2;
            v41 = 1751724321;
          }
          Log(a1, 4096, v41, v40, -1073741670LL);
        }
        else
        {
          Log(a1, 4096, 1751724577, a2, -1073741670LL);
        }
        return 3221225626LL;
      }
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        15,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids);
LABEL_3:
      v9 = WPP_GLOBAL_Control;
      goto LABEL_4;
    }
    Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sqd(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_QWORD *)(a3 + 8),
        v38,
        14,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
        *(_QWORD *)(a3 + 8),
        *(_QWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 4));
    return 0LL;
  }
  else
  {
    v33 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    if ( v33 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      v33[2] = 0LL;
      *((_WORD *)v33 + 12) = 0;
      *(_OWORD *)v33 = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)v33 + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)v33 + 10) = aUsbUnknown[10];
      *(_QWORD *)(a3 + 8) = v33;
      *(_DWORD *)(a3 + 4) = 26;
      Log(a1, 4096, 1751733537, (__int64)v33, 26LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v34,
          v35,
          17,
          (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
          v36,
          v36,
          26);
      return 0LL;
    }
    else
    {
      Log(a1, 4096, 1751724833, 0LL, -1073741670LL);
      return 3221225626LL;
    }
  }
}
