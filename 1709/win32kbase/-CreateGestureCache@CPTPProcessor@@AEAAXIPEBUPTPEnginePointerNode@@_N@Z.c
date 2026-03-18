/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012A90C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStart @ 0x1C00DFF40 (EtwTraceCopyPointerInputFrameStart.c)
 *     EtwTraceCopyPointerInputFrameStop @ 0x1C00DFF70 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011B604 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@@Z @ 0x1C012A87C (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012A9EC (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 */

void __fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        unsigned int a2,
        const struct PTPEnginePointerNode *a3,
        char a4)
{
  struct CPointerInputFrame *v8; // rsi
  __int64 v9; // rcx
  CPTPProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // edx
  _DWORD *v15; // rcx

  EtwTraceCopyPointerInputFrameStart((__int64)this);
  v8 = CTouchProcessor::CopyPTPPointerInputFrame(
         (PERESOURCE *)this,
         *((struct CPointerInputFrame **)this + 99),
         *((_QWORD *)this + 98));
  EtwTraceCopyPointerInputFrameStop(v9);
  v13 = 0;
  if ( v8 )
  {
    *((_QWORD *)this + 97) = v8;
    if ( !a4 )
    {
      v14 = -1;
      if ( a2 )
      {
        v15 = (_DWORD *)((char *)a3 + 12);
        while ( (*v15 & 0x2000) == 0 )
        {
          v15 += 24;
          if ( ++v13 >= a2 )
            goto LABEL_9;
        }
        v14 = v13;
      }
LABEL_9:
      CPTPProcessor::HitTestPrimaryContact(this, (const struct PTPEnginePointerNode *)((char *)a3 + 96 * v14));
    }
    CPTPProcessor::CopyPointersIntoFrame(v10, v8, v11, v12, a3);
  }
}
