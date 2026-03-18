/*
 * XREFs of xxxCallCtfHook @ 0x1C005BCB8
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C005C594 (fnHkINDWORD.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     fnHkINLPMSG @ 0x1C00AA9D0 (fnHkINLPMSG.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0108254 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0116658 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // ebx
  int v14; // ebx
  int v15; // ebx
  unsigned int ThreadId; // eax
  int v17; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]

  v4 = a1;
  v5 = 0;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v17 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 840LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 432LL) )
        {
          if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x400) == 0
            || (ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                v18[1] = 0,
                v18[0] = ThreadId,
                v21 = a2,
                v20 = a3,
                v19 = a4,
                !(unsigned int)xxxCallHook(0LL, v4, v18, 9LL)) )
          {
            v10 = v4 - 2;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( !v11 )
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0, *(_QWORD *)(gpsi + 840LL), 0, (__int64)&v17);
              v14 = v11 - 2;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( !v15 )
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                         v9,
                                         a3,
                                         a4,
                                         0,
                                         *(_QWORD *)(gpsi + 840LL),
                                         (__int64)&v17);
                if ( v15 != 3 || a2 == 5 )
                  return v5;
              }
              else if ( a2 == 5 )
              {
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, a4, 0, *(_QWORD *)(gpsi + 840LL));
              }
            }
            return (unsigned int)fnHkINDWORD(v9, a3, a4, 0, *(_QWORD *)(gpsi + 840LL), (__int64)&v17);
          }
        }
      }
    }
  }
  return 0LL;
}
