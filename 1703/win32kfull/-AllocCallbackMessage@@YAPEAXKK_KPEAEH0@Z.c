/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288
 * Callers:
 *     ClientEventCallback @ 0x1C00073BC (ClientEventCallback.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     SfnINSTRINGNULL @ 0x1C0039AF0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x1C0039F30 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C003A350 (ClientLoadLibrary.c)
 *     xxxClientAddFontResourceW @ 0x1C003B3C4 (xxxClientAddFontResourceW.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00C37B4 (xxxClientLoadMenu.c)
 *     xxxClientExpandStringW @ 0x1C00C3C98 (xxxClientExpandStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00C3FA0 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1C00C4758 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C00C51DC (ClientGetListboxString.c)
 *     xxxClientCallDitThread @ 0x1C00C56DC (xxxClientCallDitThread.c)
 *     SfnINSTRING @ 0x1C00EB080 (SfnINSTRING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00F0378 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7810 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00FAEC0 (SfnCOPYDATA.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C0113458 (xxxClientCallDevCallbackCapture.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C01362C0 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01F89D0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01F9180 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01F9C30 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FA170 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01FA920 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01FACB0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FB040 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FC900 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01FDCE0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01FE0E0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C01FEF60 (SfnTOUCHHITTESTING.c)
 *     xxxClientCallManipulationThread @ 0x1C01FF9F0 (xxxClientCallManipulationThread.c)
 *     xxxClientFindMnemChar @ 0x1C02006E0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0200C88 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020103C (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rcx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_8;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v8 + v9), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_8:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
