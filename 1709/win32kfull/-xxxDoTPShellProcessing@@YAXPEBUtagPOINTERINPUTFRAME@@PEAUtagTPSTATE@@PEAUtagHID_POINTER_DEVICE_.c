/*
 * XREFs of ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01B217C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AE464 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AE7B0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3D44 (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 */

void __fastcall xxxDoTPShellProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        void *a4,
        unsigned int a5,
        int *a6)
{
  LARGE_INTEGER *v6; // r10
  struct tagPOINTERINFONODE *v7; // rsi
  unsigned int v8; // r14d
  unsigned int v13; // edi
  LARGE_INTEGER *v14; // rdx
  DWORD LowPart; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int ActionAfterKey; // eax
  BOOL v22; // ecx
  LARGE_INTEGER v23; // r8
  unsigned int v24; // r9d
  unsigned int *v25; // r8
  unsigned __int16 v26; // ax
  _QWORD *v27; // rax
  _QWORD *QuadPart; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct tagPOINTERINFONODE *v32; // rax

  v6 = a2 + 204;
  v7 = 0LL;
  v8 = 0;
  v13 = a5;
  v14 = a2 + 33;
  do
  {
    LowPart = v14->LowPart;
    if ( (v14->LowPart & 1) != 0 )
    {
      if ( (LowPart & 0x80u) == 0 )
      {
        v16 = LowPart & 0xFFFFFBFF;
      }
      else
      {
        v16 = LowPart | 0x400;
        --v13;
      }
      v14->LowPart = v16;
    }
    v14 += 34;
  }
  while ( &v14[-33] != v6 );
  if ( a2[208].LowPart == 6 )
    goto LABEL_30;
  v8 = 1;
  a2[208].LowPart = 6;
  zzzCancelInertiaState((struct tagTPSTATE *)a2, 1);
  ActionAfterKey = IsFirstActionAfterKey(v18, v17, v19, v20);
  v22 = v13 != 3;
  if ( ActionAfterKey )
    *((_DWORD *)&gTPTelemTimings + 10) = v22 + 11;
  else
    *((_DWORD *)&gTPTelemTimings + 11) = v22 + 11;
  if ( v13 == 3 )
    ++*((_DWORD *)&gTPTelemState + 9);
  else
    ++*((_DWORD *)&gTPTelemState + 10);
  ++*((_DWORD *)&gTPTelemState + 13);
  a2[233] = KeQueryPerformanceCounter(0LL);
  if ( !a2[239].QuadPart )
  {
    v32 = FindOrAssignPrimary(a1, (struct tagTPSTATE *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v23.QuadPart);
    v7 = v32;
    if ( !v32 )
      return;
    if ( (a2[240].LowPart & 0x400) != 0 )
      *((_DWORD *)v32 + 17) |= 0x2000u;
    goto LABEL_30;
  }
  v24 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    v25 = (unsigned int *)(*((_QWORD *)a1 + 11) + 68LL);
    do
    {
      v26 = *((_WORD *)v25 - 10);
      if ( v26 && (a2[34 * ((unsigned int)v26 % a2[205].HighPart) + 33].LowPart & 0x400) == 0 && (*v25 & 0x10000) != 0 )
        *v25 = *v25 & 0xFFFCFFFF | 0x20000;
      v25 += 54;
      ++v24;
    }
    while ( v24 < *((_DWORD *)a1 + 10) );
  }
  v27 = (_QWORD *)qword_1C032FA88;
  QuadPart = (_QWORD *)a2[239].QuadPart;
  if ( *(_UNKNOWN **)qword_1C032FA88 != &gFrameTPListHead )
    __fastfail(3u);
  *QuadPart = &gFrameTPListHead;
  QuadPart[1] = v27;
  *v27 = QuadPart;
  qword_1C032FA88 = (__int64)QuadPart;
  a2[239].QuadPart = 0LL;
  xxxGeneratePointerInputMessages(a4);
  LOBYTE(v29) = 19;
  if ( HMValidateHandleNoSecure((unsigned __int64)a4, v29, v30, v31) )
LABEL_30:
    GestureContactProcessing(a1, v7, (struct tagTPSTATE *)a2, a3, v8, 1, a5, a6);
}
