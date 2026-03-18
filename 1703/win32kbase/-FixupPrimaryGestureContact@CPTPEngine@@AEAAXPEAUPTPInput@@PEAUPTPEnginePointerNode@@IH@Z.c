/*
 * XREFs of ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24
 * Callers:
 *     ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098 (-CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1C01333CC (-CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z @ 0x1C0135DD0 (-GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z.c)
 * Callees:
 *     ?FixupTPPointerFlags@CPTPEngine@@AEAAXPEAIH@Z @ 0x1C0135DA8 (-FixupTPPointerFlags@CPTPEngine@@AEAAXPEAIH@Z.c)
 *     ?TransformHimetricDeltaToScreenDelta@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C0138574 (-TransformHimetricDeltaToScreenDelta@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C01385D0 (-TransformTPScreenToHimetric@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z @ 0x1C0138AF4 (-UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z.c)
 */

void __fastcall CPTPEngine::FixupPrimaryGestureContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct PTPEnginePointerNode *a3,
        unsigned int a4,
        int a5)
{
  int v5; // edi
  struct tagPOINT *v6; // r12
  __int64 v7; // rbx
  __int64 v10; // r15
  int v11; // eax
  CPTPEngine *v12; // rcx
  struct tagPOINT v13; // [rsp+70h] [rbp+40h]
  struct PTPInput *v14; // [rsp+78h] [rbp+48h]
  struct tagPOINT v15; // [rsp+80h] [rbp+50h] BYREF

  v14 = a2;
  v5 = 0;
  v6 = (struct tagPOINT *)((char *)a3 + 40);
  v15 = 0LL;
  v7 = *((_QWORD *)a3 + 5);
  v10 = 288LL * a4;
  v11 = *(_DWORD *)((char *)this + v10 + 1168);
  if ( (v11 & 1) != 0 )
  {
    if ( !a5 )
      *(_QWORD *)((char *)this + v10 + 1188) = v7;
    if ( (v11 & 0x800) != 0 )
    {
      if ( (*((_DWORD *)a3 + 3) & 0x40000) != 0 )
      {
        CPTPEngine::UpdateTPContactState(this, a4, a3);
        a2 = v14;
      }
      *((_DWORD *)a3 + 3) = 0;
    }
  }
  if ( *((_DWORD *)a3 + 3) )
  {
    if ( a5 )
    {
      *((_DWORD *)a3 + 8) = *((_DWORD *)a2 + 7);
      *((_DWORD *)a3 + 9) = *((_DWORD *)a2 + 8);
      *((_QWORD *)this + 368) = v7;
      *((_QWORD *)this + 367) = *((_QWORD *)a3 + 4);
    }
    else
    {
      v13.y = HIDWORD(v7) - *((_DWORD *)this + 737);
      v13.x = v7 - *((_DWORD *)this + 736);
      CPTPEngine::TransformHimetricDeltaToScreenDelta(this, v13, &v15);
      *((_DWORD *)a3 + 8) = v15.x + *((_DWORD *)this + 734);
      *((_DWORD *)a3 + 9) = v15.y + *((_DWORD *)this + 735);
    }
    CPTPEngine::TransformTPScreenToHimetric(this, *(struct tagPOINT *)((char *)a3 + 32), v6);
    *((_QWORD *)a3 + 6) = *((_QWORD *)a3 + 4);
    *((struct tagPOINT *)a3 + 7) = *v6;
    if ( a5 || (*(_DWORD *)((_BYTE *)this + v10 + 1168) & 2) != 0 )
      v5 = 1;
    CPTPEngine::FixupTPPointerFlags(v12, (unsigned int *)a3 + 3, v5);
  }
  else
  {
    *v6 = 0LL;
  }
}
