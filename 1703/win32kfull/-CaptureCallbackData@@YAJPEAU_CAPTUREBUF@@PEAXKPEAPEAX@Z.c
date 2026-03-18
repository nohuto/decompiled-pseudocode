/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14
 * Callers:
 *     ClientEventCallback @ 0x1C00073BC (ClientEventCallback.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     SfnINSTRINGNULL @ 0x1C0039AF0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x1C0039F30 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C003A350 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C003A530 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C003B3C4 (xxxClientAddFontResourceW.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00C37B4 (xxxClientLoadMenu.c)
 *     xxxClientExpandStringW @ 0x1C00C3C98 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C00EB080 (SfnINSTRING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00F0378 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7810 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00FAEC0 (SfnCOPYDATA.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C01362C0 (SfnINLPMDICREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01F89D0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01F9180 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01FA920 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01FACB0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FB040 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FC900 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01FDCE0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01FE0E0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C01FEF60 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02006E0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0200C88 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020103C (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  size_t v5; // r10
  char *v8; // rdi
  char *v10; // r8
  char *v11; // rdx

  v5 = a3;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v8 )
    v10 = a2;
  v11 = &v8[v5];
  if ( &a2[v5] < &v8[v5] )
    v11 = &a2[v5];
  if ( v10 >= v11 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, a2, v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
