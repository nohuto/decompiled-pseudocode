/*
 * XREFs of ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4
 * Callers:
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01CC7A4 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB838 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01CBE30 (-PointerFlagsToMessage@@YAII@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01CC00C (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ValidatePointerOffset @ 0x1C01D63E0 (ValidatePointerOffset.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F6020 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F63C8 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall xxxDeterminePointerTargetWindow(
        struct tagTHREADINFO *a1,
        const struct tagPOINTERINFONODE *a2,
        struct tagQ *a3,
        unsigned int a4,
        int *a5,
        struct tagPOINT *a6)
{
  unsigned __int16 v7; // r14
  PointerList *v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // r10
  __int64 v13; // rdi
  struct tagPOINT *v14; // r8
  int v15; // r15d
  int v16; // eax
  struct tagWND *result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r10
  struct tagWND *v32; // r11
  __int64 v33; // rax
  const struct tagPOINT *v34; // r8
  struct tagPOINT *v35; // rdi
  struct tagPOINT v36; // [rsp+60h] [rbp-19h] BYREF
  struct tagWND *v37; // [rsp+68h] [rbp-11h] BYREF
  __int64 v38; // [rsp+70h] [rbp-9h] BYREF
  __int64 v39; // [rsp+78h] [rbp-1h]
  int v40; // [rsp+D8h] [rbp+5Fh] BYREF
  int v41; // [rsp+E8h] [rbp+6Fh]

  v41 = a4;
  v7 = *((_WORD *)a2 + 30);
  v10 = (PointerList *)*((_QWORD *)a2 + 2);
  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(gptiRit + 432LL) + 8LL);
  v36 = 0LL;
  v13 = *(_QWORD *)(v12 + 16);
  v15 = RecheckPointerCapture(v10, a4, &v37, &v40);
  if ( !v15 )
  {
    v16 = *((_DWORD *)a2 + 17);
    if ( (v16 & 0x40004) != 0 && (v16 & 0x10000) == 0 )
      return 0LL;
  }
  PointerList::GetPointerOffset((PointerList *)v7, (unsigned __int16)&v36, v14);
  if ( !v15 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x80u) != 0 )
    {
      LOBYTE(v18) = 1;
      v26 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), v18, v19, v20);
      if ( !v26 )
      {
LABEL_13:
        LOBYTE(v27) = 1;
        v33 = HMValidateHandleNoSecure(v11, v27, v28, v29);
        v37 = (struct tagWND *)v33;
        if ( v33 )
        {
          if ( *(char *)(v33 + 60) < 0 || *(char *)(v33 + 59) < 0 )
          {
            v33 = 0LL;
            v37 = 0LL;
          }
          if ( v33 )
            PointerList::SetPointerOffset((PointerList *)v7, (unsigned __int16)&v36, v34);
        }
        if ( !(unsigned int)IsPointerInfoNodeValid(a2) || (unsigned int)IsTargetSetForRetrieval(a1, a2) )
          return 0LL;
        RecheckPointerCapture(*((PointerList **)a2 + 2), (unsigned int)v41, &v37, &v40);
        goto LABEL_22;
      }
      v38 = *((_QWORD *)a1 + 49);
      *((_QWORD *)a1 + 49) = &v38;
      v39 = v26;
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v23 = xxxPointerWindowHitTest(
              a1,
              v32,
              v31,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v40,
              9,
              v30,
              *((_QWORD *)a2 + 2),
              &v36);
    }
    else
    {
      v38 = *((_QWORD *)a1 + 49);
      *((_QWORD *)a1 + 49) = &v38;
      v39 = v13;
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v23 = xxxPointerWindowHitTest(
              a1,
              (struct tagWND *)v13,
              v22,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v40,
              1,
              v21,
              *((_QWORD *)a2 + 2),
              &v36);
    }
    v11 = v23;
    ThreadUnlock1(v25, v24);
    goto LABEL_13;
  }
LABEL_22:
  v35 = a6;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ValidatePointerOffset)(
                        *((_QWORD *)a2 + 11),
                        (char *)a2 + 48,
                        v36,
                        a6) )
    *v35 = 0LL;
  result = v37;
  if ( v37 )
  {
    if ( a3 && *(struct tagQ **)(*((_QWORD *)v37 + 2) + 408LL) != a3 )
      result = 0LL;
    if ( result )
      *a5 = v40;
  }
  return result;
}
