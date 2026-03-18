/*
 * XREFs of ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74
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

void __fastcall CPTPEngine::FixupSecondaryGestureContacts(
        CPTPEngine *this,
        struct PTPEnginePointerNode *a2,
        unsigned int a3,
        int a4)
{
  int v4; // edi
  struct tagPOINT *v5; // r13
  __int64 v6; // rbx
  __int64 v9; // r15
  int v10; // eax
  CPTPEngine *v11; // rcx
  struct tagPOINT v12; // [rsp+70h] [rbp+40h]
  struct tagPOINT v13; // [rsp+78h] [rbp+48h] BYREF
  int v14; // [rsp+88h] [rbp+58h]

  v14 = a4;
  v4 = 0;
  v5 = (struct tagPOINT *)((char *)a2 + 40);
  v13 = 0LL;
  v6 = *((_QWORD *)a2 + 5);
  v9 = 288LL * a3;
  v10 = *(_DWORD *)((char *)this + v9 + 1168);
  if ( (v10 & 1) != 0 )
  {
    if ( !a4 )
      *(_QWORD *)((char *)this + v9 + 1188) = v6;
    if ( (v10 & 0x800) != 0 )
    {
      if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
        CPTPEngine::UpdateTPContactState(this, a3, a2);
      *((_DWORD *)a2 + 3) = 0;
    }
  }
  if ( *((_DWORD *)a2 + 3) )
  {
    v12.y = HIDWORD(v6) - *((_DWORD *)this + 737);
    v12.x = v6 - *((_DWORD *)this + 736);
    CPTPEngine::TransformHimetricDeltaToScreenDelta(this, v12, &v13);
    *((_DWORD *)a2 + 8) = v13.x + *((_DWORD *)this + 734);
    *((_DWORD *)a2 + 9) = v13.y + *((_DWORD *)this + 735);
    CPTPEngine::TransformTPScreenToHimetric(this, *(struct tagPOINT *)((char *)a2 + 32), v5);
    *((_QWORD *)a2 + 6) = *((_QWORD *)a2 + 4);
    *((struct tagPOINT *)a2 + 7) = *v5;
    *((_DWORD *)a2 + 3) &= ~0x2000u;
    if ( v14 || (*(_DWORD *)((_BYTE *)this + v9 + 1168) & 2) != 0 )
      v4 = 1;
    CPTPEngine::FixupTPPointerFlags(v11, (unsigned int *)a2 + 3, v4);
  }
  else
  {
    *v5 = 0LL;
  }
}
