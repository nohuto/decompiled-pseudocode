/*
 * XREFs of ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131348
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0130FD0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00185A8 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 */

void __fastcall CMouseProcessor::PrepareDataForIntercept(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        char a3,
        struct _MouseInterceptorData *a4)
{
  int *v7; // rcx
  int *v8; // r9
  int v9; // edx
  int v10; // r10d
  int v11; // edi
  unsigned __int16 v12; // cx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  *((_WORD *)a4 + 12) = *((_WORD *)a2 + 1);
  *((_WORD *)a4 + 13) = *((_WORD *)a2 + 2);
  v7 = (int *)((char *)a4 + 32);
  *((_WORD *)a4 + 14) = *((_WORD *)a2 + 3);
  v8 = (int *)((char *)a4 + 36);
  v9 = *((_DWORD *)a2 + 3);
  *v7 = v9;
  v10 = *((_DWORD *)a2 + 4);
  *v8 = v10;
  *(_QWORD *)a4 = *((_QWORD *)a2 + 4);
  *((_DWORD *)a4 + 2) = *((_DWORD *)a2 + 10);
  *((_QWORD *)a4 + 2) = *((_QWORD *)a2 + 6);
  if ( a3 )
    CMouseProcessor::ApplyAccelerationToDelta(
      this,
      v9,
      v10,
      gptCursorAsync,
      *((_BYTE *)a2 + 2) >> 7,
      (struct _SUBPIXELS *)&v15,
      v7,
      v8);
  v11 = 0;
  v12 = *((_WORD *)a2 + 2) & 0xF;
  if ( v12 && (*((_DWORD *)a2 + 14) & 0x400) == 0 )
  {
    if ( (*((_BYTE *)a2 + 4) & 3) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 2;
      v12 >>= 2;
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v13, (v12 & 2) != 0) )
      v11 = 1;
  }
  v14 = v11 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 724, 1, 1) )
    v14 = v11;
  *((_DWORD *)a4 + 10) = v14;
}
