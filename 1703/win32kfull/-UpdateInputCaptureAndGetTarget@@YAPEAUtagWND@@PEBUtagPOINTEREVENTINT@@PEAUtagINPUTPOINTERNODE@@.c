/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01EA710
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01EA5C0 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C013DFEC (-GetInputProcessContext@@YAKPEAX@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C019AB7C (FindHoldingFrameForDevice.c)
 *     IsPointerInputRedirected @ 0x1C01CA068 (IsPointerInputRedirected.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 */

struct tagWND *__fastcall UpdateInputCaptureAndGetTarget(
        const struct tagPOINTEREVENTINT *a1,
        struct tagINPUTPOINTERNODE *a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int16 *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r13
  unsigned int **v8; // r15
  __int16 v9; // bx
  int v10; // r12d
  __int64 v12; // rax
  unsigned int *v13; // rsi
  int v14; // r13d
  int v15; // ebp
  int v16; // r14d
  int InputProcessContext; // eax
  int v18; // eax
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  struct tagWND *result; // rax
  _QWORD v23[11]; // [rsp+20h] [rbp-58h] BYREF
  const struct tagPOINTEREVENTINT *v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+10h]

  v24 = a1;
  v7 = a7;
  v8 = (unsigned int **)((char *)a2 + 48);
  v9 = 0;
  v25 = a3 & 0x10000;
  v10 = a3 & 0x40000;
  *a7 = 0;
  v12 = *((_QWORD *)a2 + 6);
  if ( v12 && (*(char *)(v12 + 60) < 0 || *(char *)(v12 + 59) < 0) )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    a1 = v24;
  }
  v13 = *v8;
  a7 = v13;
  if ( v13 )
  {
    v14 = 1;
    v15 = -__CFSHR__(*((_DWORD *)a2 + 38), 5);
    v16 = -__CFSHR__(*((_DWORD *)a2 + 38), 6);
  }
  else
  {
    InputProcessContext = GetInputProcessContext(*((_QWORD *)a1 + 3), (__int64)a2);
    v18 = IsPointerInputRedirected(InputProcessContext, *(_QWORD *)(grpdeskRitInput + 8LL), *((_DWORD *)a2 + 10), &a7);
    v13 = a7;
    v16 = v18;
    v15 = v18;
    if ( a7 )
      goto LABEL_15;
    v13 = (unsigned int *)HMValidateHandleNoSecure(a4, 1);
    HoldingFrameForDevice = FindHoldingFrameForDevice(*((_QWORD *)v24 + 3));
    if ( HoldingFrameForDevice )
    {
      v21 = *((_QWORD *)HoldingFrameForDevice + 11);
      if ( v21 )
      {
        if ( (*(_DWORD *)(v21 + 1920) & 0x1000000) != 0 )
        {
          v15 = 1;
          *v7 = *(_DWORD *)(v21 + 1924);
          *((_DWORD *)a2 + 38) |= 0x40u;
        }
      }
    }
    if ( v13 )
    {
LABEL_15:
      v14 = 0;
    }
    else
    {
      LODWORD(a7) = 0;
      v13 = (unsigned int *)xxxPointerSpeedHitTest(a5, v20 + 8, (int *)&a7, v7);
      v14 = 0;
      if ( (_DWORD)a7 )
      {
        *((_DWORD *)a2 + 38) |= 0x40u;
        v15 = 1;
      }
    }
  }
  if ( v25 && v13 )
  {
    v23[0] = v8;
    v23[1] = v13;
    HMAssignmentLock(v23);
    *((_DWORD *)a2 + 38) ^= (*((_DWORD *)a2 + 38) ^ (16 * v15)) & 0x10 ^ (*((_BYTE *)a2 + 152) ^ (*((_BYTE *)a2 + 152) ^ (unsigned __int8)(16 * v15)) & 0x10 ^ (unsigned __int8)(32 * v16)) & 0x20;
  }
  else if ( v10 && *v8 )
  {
    HMAssignmentUnlock(v8);
    *((_DWORD *)a2 + 38) &= 0xFFFFFFCF;
  }
  *a6 |= v14 != 0 ? 0x10 : 0;
  if ( v15 || (*((_DWORD *)a2 + 38) & 0x40) != 0 )
    v9 = 32;
  result = (struct tagWND *)v13;
  *a6 |= (2 * (*((_BYTE *)a2 + 152) & 0x40)) | (v16 != 0 ? 0x40 : 0) | v9;
  return result;
}
