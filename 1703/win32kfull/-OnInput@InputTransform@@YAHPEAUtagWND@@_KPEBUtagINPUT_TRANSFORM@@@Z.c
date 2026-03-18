/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199818 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     InputTransformOnInput @ 0x1C01CD730 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C01CD740 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C0108538 (MagpRemoveTransformOutputMagFac.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C01CD244 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CD57C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C01CD640 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

__int64 __fastcall InputTransform::OnInput(
        struct _EX_PUSH_LOCK **this,
        struct tagWND *a2,
        struct tagWND *a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  unsigned int v4; // ebx
  struct _EX_PUSH_LOCK **v6; // rsi
  struct _EX_PUSH_LOCK *v7; // rdi
  struct _EX_PUSH_LOCK *v9; // rax
  struct tagWND *v10; // rdx
  CompositionInputObject *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[64]; // [rsp+30h] [rbp-68h] BYREF

  v4 = 0;
  v15[0] = a2;
  v6 = this;
  if ( a3 )
  {
    v10 = a3;
LABEL_12:
    InputTransform::StoreTransform(
      (InputTransform *)this,
      v10,
      (const struct tagINPUT_TRANSFORM *)v15,
      (unsigned __int64 *)a4);
    goto LABEL_4;
  }
  if ( (unsigned int)IsDwmInputThread(this, a2, 0LL, a4, v15[0]) || gptiCurrent == gptiManipulationThread )
  {
    v9 = v6[44];
    if ( v9 )
    {
      v11 = (CompositionInputObject *)*((_QWORD *)v9 + 12);
      if ( v11 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v11, (struct tagINPUT_TRANSFORM *)v16) >= 0 )
        {
          MagpRemoveTransformOutputMagFac(*(_QWORD *)(gptiRit + 408LL), v16);
          v10 = (struct tagWND *)v16;
          this = v6;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_4:
  v7 = v6[44];
  if ( !v7 )
  {
    EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v15, v6[44]);
  ClearStaleEntries(v7, (unsigned __int64)a2);
  if ( (*((_DWORD *)v7 + 22) & 1) == 0 )
    goto LABEL_19;
  v12 = Win32AllocPoolZInit(88LL, 2020176725LL);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 16) = a2;
    v13 = (__int64 *)((char *)v7 + 8);
    *(_OWORD *)(v12 + 24) = *(_OWORD *)((char *)v7 + 24);
    *(_OWORD *)(v12 + 40) = *(_OWORD *)((char *)v7 + 40);
    *(_OWORD *)(v12 + 56) = *(_OWORD *)((char *)v7 + 56);
    *(_OWORD *)(v12 + 72) = *(_OWORD *)((char *)v7 + 72);
    v14 = *((_QWORD *)v7 + 1);
    if ( *(struct _EX_PUSH_LOCK **)(v14 + 8) != (struct _EX_PUSH_LOCK *)((char *)v7 + 8) )
      __fastfail(3u);
    *(_QWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v14 + 8) = v12;
    *v13 = v12;
    *((_DWORD *)v7 + 22) &= ~1u;
LABEL_19:
    EtwTraceOnInputXformUpdate(*v6, a2, 1LL);
    v4 = 1;
    goto LABEL_20;
  }
  EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
LABEL_20:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
  return v4;
}
