/*
 * XREFs of ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70
 * Callers:
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18006C5D0 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18006F2A8 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180073180 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x1800716A4 (-FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 *     ?GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x180071750 (-GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 *     ?DeliverInputToTarget@PointerProcessor@@AEAAJPEAUISystemInputRouter@@PEAUIInputDisplay@@PEAUInputInfo@@PEAPEAUPointer@@KPEAUIInputTarget@@@Z @ 0x180071884 (-DeliverInputToTarget@PointerProcessor@@AEAAJPEAUISystemInputRouter@@PEAUIInputDisplay@@PEAUInpu.c)
 *     ?UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z @ 0x180071954 (-UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z.c)
 *     ?AreInRangeOrInContactPointersPresent@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEA_N1@Z @ 0x180071BE8 (-AreInRangeOrInContactPointersPresent@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEA_N1@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PointerProcessor::OnInputReport(PointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // r14
  char v5; // si
  unsigned int v6; // edi
  struct ISystemInputRouter *v7; // r12
  __int64 v8; // rdx
  struct Pointer *v9; // rcx
  char v10; // al
  int PointersFromInput; // eax
  int updated; // eax
  int v13; // eax
  bool v14; // al
  int IndexOfPrimaryPointer; // eax
  int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // esi
  struct Pointer *v19; // rcx
  int v20; // eax
  __int64 v21; // rsi
  struct Pointer *v22; // rcx
  struct Pointer *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // esi
  struct Pointer *v26; // rcx
  _DWORD *v27; // rdx
  struct Pointer **v28; // r8
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rdx
  int *v34; // r8
  struct Pointer **v35; // r9
  __int64 v36; // r10
  int v37; // r11d
  struct Pointer *v38; // rsi
  struct Pointer *v39; // rsi
  struct Pointer *v40; // rsi
  int v41; // eax
  bool v42; // cl
  struct Pointer **v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  bool v47; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v48[2]; // [rsp+48h] [rbp-C0h] BYREF
  bool v49; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h]
  struct Pointer *v52[10]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v53[40]; // [rsp+B0h] [rbp-58h] BYREF

  v51 = -2LL;
  LODWORD(v4) = 0;
  v48[0] = 0;
  v50 = 0;
  v5 = *((_BYTE *)this + 69);
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 153, 87);
    return v6;
  }
  v7 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v8 = *((_QWORD *)this + 9);
  v9 = (struct InputInfo *)((char *)a2 + 548);
  if ( a2 == (struct InputInfo *)-548LL )
  {
    v10 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 190, 87);
      v10 = Microsoft_OneCore_MinInputEnableBits;
    }
    v6 = -2147024809;
    if ( (v10 & 2) != 0 )
      McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 164, 87);
    goto LABEL_100;
  }
  *(_DWORD *)v9 = *(_DWORD *)(v8 + 84);
  PointersFromInput = GetPointersFromInput(a2, v8, v52, v48);
  v6 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 173, PointersFromInput);
    LODWORD(v4) = v48[0];
    goto LABEL_100;
  }
  v4 = v48[0];
  if ( v48[0] )
  {
    updated = PointerProcessor::UpdatePointerIds(this, *(unsigned int *)a2, v52, v48[0]);
    v6 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 180, updated);
      goto LABEL_100;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v47 = 0;
      v49 = 0;
      v13 = PointerProcessor::AreInRangeOrInContactPointersPresent(v9, v52, v4, &v47, &v49);
      v6 = v13;
      if ( v13 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 196, v13);
        goto LABEL_100;
      }
      v14 = v49;
      *((_BYTE *)this + 69) = v49;
      if ( !v14 && v47 )
      {
LABEL_28:
        *(_QWORD *)v48 = 0LL;
        if ( *((_QWORD *)this + 7) )
        {
          IndexOfPrimaryPointer = PointerProcessor::GetIndexOfPrimaryPointer(this, v52, v4, &v50);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_33;
            v16 = 239;
            goto LABEL_32;
          }
          v18 = v50;
        }
        else
        {
          IndexOfPrimaryPointer = PointerProcessor::FindNewPrimaryPointer(v9, v52, v4, &v50);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v16 = 226;
LABEL_32:
              McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, v16, IndexOfPrimaryPointer);
              goto LABEL_33;
            }
            goto LABEL_33;
          }
          v18 = v50;
          *((_DWORD *)this + 16) = *(_DWORD *)v52[v50];
        }
        v19 = v52[v18];
        if ( !*((_DWORD *)v19 + 1) )
        {
          if ( (int)PointerProcessor::FindNewPrimaryPointer(v19, v52, v4, &v50) < 0 )
            *((_BYTE *)this + 68) = 0;
          v6 = 0;
          v18 = v50;
        }
        v9 = v52[v18];
        v20 = *((_DWORD *)v9 + 1);
        if ( (v20 & 2) != 0 )
        {
          if ( *((_BYTE *)this + 68) )
          {
            v21 = *((_QWORD *)this + 7);
            if ( *(_QWORD *)v48 != v21 )
            {
              if ( v21 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*((_QWORD *)this + 7));
              v9 = *(struct Pointer **)v48;
              *(_QWORD *)v48 = v21;
              if ( v9 )
                (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v9 + 16LL))(v9);
            }
          }
          else
          {
            v22 = *(struct Pointer **)v48;
            if ( *(_QWORD *)v48 )
            {
              *(_QWORD *)v48 = 0LL;
              (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v22 + 16LL))(v22);
            }
            IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(struct ISystemInputRouter *, _QWORD, struct InputInfo *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 56LL))(
                                      v7,
                                      *((_QWORD *)this + 5),
                                      a2,
                                      v18,
                                      *((_QWORD *)this + 7),
                                      v48);
            v6 = IndexOfPrimaryPointer;
            if ( IndexOfPrimaryPointer < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_33;
              v16 = 278;
              goto LABEL_32;
            }
            *((_BYTE *)this + 68) = 1;
          }
        }
        else if ( (v20 & 1) != 0 )
        {
          v23 = *(struct Pointer **)v48;
          if ( *(_QWORD *)v48 )
          {
            *(_QWORD *)v48 = 0LL;
            (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v23 + 16LL))(v23);
          }
          IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(struct ISystemInputRouter *, _QWORD, struct InputInfo *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 56LL))(
                                    v7,
                                    *((_QWORD *)this + 5),
                                    a2,
                                    v18,
                                    *((_QWORD *)this + 7),
                                    v48);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_33;
            v16 = 294;
            goto LABEL_32;
          }
          *((_BYTE *)this + 68) = 0;
        }
        v24 = *((_QWORD *)this + 7);
        if ( v24 != *(_QWORD *)v48 )
        {
          if ( v24 )
          {
            v25 = 0;
            memset(v53, 0, sizeof(v53));
            if ( (_DWORD)v4 )
            {
              v27 = v53;
              v28 = v52;
              v29 = v4;
              do
              {
                v26 = *v28;
                v30 = *((_DWORD *)*v28 + 1);
                *v27 = v30;
                v31 = (v30 & 4) == 0;
                v32 = 0;
                if ( !v31 )
                  v32 = 4;
                *((_DWORD *)v26 + 1) = v32;
                ++v28;
                ++v27;
                --v29;
              }
              while ( v29 );
            }
            PointerProcessor::DeliverInputToTarget(
              v26,
              v7,
              *((struct IInputDisplay **)this + 5),
              a2,
              v52,
              v4,
              *((struct IInputTarget **)this + 7));
            v6 = 0;
            *((_DWORD *)a2 + 12) = 0;
            if ( (_DWORD)v4 )
            {
              v35 = v52;
              v34 = (int *)v53;
              v36 = v4;
              do
              {
                v37 = *v34;
                if ( (*v34 & 1) != 0 )
                {
                  v9 = *v35;
                  v33 = 6LL * v25;
                  *((_DWORD *)a2 + 2 * v33 + 14) = *(_DWORD *)*v35;
                  *((_DWORD *)a2 + 2 * v33 + 17) = *((_DWORD *)v9 + 3);
                  *((_DWORD *)a2 + 2 * v33 + 18) = *((_DWORD *)v9 + 4);
                  *((_DWORD *)a2 + 2 * v33 + 15) = v37;
                  ++*((_DWORD *)a2 + 12);
                  ++v25;
                }
                ++v34;
                ++v35;
                --v36;
              }
              while ( v36 );
            }
            if ( !*((_DWORD *)a2 + 12) )
            {
              v38 = *(struct Pointer **)v48;
              if ( *(_QWORD *)v48 )
              {
                *(_QWORD *)v48 = 0LL;
                (*(void (__fastcall **)(struct Pointer *, __int64, int *, struct Pointer **))(*(_QWORD *)v38 + 16LL))(
                  v38,
                  v33,
                  v34,
                  v35);
              }
              *((_BYTE *)this + 68) = 0;
            }
          }
          if ( *((_DWORD *)a2 + 162) )
          {
            IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
            v6 = IndexOfPrimaryPointer;
            if ( IndexOfPrimaryPointer < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_33;
              v16 = 376;
              goto LABEL_32;
            }
          }
          v39 = *(struct Pointer **)v48;
          if ( *((_QWORD *)this + 7) != *(_QWORD *)v48 )
          {
            if ( *(_QWORD *)v48 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 8LL))(*(_QWORD *)v48);
            v9 = (struct Pointer *)*((_QWORD *)this + 7);
            *((_QWORD *)this + 7) = v39;
            if ( v9 )
              (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        if ( !*((_QWORD *)this + 7)
          || (IndexOfPrimaryPointer = PointerProcessor::DeliverInputToTarget(
                                        v9,
                                        v7,
                                        *((struct IInputDisplay **)this + 5),
                                        a2,
                                        v52,
                                        v4,
                                        *((struct IInputTarget **)this + 7)),
              v6 = IndexOfPrimaryPointer,
              IndexOfPrimaryPointer >= 0) )
        {
          if ( *((_BYTE *)a2 + 689) )
          {
            v9 = (struct Pointer *)*((_QWORD *)this + 7);
            if ( v9 )
            {
              *((_QWORD *)this + 7) = 0LL;
              (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v9 + 16LL))(v9);
            }
            *((_BYTE *)this + 68) = 0;
          }
          v40 = *(struct Pointer **)v48;
          if ( !*(_QWORD *)v48 )
          {
LABEL_100:
            if ( (v6 & 0x80000000) == 0 )
              return v6;
            goto LABEL_101;
          }
          *(_QWORD *)v48 = 0LL;
          v17 = *(_QWORD *)v40;
          v9 = v40;
LABEL_99:
          (*(void (__fastcall **)(struct Pointer *))(v17 + 16))(v9);
          goto LABEL_100;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v16 = 390;
          goto LABEL_32;
        }
LABEL_33:
        v9 = *(struct Pointer **)v48;
        if ( !*(_QWORD *)v48 )
          goto LABEL_100;
        *(_QWORD *)v48 = 0LL;
        v17 = *(_QWORD *)v9;
        goto LABEL_99;
      }
      v5 = 1;
    }
    if ( v5 )
      goto LABEL_100;
    goto LABEL_28;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 177, 87);
LABEL_101:
  if ( v7 && (_DWORD)v4 )
  {
    v47 = 0;
    v41 = PointerProcessor::AreInRangeOrInContactPointersPresent(v9, v52, v4, 0LL, &v47);
    v42 = v47;
    if ( v41 < 0 )
      v42 = 1;
    *((_BYTE *)this + 69) = v42;
    v43 = v52;
    v44 = (unsigned int)v4;
    do
    {
      *((_DWORD *)*v43++ + 1) &= 4u;
      --v44;
    }
    while ( v44 );
    PointerProcessor::DeliverInputToTarget(
      (PointerProcessor *)v43,
      v7,
      *((struct IInputDisplay **)this + 5),
      a2,
      v52,
      v4,
      *((struct IInputTarget **)this + 7));
    v45 = *((_QWORD *)this + 7);
    if ( v45 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    *((_BYTE *)this + 68) = 0;
    return 0;
  }
  return v6;
}
