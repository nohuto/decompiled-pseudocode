/*
 * XREFs of ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01C78B0
 * Callers:
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01C7B64 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6B94 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01C71E4 (-PointerFlagsToMessage@@YAII@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01C73C0 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ValidatePointerOffset @ 0x1C01D1DE0 (ValidatePointerOffset.c)
 *     xxxPointerWindowHitTest @ 0x1C01D237C (xxxPointerWindowHitTest.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01EA088 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01EA4B0 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
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
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct tagWND *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rax
  const struct tagPOINT *v29; // r8
  struct tagPOINT *v30; // rdi
  struct tagPOINT v31; // [rsp+60h] [rbp-19h] BYREF
  struct tagWND *v32; // [rsp+68h] [rbp-11h] BYREF
  __int64 v33; // [rsp+70h] [rbp-9h] BYREF
  __int64 v34; // [rsp+78h] [rbp-1h]
  int v35; // [rsp+D8h] [rbp+5Fh] BYREF
  int v36; // [rsp+E8h] [rbp+6Fh]

  v36 = a4;
  v7 = *((_WORD *)a2 + 30);
  v10 = (PointerList *)*((_QWORD *)a2 + 2);
  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL);
  v31 = 0LL;
  v13 = *(_QWORD *)(v12 + 16);
  v15 = RecheckPointerCapture(v10, a4, &v32, &v35);
  if ( !v15 )
  {
    v16 = *((_DWORD *)a2 + 17);
    if ( (v16 & 0x40004) != 0 && (v16 & 0x10000) == 0 )
      return 0LL;
  }
  PointerList::GetPointerOffset((PointerList *)v7, (unsigned __int16)&v31, v14);
  if ( !v15 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x80u) != 0 )
    {
      v23 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), 1);
      v24 = (struct tagWND *)v23;
      if ( !v23 )
      {
LABEL_13:
        v28 = HMValidateHandleNoSecure(v11, 1);
        v32 = (struct tagWND *)v28;
        if ( v28 )
        {
          if ( *(char *)(v28 + 60) < 0 || *(char *)(v28 + 59) < 0 )
          {
            v28 = 0LL;
            v32 = 0LL;
          }
          if ( v28 )
            PointerList::SetPointerOffset((PointerList *)v7, (unsigned __int16)&v31, v29);
        }
        if ( !(unsigned int)IsPointerInfoNodeValid(a2) || (unsigned int)IsTargetSetForRetrieval(a1, a2) )
          return 0LL;
        RecheckPointerCapture(*((PointerList **)a2 + 2), (unsigned int)v36, &v32, &v35);
        goto LABEL_22;
      }
      v25 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v33;
      v33 = v25;
      v34 = v23;
      ++*(_DWORD *)(v23 + 8);
      PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v20 = xxxPointerWindowHitTest(
              a1,
              v24,
              v27,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v35,
              9,
              v26,
              *((_QWORD *)a2 + 2),
              &v31);
    }
    else
    {
      v33 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v33;
      v34 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v20 = xxxPointerWindowHitTest(
              a1,
              (struct tagWND *)v13,
              v19,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v35,
              1,
              v18,
              *((_QWORD *)a2 + 2),
              &v31);
    }
    v11 = v20;
    ThreadUnlock1(v22, v21);
    goto LABEL_13;
  }
LABEL_22:
  v30 = a6;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ValidatePointerOffset)(
                        *((_QWORD *)a2 + 11),
                        (char *)a2 + 48,
                        v31,
                        a6) )
    *v30 = 0LL;
  result = v32;
  if ( v32 )
  {
    if ( a3 && *(struct tagQ **)(*((_QWORD *)v32 + 2) + 384LL) != a3 )
      result = 0LL;
    if ( result )
      *a5 = v35;
  }
  return result;
}
