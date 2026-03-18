/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     InputTransformOnInput @ 0x1C01D18B0 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C01D18D0 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006E78 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0009DA4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C0103404 (MagpRemoveTransformOutputMagFac.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InputTransform::OnInput(
        struct _EX_PUSH_LOCK **this,
        struct tagWND *a2,
        struct tagWND *a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  unsigned int v4; // ebx
  struct _EX_PUSH_LOCK **v6; // r15
  struct _EX_PUSH_LOCK *v7; // rax
  struct _EX_PUSH_LOCK *v8; // rdi
  CompositionInputObject *v10; // rcx
  struct tagWND *v11; // rdx
  __int64 *v12; // rsi
  __int64 **v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rcx
  __int64 **v21; // rax
  __int64 *v22; // rbp
  _QWORD v23[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v24[64]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v23[0] = a2;
  v6 = this;
  if ( a3 )
  {
    v11 = a3;
    goto LABEL_9;
  }
  if ( (unsigned int)IsDwmInputThread(this, a2, 0LL, a4, v23[0]) || gptiCurrent == gptiManipulationThread )
  {
    v7 = v6[44];
    if ( v7 )
    {
      v10 = (CompositionInputObject *)*((_QWORD *)v7 + 12);
      if ( v10 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v10, (struct tagINPUT_TRANSFORM *)v24) >= 0 )
        {
          MagpRemoveTransformOutputMagFac(v24);
          v11 = (struct tagWND *)v24;
          this = v6;
LABEL_9:
          InputTransform::StoreTransform(
            (InputTransform *)this,
            v11,
            (const struct tagINPUT_TRANSFORM *)v23,
            (unsigned __int64 *)a4);
        }
      }
    }
  }
  v8 = v6[44];
  if ( !v8 )
  {
    EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v23, v6[44]);
  v12 = (__int64 *)((char *)v8 + 8);
  v13 = (__int64 **)*((_QWORD *)v8 + 1);
  if ( v13 != (__int64 **)((char *)v8 + 8) && v13 != *((__int64 ***)v8 + 2) )
  {
    v16 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v16 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v17 = *v13;
      if ( *v13 != v12 )
      {
        do
        {
          if ( a2 - (struct tagWND *)v13[2] > v16 )
            break;
          v13 = (__int64 **)v17;
          v17 = (__int64 *)*v17;
        }
        while ( v17 != v12 );
        while ( 1 )
        {
          v22 = *v13;
          if ( *v13 == v12 )
            break;
          EtwTraceTransformAgeDecay(v8, v22[2]);
          v20 = (__int64 *)*v22;
          if ( *(__int64 **)(*v22 + 8) != v22 || (v21 = (__int64 **)v22[1], *v21 != v22) )
            __fastfail(3u);
          *v21 = v20;
          v20[1] = (__int64)v21;
          Win32FreePool(v22, v18, v19);
          *((_DWORD *)v8 + 22) |= 2u;
        }
      }
    }
  }
  if ( (*((_DWORD *)v8 + 22) & 1) != 0 )
  {
    v14 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( !v14 )
    {
      EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
      goto LABEL_14;
    }
    *(_QWORD *)(v14 + 16) = a2;
    *(_OWORD *)(v14 + 24) = *(_OWORD *)((char *)v8 + 24);
    *(_OWORD *)(v14 + 40) = *(_OWORD *)((char *)v8 + 40);
    *(_OWORD *)(v14 + 56) = *(_OWORD *)((char *)v8 + 56);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)((char *)v8 + 72);
    v15 = *v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      __fastfail(3u);
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v12;
    *(_QWORD *)(v15 + 8) = v14;
    *v12 = v14;
    *((_DWORD *)v8 + 22) &= ~1u;
  }
  EtwTraceOnInputXformUpdate(*v6, a2, 1LL);
  v4 = 1;
LABEL_14:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
  return v4;
}
