/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C009BD80
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  unsigned int v7; // ebx
  struct DXGPROCESS *v9; // rax
  _QWORD *v10; // rax
  struct DXGPROCESS *v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = a3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2000);
  if ( v4 == 1 )
  {
    if ( *(_WORD *)a2 == 392 && *((_WORD *)a2 + 1) == 5 )
    {
      v7 = 0;
      if ( (int)DXGPROCESS::CreateDxgProcess(&v11, 0, 0LL) >= 0 )
      {
        v9 = v11;
        *a1 = v11;
        *((_QWORD *)v9 + 9) = a2;
      }
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      v10[3] = *((unsigned __int16 *)a2 + 1);
      v10[4] = *(unsigned __int16 *)a2;
      v10[5] = 5LL;
      v10[6] = 392LL;
      WdLogEvent5_WdAssertion(v10);
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = 0;
    *a1 = 0LL;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 2000);
  return v7;
}
