/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94
 * Callers:
 *     ClientEventCallback @ 0x1C000C52C (ClientEventCallback.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     xxxClientAddFontResourceW @ 0x1C0058B94 (xxxClientAddFontResourceW.c)
 *     SfnINSTRING @ 0x1C0059620 (SfnINSTRING.c)
 *     ClientLoadLibrary @ 0x1C005A140 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C005A350 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C005C9F0 (SfnINSTRINGNULL.c)
 *     xxxClientExpandStringW @ 0x1C00DCBFC (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00FFBF0 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C0102BA0 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0109C50 (SfnCOPYDATA.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C013C9A0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FA390 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01FC3E0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01FC7A0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FE4D0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01FF5C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01FF9E0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0200910 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C0201EFC (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
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
