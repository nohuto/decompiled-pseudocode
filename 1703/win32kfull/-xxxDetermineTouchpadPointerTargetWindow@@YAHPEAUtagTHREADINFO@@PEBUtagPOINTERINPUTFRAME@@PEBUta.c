/*
 * XREFs of ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01C7B64
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01C73C0 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01C78B0 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01EA088 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxDetermineTouchpadPointerTargetWindow(
        struct tagTHREADINFO *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        const struct tagPOINTERINFONODE *a3,
        struct tagQ *a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        struct tagPOINT *a8,
        struct tagWND **a9)
{
  struct tagPOINT *v12; // rsi
  int *v13; // r14
  struct tagWND *v14; // rax
  struct tagWND *v15; // rdx
  int *v16; // rsi
  struct tagPOINT *v17; // r8
  __int64 result; // rax
  __int64 v19; // rax
  struct tagPOINT *v20; // rcx
  struct tagWND *v21; // [rsp+58h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 18) & 0x10) != 0 && !a5 )
    memset((char *)a4 + 400, 0, 0x20uLL);
  if ( (*((_DWORD *)a3 + 17) & 0x2000) != 0 )
  {
    v12 = a8;
    v13 = a7;
    v14 = xxxDeterminePointerTargetWindow(a1, a3, a4, a6, a7, a8);
    v15 = v14;
    if ( (*((_DWORD *)a3 + 17) & 0x10000) != 0 )
    {
      *((_DWORD *)a4 + 100) = 1;
      if ( v14 )
      {
        *((_QWORD *)a4 + 51) = *(_QWORD *)v14;
        *((_DWORD *)a4 + 104) = *v13;
        *(struct tagPOINT *)((char *)a4 + 420) = *v12;
      }
    }
  }
  else
  {
    v16 = a7;
    if ( (unsigned int)RecheckPointerCapture(*((PointerList **)a3 + 2), a6, &v21, a7) )
    {
      PointerList::GetPointerOffset((PointerList *)*((unsigned __int16 *)a3 + 30), (unsigned __int16)a8, v17);
      v15 = v21;
    }
    else
    {
      if ( !*((_DWORD *)a4 + 100) )
        return 0LL;
      v19 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 51), 1);
      v15 = (struct tagWND *)v19;
      if ( !v19 )
        goto LABEL_18;
      if ( *(char *)(v19 + 60) < 0 || *(char *)(v19 + 59) < 0 )
        v15 = 0LL;
      if ( v15 )
      {
        *v16 = *((_DWORD *)a4 + 104);
        *a8 = *(struct tagPOINT *)((char *)a4 + 420);
      }
      else
      {
LABEL_18:
        v20 = a8;
        *v16 = 0;
        v20->y = 0;
        v20->x = 0;
      }
    }
  }
  result = 1LL;
  *a9 = v15;
  return result;
}
