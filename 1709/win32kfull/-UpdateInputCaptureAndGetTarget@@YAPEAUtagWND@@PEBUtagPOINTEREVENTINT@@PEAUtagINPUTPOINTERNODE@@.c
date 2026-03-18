/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F64D8 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C0144154 (-GetInputProcessContext@@YAKPEAX@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C01A67E8 (FindHoldingFrameForDevice.c)
 *     IsPointerInputRedirected @ 0x1C01CE4A0 (IsPointerInputRedirected.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 */

struct tagWND *__fastcall UpdateInputCaptureAndGetTarget(
        const struct tagPOINTEREVENTINT *a1,
        struct tagINPUTPOINTERNODE *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int16 *a6,
        unsigned int *a7)
{
  unsigned int *v9; // rdx
  const struct tagPOINTEREVENTINT *v10; // r8
  __int16 v11; // bx
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r15d
  int v16; // r14d
  int v17; // r15d
  int InputProcessContext; // eax
  int v19; // eax
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned int *v23; // r9
  unsigned __int16 v24; // cx
  unsigned int *v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+38h] [rbp-C8h]
  int v28; // [rsp+3Ch] [rbp-C4h]
  int v29; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  const struct tagPOINTEREVENTINT *v32; // [rsp+68h] [rbp-98h]
  _BYTE v33[80]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+CCh] [rbp-34h]

  v32 = a1;
  v9 = a7;
  v10 = a1;
  v30[0] = a4;
  v26 = a7;
  v11 = 0;
  v29 = a3 & 0x40000;
  *a7 = 0;
  v12 = (__int64 *)((char *)a2 + 48);
  v28 = a3 & 0x10000;
  v13 = *((_QWORD *)a2 + 6);
  if ( v13 && (*(char *)(v13 + 60) < 0 || *(char *)(v13 + 59) < 0) )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    v10 = v32;
  }
  v14 = *v12;
  v31 = v14;
  if ( v14 )
  {
    v15 = *((_DWORD *)a2 + 38);
    v27 = 16;
    v16 = -__CFSHR__(v15, 5);
    v17 = -__CFSHR__(v15, 6);
  }
  else
  {
    InputProcessContext = GetInputProcessContext(*((_QWORD *)v10 + 3));
    v19 = IsPointerInputRedirected(InputProcessContext, *(_QWORD *)(grpdeskRitInput + 8LL), *((_DWORD *)a2 + 10), &v31);
    v14 = v31;
    v17 = v19;
    v16 = v19;
    v27 = 0;
  }
  if ( !v14 )
  {
    LOBYTE(v9) = 1;
    v14 = HMValidateHandleNoSecure(v30[0], (__int64)v9, (__int64)v10, a4);
    HoldingFrameForDevice = FindHoldingFrameForDevice(*((_QWORD *)v32 + 3));
    if ( HoldingFrameForDevice && (v22 = *((_QWORD *)HoldingFrameForDevice + 11)) != 0 )
    {
      v23 = v26;
      if ( (*(_DWORD *)(v22 + 1920) & 0x1000000) != 0 )
      {
        v16 = 1;
        *v26 = *(_DWORD *)(v22 + 1924);
        *((_DWORD *)a2 + 38) |= 0x40u;
      }
    }
    else
    {
      v23 = v26;
    }
    if ( !v14 )
    {
      LODWORD(v26) = 0;
      xxxPointerSpeedHitTest(a5, v21 + 8, (int *)&v26, v23, (struct tagINPUTDEST *)v33);
      v14 = 0LL;
      if ( v35 == 2 )
        v14 = v34;
      if ( (_DWORD)v26 )
      {
        *((_DWORD *)a2 + 38) |= 0x40u;
        v16 = 1;
      }
    }
  }
  if ( v28 && v14 )
  {
    v30[0] = (unsigned __int64)a2 + 48;
    v30[1] = v14;
    HMAssignmentLock(v30);
    *((_DWORD *)a2 + 38) ^= (*((_DWORD *)a2 + 38) ^ (16 * v16)) & 0x10 ^ (*((_BYTE *)a2 + 152) ^ (*((_BYTE *)a2 + 152) ^ (unsigned __int8)(16 * v16)) & 0x10 ^ (unsigned __int8)(32 * v17)) & 0x20;
  }
  else if ( v29 && *v12 )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    *((_DWORD *)a2 + 38) &= 0xFFFFFFCF;
  }
  *a6 |= v27;
  if ( v16 || (*((_DWORD *)a2 + 38) & 0x40) != 0 )
    v11 = 32;
  v24 = v11 | *a6 | (v17 != 0 ? 0x40 : 0);
  *a6 = v24;
  *a6 = v24 | (2 * (*((_DWORD *)a2 + 38) & 0x40));
  return (struct tagWND *)v14;
}
