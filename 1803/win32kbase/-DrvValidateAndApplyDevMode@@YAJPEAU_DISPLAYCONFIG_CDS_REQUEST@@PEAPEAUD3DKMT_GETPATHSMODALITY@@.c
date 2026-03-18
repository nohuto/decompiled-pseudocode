/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004FD28
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v13; // rcx
  struct _devicemodeW *v14; // r14
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+54h] [rbp-2Ch]
  int v34; // [rsp+5Ch] [rbp-24h]
  int v35; // [rsp+60h] [rbp-20h]
  int v36; // [rsp+64h] [rbp-1Ch]
  int v37; // [rsp+68h] [rbp-18h]
  __int64 v38; // [rsp+70h] [rbp-10h]
  int v39; // [rsp+B0h] [rbp+30h] BYREF
  int v40; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  v6 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v6 + 160) & 0x800000) == 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  v32 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v33 = *(_QWORD *)(v6 + 248);
  v7 = *(_DWORD *)(v6 + 256);
  v35 = -1;
  v34 = v7;
  v38 = *((_QWORD *)a1 + 4);
  v36 = -2;
  v37 = -2;
  v8 = ((__int64 (__fastcall *)(int *))qword_1C01A1A38)(&v32);
  v10 = v8;
  LODWORD(v11) = -1073741266;
  if ( v8 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v9);
    v28[3] = -1073741266LL;
    v28[4] = *((_QWORD *)a1 + 4);
    v28[5] = *((int *)a1 + 13);
    v28[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v28);
    return (unsigned int)v11;
  }
  result = 3221225485LL;
  if ( (_DWORD)v10 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v10 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v30 = (_QWORD *)WdLogNewEntry5_WdError();
    v30[3] = v10;
    v30[4] = *((_QWORD *)a1 + 4);
    v30[5] = *((int *)a1 + 13);
    v30[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v30);
    return (unsigned int)v10;
  }
  v13 = *a2;
  v14 = 0LL;
  if ( *a2 )
  {
    v15 = 0;
    if ( *((_WORD *)v13 + 10) )
    {
      while ( 1 )
      {
        v16 = 272LL * v15;
        if ( *(_DWORD *)((char *)v13 + v16 + 72) == *(_DWORD *)(v6 + 256)
          && *(_DWORD *)((char *)v13 + v16 + 64) == *(_DWORD *)(v6 + 248)
          && *(_DWORD *)((char *)v13 + v16 + 68) == *(_DWORD *)(v6 + 252) )
        {
          break;
        }
        if ( ++v15 >= *((unsigned __int16 *)v13 + 10) )
          goto LABEL_15;
      }
      v14 = *(struct _devicemodeW **)((char *)v13 + v16 + 272);
    }
  }
LABEL_15:
  v17 = (__int64 *)((char *)a1 + 40);
  v18 = *((_QWORD *)a1 + 5);
  if ( v18 )
  {
    Win32FreePool(v18);
    *v17 = 0LL;
  }
  v19 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v6,
          (struct _devicemodeW **)a1 + 5,
          &v40,
          &v39,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v14);
  v11 = v19;
  if ( v19 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL);
    v29 = (_QWORD *)WdLogNewEntry5_WdError();
    v29[3] = v11;
    v29[4] = *((_QWORD *)a1 + 4);
    v29[5] = *((int *)a1 + 13);
    v29[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v29);
    return (unsigned int)v11;
  }
  if ( *((_DWORD *)a1 + 4) && v39 )
    v20 = 8;
  else
    v20 = 0;
  v32 = v20 | (v39 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v33 = *(_QWORD *)(v6 + 248);
  v21 = *(_DWORD *)(v6 + 256);
  v35 = -1;
  v34 = v21;
  v22 = *v17;
  v36 = -2;
  v37 = -2;
  if ( !v22 )
    v22 = *((_QWORD *)a1 + 4);
  v23 = *((_DWORD *)a1 + 5) == 0;
  v38 = v22;
  if ( v23 || *((_DWORD *)a1 + 6) )
    v24 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C01A1E38)(a2, &v32);
  else
    v24 = ((__int64 (__fastcall *)(int *))qword_1C01A1A38)(&v32);
  v25 = v24;
  if ( v24 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v31 = (_QWORD *)WdLogNewEntry5_WdError();
  v31[3] = v25;
  v31[4] = v38;
  v31[5] = *((int *)a1 + 13);
  v31[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v31);
  return (unsigned int)v25;
}
