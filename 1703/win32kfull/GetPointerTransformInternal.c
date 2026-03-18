/*
 * XREFs of GetPointerTransformInternal @ 0x1C01BB330
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C01DA1E0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01C5E10 (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01CD3B4 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetPointerTransformInternal(__int64 a1, unsigned __int16 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v4; // rsi
  unsigned __int64 ThreadPointerData; // rdi
  __int64 v7; // rcx
  __int64 v9; // rax
  InputTransform *v10; // rbp
  unsigned __int64 *v11; // rbx
  unsigned int PointerDataQPCTimeList; // eax
  unsigned int TransformList; // edi
  __int64 v14; // rcx
  struct tagINPUT_TRANSFORM *v15; // [rsp+20h] [rbp-38h]
  char v16; // [rsp+28h] [rbp-30h]
  HWND v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-20h] BYREF
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, &v17);
  if ( !ThreadPointerData || (v9 = ValidateHwnd(v17), (v10 = (InputTransform *)v9) == 0LL) )
  {
    v7 = 87LL;
LABEL_3:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( !*(_QWORD *)(v9 + 352) )
  {
    v7 = 232LL;
    goto LABEL_3;
  }
  if ( (_DWORD)v4 == 1 )
  {
    v11 = (unsigned __int64 *)v18;
  }
  else
  {
    v11 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v4, 2020176725LL);
    if ( !v11 )
    {
      v7 = 8LL;
      goto LABEL_3;
    }
  }
  v19 = 1;
  if ( (gdwMitConfig & 4) != 0 )
    PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                               gpTouchProcessor,
                               ThreadPointerData,
                               v4,
                               v11,
                               &v19);
  else
    PointerDataQPCTimeList = GetPointerDataQPCTimeList(ThreadPointerData, v4, v11, &v19);
  TransformList = PointerDataQPCTimeList;
  if ( !PointerDataQPCTimeList )
  {
    if ( !v19 )
    {
      v14 = 232LL;
LABEL_19:
      UserSetLastError(v14);
      goto LABEL_20;
    }
LABEL_18:
    v14 = 87LL;
    goto LABEL_19;
  }
  TransformList = InputTransform::GetTransformList(
                    v10,
                    (struct tagWND *)(unsigned int)v4,
                    (unsigned int)v11,
                    a4,
                    v15,
                    v16);
  if ( !TransformList )
    goto LABEL_18;
LABEL_20:
  if ( v11 != (unsigned __int64 *)v18 )
    Win32FreePool(v11);
  return TransformList;
}
