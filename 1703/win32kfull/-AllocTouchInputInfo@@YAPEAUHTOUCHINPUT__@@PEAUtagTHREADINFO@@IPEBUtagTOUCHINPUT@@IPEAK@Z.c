/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01B7374
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01B76DC (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  const struct tagTOUCHINPUT *v6; // r14
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  struct HTOUCHINPUT__ *result; // rax
  ULONG v13; // eax

  v6 = a3;
  if ( a2 && (v7 = 48LL * (a2 - 1), v7 <= 0xFFFFFFFF) && (v8 = v7 + 80, v8 >= 0x50) )
    v9 = v8;
  else
    v9 = 0LL;
  if ( (_DWORD)v9 && 48 * (unsigned __int64)a2 <= 0xFFFFFFFF )
  {
    LOBYTE(a3) = 20;
    v10 = HMAllocObject(a1, 0LL, a3, v9);
    v11 = v10;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 24) = a2;
      memmove((void *)(v10 + 32), v6, 48 * a2);
      result = *(struct HTOUCHINPUT__ **)v11;
      *(_DWORD *)(v11 + 28) = a4;
      return result;
    }
  }
  else
  {
    v13 = RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v13);
  }
  return 0LL;
}
