/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01CA6DC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 */

struct _LIST_ENTRY *__fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *v3; // rdi
  _OWORD *v4; // rax
  __int64 v5; // r8
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r9
  __int64 v17; // r9
  struct tagPOINTERINPUTFRAME *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD v23[3]; // [rsp+30h] [rbp-1B8h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-1A0h] BYREF
  _OWORD v25[12]; // [rsp+60h] [rbp-188h] BYREF
  _DWORD v26[48]; // [rsp+120h] [rbp-C8h] BYREF

  result = (struct _LIST_ENTRY *)ValidateHwnd(*(_QWORD *)(a1 + 16));
  v3 = result;
  if ( result )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v4 = INPUTDEST_FROM_PWND(v26, (__int64)result);
      v5 = *(_QWORD *)(a1 + 40);
      v6 = v4[1];
      v25[0] = *v4;
      v7 = v4[2];
      v25[1] = v6;
      v8 = v4[3];
      v25[2] = v7;
      v9 = v4[4];
      v25[3] = v8;
      v10 = v4[5];
      v25[4] = v9;
      v11 = v4[6];
      v25[5] = v10;
      v25[6] = v11;
      v12 = v4[7];
      v4 += 8;
      v25[7] = v12;
      v13 = v4[1];
      v25[8] = *v4;
      v14 = v4[2];
      v25[9] = v13;
      v15 = v4[3];
      v25[10] = v14;
      v25[11] = v15;
      return (struct _LIST_ENTRY *)CTouchProcessor::DoDeferredPointerActivate(gpTouchProcessor, v25, v5);
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 40);
      if ( v16 )
      {
        result = FindFrameById(*(_DWORD *)(v16 + 28));
        v18 = (struct tagPOINTERINPUTFRAME *)result;
        if ( result )
        {
          _InterlockedIncrement((volatile signed __int32 *)&result[2].Flink + 1);
          v19 = (__int64)result[5].Blink + 216 * *(unsigned int *)(v17 + 32);
          PushW32ThreadLock((__int64)result, v24, (__int64)DereferencePointerInputFrame);
          v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v23;
          ++LODWORD(v3->Blink);
          v23[1] = v3;
          xxxPointerActivateInternal(
            (struct tagWND *)v3,
            -__CFSHR__(*(_DWORD *)(v19 + 4), 8),
            *(_WORD *)(v19 + 32),
            *(_QWORD *)(v19 + 16),
            (const struct tagPOINTEREVENTINT *)(v19 + 48));
          ThreadUnlock1(v21, v20);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)(ThreadWin32Thread + 16) = v24[0];
          return (struct _LIST_ENTRY *)UnreferenceFrameInt(v18);
        }
      }
    }
  }
  return result;
}
