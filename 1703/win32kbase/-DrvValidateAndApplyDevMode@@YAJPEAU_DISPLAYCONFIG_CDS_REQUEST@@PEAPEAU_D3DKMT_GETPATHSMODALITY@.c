/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005A7BC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct _D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 result; // rax
  struct _D3DKMT_GETPATHSMODALITY *v13; // rcx
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  int v38; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+54h] [rbp-2Ch]
  int v40; // [rsp+5Ch] [rbp-24h]
  int v41; // [rsp+60h] [rbp-20h]
  int v42; // [rsp+64h] [rbp-1Ch]
  int v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  int v45; // [rsp+B0h] [rbp+30h] BYREF
  int v46; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  v38 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v39 = *(_QWORD *)(v4 + 264);
  v5 = *(_DWORD *)(v4 + 272);
  v41 = -1;
  v40 = v5;
  v44 = *((_QWORD *)a1 + 4);
  v42 = -2;
  v43 = -2;
  v6 = ((__int64 (__fastcall *)(int *))qword_1C018B9E8)(&v38);
  v10 = v6;
  LODWORD(v11) = -1073741266;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v8);
    v31[3] = -1073741266LL;
    v31[4] = *((_QWORD *)a1 + 4);
    v31[5] = *((int *)a1 + 13);
    v31[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v31);
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
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v36[3] = v10;
    v36[4] = *((_QWORD *)a1 + 4);
    v36[5] = *((int *)a1 + 13);
    v36[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v36);
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
        v16 = 264LL * v15;
        if ( *(_DWORD *)((char *)v13 + v16 + 72) == *(_DWORD *)(v4 + 272)
          && *(_DWORD *)((char *)v13 + v16 + 64) == *(_DWORD *)(v4 + 264)
          && *(_DWORD *)((char *)v13 + v16 + 68) == *(_DWORD *)(v4 + 268) )
        {
          break;
        }
        if ( ++v15 >= *((unsigned __int16 *)v13 + 10) )
          goto LABEL_15;
      }
      v14 = *(struct _devicemodeW **)((char *)v13 + v16 + 232);
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
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 5,
          &v46,
          &v45,
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
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
    v35[3] = v11;
    v35[4] = *((_QWORD *)a1 + 4);
    v35[5] = *((int *)a1 + 13);
    v35[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v35);
    return (unsigned int)v11;
  }
  if ( *((_DWORD *)a1 + 4) && v45 )
    v20 = 8;
  else
    v20 = 0;
  v38 = v20 | (v45 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v39 = *(_QWORD *)(v4 + 264);
  v21 = *(_DWORD *)(v4 + 272);
  v41 = -1;
  v40 = v21;
  v22 = *v17;
  v42 = -2;
  v43 = -2;
  if ( !v22 )
    v22 = *((_QWORD *)a1 + 4);
  v23 = *((_DWORD *)a1 + 5) == 0;
  v44 = v22;
  if ( v23 || *((_DWORD *)a1 + 6) )
    v24 = ((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY **, int *))qword_1C018BDE8)(a2, &v38);
  else
    v24 = ((__int64 (__fastcall *)(int *))qword_1C018B9E8)(&v38);
  v28 = v24;
  if ( v24 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
  v37[3] = v28;
  v37[4] = v44;
  v37[5] = *((int *)a1 + 13);
  v37[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v37);
  return (unsigned int)v28;
}
