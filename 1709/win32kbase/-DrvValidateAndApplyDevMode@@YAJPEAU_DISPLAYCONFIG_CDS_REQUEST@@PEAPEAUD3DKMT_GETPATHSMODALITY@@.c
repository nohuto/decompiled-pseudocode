/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006B444
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v15; // rcx
  struct _devicemodeW *v16; // r14
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  __int64 v24; // rax
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  int v40; // [rsp+50h] [rbp-30h] BYREF
  __int64 v41; // [rsp+54h] [rbp-2Ch]
  int v42; // [rsp+5Ch] [rbp-24h]
  int v43; // [rsp+60h] [rbp-20h]
  int v44; // [rsp+64h] [rbp-1Ch]
  int v45; // [rsp+68h] [rbp-18h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+B0h] [rbp+30h] BYREF
  int v48; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v31);
  }
  v6 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v6 + 160) & 0x800000) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v32);
  }
  v40 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v41 = *(_QWORD *)(v6 + 264);
  v7 = *(_DWORD *)(v6 + 272);
  v43 = -1;
  v42 = v7;
  v46 = *((_QWORD *)a1 + 4);
  v44 = -2;
  v45 = -2;
  v8 = ((__int64 (__fastcall *)(int *))qword_1C0190650)(&v40);
  v12 = v8;
  LODWORD(v13) = -1073741266;
  if ( v8 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v10);
    v33[3] = -1073741266LL;
    v33[4] = *((_QWORD *)a1 + 4);
    v33[5] = *((int *)a1 + 13);
    v33[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v33);
    return (unsigned int)v13;
  }
  result = 3221225485LL;
  if ( (_DWORD)v12 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v12 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v38[3] = v12;
    v38[4] = *((_QWORD *)a1 + 4);
    v38[5] = *((int *)a1 + 13);
    v38[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v38);
    return (unsigned int)v12;
  }
  v15 = *a2;
  v16 = 0LL;
  if ( *a2 )
  {
    v17 = 0;
    if ( *((_WORD *)v15 + 10) )
    {
      while ( 1 )
      {
        v18 = 264LL * v17;
        if ( *(_DWORD *)((char *)v15 + v18 + 72) == *(_DWORD *)(v6 + 272)
          && *(_DWORD *)((char *)v15 + v18 + 64) == *(_DWORD *)(v6 + 264)
          && *(_DWORD *)((char *)v15 + v18 + 68) == *(_DWORD *)(v6 + 268) )
        {
          break;
        }
        if ( ++v17 >= *((unsigned __int16 *)v15 + 10) )
          goto LABEL_15;
      }
      v16 = *(struct _devicemodeW **)((char *)v15 + v18 + 264);
    }
  }
LABEL_15:
  v19 = (__int64 *)((char *)a1 + 40);
  v20 = *((_QWORD *)a1 + 5);
  if ( v20 )
  {
    Win32FreePool(v20);
    *v19 = 0LL;
  }
  v21 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v6,
          (struct _devicemodeW **)a1 + 5,
          &v48,
          &v47,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v16);
  v13 = v21;
  if ( v21 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
    v37[3] = v13;
    v37[4] = *((_QWORD *)a1 + 4);
    v37[5] = *((int *)a1 + 13);
    v37[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v37);
    return (unsigned int)v13;
  }
  if ( *((_DWORD *)a1 + 4) && v47 )
    v22 = 8;
  else
    v22 = 0;
  v40 = v22 | (v47 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v41 = *(_QWORD *)(v6 + 264);
  v23 = *(_DWORD *)(v6 + 272);
  v43 = -1;
  v42 = v23;
  v24 = *v19;
  v44 = -2;
  v45 = -2;
  if ( !v24 )
    v24 = *((_QWORD *)a1 + 4);
  v25 = *((_DWORD *)a1 + 5) == 0;
  v46 = v24;
  if ( v25 || *((_DWORD *)a1 + 6) )
    v26 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C0190A68)(a2, &v40);
  else
    v26 = ((__int64 (__fastcall *)(int *))qword_1C0190650)(&v40);
  v30 = v26;
  if ( v26 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v39 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
  v39[3] = v30;
  v39[4] = v46;
  v39[5] = *((int *)a1 + 13);
  v39[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v39);
  return (unsigned int)v30;
}
